/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:54:24 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/22 14:19:50 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			str_len;
	size_t			sub_length;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len < str_len - start)
		sub_length = len;
	else
		sub_length = str_len - start;
	substring = (char *)malloc(sizeof(char) * (sub_length + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, sub_length + 1);
	return (substring);
}
// int	main()
// {
// 	const char str[] = "";
// 	char *substr = ft_substr(str, 1,3);

// 	if (*str == 0)
// 		printf("String not found");
// 	else
// 	{
// 		printf("Substring is: %s", substr);
// 	}
// 	return(0);
// }
