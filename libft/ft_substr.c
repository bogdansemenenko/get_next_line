/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:17:45 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/13 18:50:40 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	len_str;
	size_t			i;

	i = 0;
	len_str = ft_strlen(s);
	if (start > len_str || !s)
	{
		sub = (char *)malloc(1);
		if (!sub)
			return (NULL);
		return (sub[0] = '\0', sub);
	}
	if (start + len > len_str)
		len = len_str - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub[i] = '\0', sub);
}
/*
int	main(void)
{
	char s[] = "Hi world";

	printf("out: %s\n", ft_substr(s, 1, 1));


}*/
