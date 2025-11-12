/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:03:12 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/03 20:49:42 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	int		i;
	int		position;

	position = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	sjoin = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!sjoin)
		return (NULL);
	while (s1[i])
	{
		sjoin[position++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		sjoin[position++] = s2[i];
		i++;
	}
	sjoin[position] = '\0';
	return (sjoin);
}
