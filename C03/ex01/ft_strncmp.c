/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtahmid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:34:30 by rtahmid           #+#    #+#             */
/*   Updated: 2025/01/28 13:34:33 by rtahmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
