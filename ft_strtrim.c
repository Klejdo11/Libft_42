/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:40:52 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/22 18:20:53 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	new_length;
	char	*new_string;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	new_length = end - start;
	new_string = (char *)malloc(sizeof(char) * (new_length + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, &s1[start], (new_length + 1));
	return (new_string);
}

// int main ()
// {
// 	const char s1[] = "Hello World";
// 	const char set[] = "Helo";
// 	char *trim = ft_strtrim(s1, set);

// 	if (*s1 == 0)
// 		printf("String not found");
// 	else
// 	{
// 		printf("Trimmed string is: %s", trim);
// 	}
// 	return(0);
// }