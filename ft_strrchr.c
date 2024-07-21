/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:22:22 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/22 18:20:35 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "Hello World";
// 	char *ret = ft_strrchr(str, 'o');

// 	if (*str == 0)
// 		printf("String not found");
// 	else
// 	{
// 		printf("String found at: %s", ret);
// 	}
// 	return(0);
// }