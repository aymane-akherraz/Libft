/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:17:23 by aakherra          #+#    #+#             */
/*   Updated: 2025/04/26 19:21:53 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (n);
	p1 = (void *)s1;
	p2 = (void *)s2;
	i = 0;
	n--;
	while (i < n && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
