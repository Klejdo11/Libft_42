/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:00:28 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/21 20:40:51 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*dest;

	dest = (unsigned char *)ptr;
	while (len > 0)
	{
		*dest = (unsigned char) c;
		dest++;
		len--;
	}
	return (ptr);
}

// int	main()
// {
// 	char str[] = "Klejdo";
// 	ft_memset(str, '5',  3);
// 	printf("%s\n", str);
// 	return (0);
// }