/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:40:15 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/12 13:40:17 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	unsigned char	*dtemp;
	unsigned char	*stemp;

	if (dest == src)
		return (dest);
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	dtemp = (unsigned char *)dest;
	stemp = (unsigned char *)src;
	while (0 < n--)
	{
		*(dtemp++) = *(stemp++);
	}
	return (dest);
}
