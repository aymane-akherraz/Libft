/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:08:01 by aakherra          #+#    #+#             */
/*   Updated: 2025/04/26 19:23:38 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if (!str || !to_find)
		return (NULL);
	if (!(*to_find))
		return ((char *)str);
	i = 0;
	l = ft_strlen(to_find);
	while (str[i] && (i + l) <= len)
	{
		j = 0;
		while (j < l && str[i + j] == to_find[j])
			j++;
		if (l == j)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
