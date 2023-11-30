/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:34:43 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:45:17 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)b;
	uc = (unsigned char)c;
	while (len > 0)
	{
		*p = uc;
		p++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "jdckbbsdv;";
	char c = 's';
	size_t len = 30;
	ft_memset(str, c, len);
	printf("what happend : %s\n", str);
	return 0;
}
*/
