/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:29:08 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/24 14:44:51 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) dest;
	str2 = (unsigned char *) src;
	if ((src == dest) || (n == 0))
		return (dest);
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char dest[10]; 
// 	char str[]= "Klejdo";
// 	char *ptr = ft_memcpy(dest, str, 4);
// 	printf("%s\n", ptr);
// }
