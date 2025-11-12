/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:45:08 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/07 20:44:17 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// dont forget to check this up after!
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	str_len_src;
	size_t	str_len_dst;
	size_t	i;

	str_len_src = ft_strlen(src);
	str_len_dst = ft_strlen(dst);
	i = 0;
	if (size <= str_len_dst)
		return (size + str_len_src);
	while (i < size - str_len_dst - 1 && src[i])
	{
		dst[str_len_dst + i] = src[i];
		i++;
	}
	dst[str_len_dst + i] = '\0';
	return (str_len_src + str_len_dst);
}
