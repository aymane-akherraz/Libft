/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:01:14 by aakherra          #+#    #+#             */
/*   Updated: 2024/10/24 12:40:56 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	i;
	int	n;
	int	is_neg;

	i = 0;
	is_neg = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			is_neg = 1;
		i++;
	}
	n = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = (n * 10) + s[i] - '0';
		i++;
	}
	if (is_neg)
		return (-n);
	return (n);
}
