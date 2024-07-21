/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:07:29 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/22 18:19:26 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

// int main()
// {
// 	const char str[] = "Hello World";
// 	char *dup = ft_strdup(str);

// 	if (*str == 0)
// 		printf("String not found");
// 	else
// 	{
// 		printf("Duplicate string is: %s", dup);
// 	}
// 	return(0);
// }