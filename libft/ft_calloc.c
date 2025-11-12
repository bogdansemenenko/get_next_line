/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:45:37 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/14 17:52:47 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*unique_ptr;
	void	*solution;

	if (nmemb == 0 || size == 0)
	{
		unique_ptr = malloc(1);
		if (!unique_ptr)
			return (NULL);
		return (unique_ptr);
	}
	if (size && nmemb > 2147483647 / size)
	{
		return (NULL);
	}
	solution = (void *)malloc(nmemb * size);
	if (!solution)
		return (NULL);
	ft_bzero(solution, nmemb * size);
	return (solution);
}
