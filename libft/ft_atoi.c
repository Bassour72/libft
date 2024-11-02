/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:33:11 by ybassour          #+#    #+#             */
/*   Updated: 2024/10/27 15:33:12 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_handlespaces(const char *str)
{
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

static const char	*ft_handlesign(const char *str, int *sign)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	long	number;
	int		sign;
	int		count;

	number = 0;
	count = 0;
	sign = 1;
	str = ft_handlespaces(str);
	str = ft_handlesign(str, &sign);
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str) - 48;
		str++;
		count++;
	}
	if (count > 19 && sign == -1)
		return (0);
	if (count > 19 && sign == 1)
		return (-1);
	return (number * sign);
}
