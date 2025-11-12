/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:21:35 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/10 19:53:34 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	fill_word(char const *s, char *split, char c, int index)
{
	int	i;

	i = 0;
	while (s[index] && s[index] != c)
		split[i++] = s[index++];
	split[i] = '\0';
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	count_word;

	i = 0;
	count_word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			count_word++;
	}
	return (count_word);
}

static void	free_malloc(char **split, int index)
{
	while (index >= 0)
	{
		free(split[index]);
		index--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		ins;

	ins = 0;
	i = 0;
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[ins] && i < count_words(s, c))
	{
		j = 0;
		while (s[ins] && s[ins] == c)
			ins++;
		while (s[j + ins] && s[j + ins] != c)
			j++;
		ins += j;
		split[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (!split[i])
			return (free_malloc(split, i), NULL);
		fill_word(s, split[i], c, ins - j);
		i++;
	}
	return (split[i] = NULL, split);
}
