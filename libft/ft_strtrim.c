/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:42:29 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/13 19:13:34 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len_s1;
	int	start_ind;
	int	end_ind;

	len_s1 = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	start_ind = i;
	i = 0;
	while (ft_strchr(set, s1[len_s1 - i - 1]) != NULL)
		i++;
	end_ind = i;
	return (ft_substr(s1, start_ind, len_s1 - (start_ind + end_ind)));
}
/*
int main(void)
{
	printf("trim : %s\n", ft_strtrim("tripouille   xxx", " x"));
}*/
