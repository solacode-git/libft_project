/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:50:40 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/18 15:54:59 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_b;
	unsigned char	*s2_b;
	size_t			i;

	s1_b = (unsigned char *)s1;
	s2_b = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (s1_b[i] == s2_b[i])
	{
		if (i + 1 == n)
			return (0);
		i++;
	}
	return (s1_b[i] - s2_b[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "solayman";
	char str2[] = "solayman";
	size_t n = 5;
	printf("the output is : %d\n", ft_memcmp(str1, str2, n));
	return 0;
}
*/
