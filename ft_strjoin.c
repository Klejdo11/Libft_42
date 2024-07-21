/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:56:14 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/22 18:19:41 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	new_length;
	char	*new_string;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	new_length = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc (sizeof(char) * (new_length + 1));
	if (!new_string)
		return (NULL);
	while (*s1)
		new_string[i++] = *s1++;
	while (*s2)
		new_string[i++] = *s2++;
	new_string[i] = '\0';
	return (new_string);
}

// int main()
// {
// 	const char s1[] = "Hello";
// 	const char s2[] = "World";
// 	char *join = ft_strjoin(s1, s2);

// 	if (*s1 == 0)
// 		printf("String not found");
// 	else
// 	{
// 		printf("Joined string is: %s", join);
// 	}
// 	return(0);
// }