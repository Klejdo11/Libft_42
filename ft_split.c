/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:38:06 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/24 16:50:13 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_words_counter(const char *s, char delimiter)
{
	size_t	words;
	int		in_word;

	words = 0;
	while (*s)
	{
		in_word = 0;
		while (*s == delimiter && *s)
			s++;
		while (*s != delimiter && *s)
		{
			if (!in_word)
			{
				words++;
				in_word = 42;
			}
			s++;
		}
	}
	return (words);
}

int	ft_malloc_protect(char **words_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	words_v[position] = malloc(buffer);
	if (words_v[position] == NULL)
	{
		while (i < position)
			free(words_v[i++]);
		free(words_v);
		return (1);
	}
	return (0);
}

int	ft_copy(char **words_v, char const *s, char delimiter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimiter && *s)
			s++;
		while (*s != delimiter && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_malloc_protect(words_v, i, len + 1))
				return (1);
			ft_strlcpy(words_v[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**words_v;

	if (s == NULL)
		return (NULL);
	words = 0;
	words = ft_words_counter(s, c);
	words_v = malloc(sizeof(char *) * (words + 1));
	if (words_v == NULL)
		return (NULL);
	words_v[words] = NULL;
	if (ft_copy(words_v, s, c))
		return (NULL);
	return (words_v);
}

// int	main(void)
// {
// 	int			i;
// 	const char	s[] = "Hello, I am, Klejdo.";
// 	char		**result;

// 	i = 0;
// 	result = ft_split(s, ' ');
// 	while (result[i])
// 	{
// 		printf("Result[%d] is : %s\n", i, result[i]);
// 		i++;
// 	}
// 	return (0);
// }