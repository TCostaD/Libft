/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:08:19 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/03 14:48:16 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		str[j] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[i], c) + 1));
		if (str[j] == NULL)
			return (NULL);
		while (s[i] != c && s[i])
			str[j][k++] = s[i++];
		str[j][k] = '\0';
		j++;
	}
	str[j] = NULL;
	return (str);
}
