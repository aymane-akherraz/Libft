/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:42:06 by aakherra          #+#    #+#             */
/*   Updated: 2025/04/26 19:23:38 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*p;

	len = ft_strlen(s);
	p = malloc(len + 1);
	if (p)
	{
		i = 0;
		while (i < len)
		{
			p[i] = s[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
