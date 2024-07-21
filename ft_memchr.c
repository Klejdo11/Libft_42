/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 22:40:34 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/14 17:43:45 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((unsigned char *) s + i);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char s[] = "Hello";
// 	char ch = 'e';
// 	char *ret = memchr(s, ch, 1);
// 	printf("Result: %s\n", ret);
// 	char *result = ft_memchr(s, ch, 1);
//     printf("Result: %s\n", result);
//     return 0;
// }