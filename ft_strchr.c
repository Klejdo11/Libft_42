/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:51:05 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/18 17:31:16 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
// int main()
// {
//     const char str[] = "Hello";
//     char ch = 'l';
//     const char *result = ft_strchr(str, ch);
//     if (result != NULL)
//     {
//         printf("Found: %s\n", result);
//     }
//     else
//     {
//         printf("Character not found.\n");
//     }
//     return (0);
// }
