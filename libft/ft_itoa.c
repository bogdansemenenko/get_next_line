/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 21:17:42 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/13 19:28:32 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_digits(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*fill_str(char *str_itoa, long long_n, int flag)
{
	int		len_itoa;
	int		i;
	char	neg;

	neg = '-';
	i = 0;
	if (!long_n)
		return (ft_strdup("0"));
	len_itoa = count_digits(long_n) + flag;
	str_itoa[len_itoa] = '\0';
	while (long_n > 0)
	{
		str_itoa[len_itoa - i - 1] = (long_n % 10) + 48;
		long_n /= 10;
		i++;
	}
	if (flag)
		str_itoa[0] = neg;
	return (str_itoa);
}

char	*ft_itoa(int n)
{
	int		flag;
	long	long_n;
	char	*str_itoa;

	long_n = n;
	flag = 0;
	if (n < 0)
	{
		long_n *= -1;
		flag = 1;
	}
	if (n == 0)
	{
		str_itoa = (char *)malloc(sizeof(char) * 2);
		if (!str_itoa)
			return (NULL);
		return (str_itoa[0] = '0', str_itoa[1] = '\0', str_itoa);
	}
	str_itoa = (char *)malloc(sizeof(char) * (count_digits(long_n) + flag + 1));
	if (!str_itoa)
		return (NULL);
	return (fill_str(str_itoa, long_n, flag));
}
/*
int	main(void)
{
	char *s = ft_itoa(0);
	printf("%s\n", s);
	if(s)
		free(s);
}*/
