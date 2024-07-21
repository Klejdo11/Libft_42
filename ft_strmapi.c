/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:06:09 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/21 14:00:47 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_tolower(c));
// 	else
// 	{
// 		return (ft_toupper(c));
// 	}
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	const char s[] = "hello world";
// 	char *res = ft_strmapi(s, f);
// 	printf("Result is %s\n", res);
// 	free(res);
// 	return(0);
// }