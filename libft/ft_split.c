/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:30:46 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/02 17:18:28 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (!s)
		return (0);
	if (s[0] != c && s[0] != '\0')
		count++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c)
{
	int		len;

	len = 0;
	while (s[len] != c)
		len++;
	return (len);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wcount;
	int		wlen;
	char	**p;

	i = 0;
	wcount = ft_count_word(s, c);
	p = (char **)malloc(sizeof(char **) * (wcount + 1));
	if (!p || !s)
		return (0);
	while (i < wcount)
	{
		while (*s == c)
			s++;
		wlen = ft_wordlen(s, c);
		p[i] = (char *)malloc(sizeof(char *) * (wlen + 1));
		j = 0;
		while (j < wlen)
			p[i][j++] = *(s++);
		p[i][j] = '\0';
		i++;
	}
	p[i] = 0;
	return (p);
}
