/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:59:01 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/14 15:04:17 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lil_len;

	lil_len = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((i + lil_len <= len) && big[i])
	{
		if (ft_strncmp(&big[i], little, lil_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
