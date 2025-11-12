/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:17:56 by bsemenen          #+#    #+#             */
/*   Updated: 2025/09/30 21:50:21 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;

	str = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (n > 0)
	{
		*dst = *str;
		str++;
		dst++;
		n--;
	}
	return (dest);
}
