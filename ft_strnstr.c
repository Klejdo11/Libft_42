/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:46:29 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/15 18:22:57 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	if (*substr == '\0')
		return ((char *)str);
	i = 0;
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while (i + j < len && str[i + j] == substr[j] && substr[j] != '\0')
		{
			if (substr[j + 1] == '\0')
				return ((char *) str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main()
// {
// const char str[]= "abc, def, xyz";
// const char substr[] = "bce";
// char *ptr = ft_strnstr(str, substr, 15);
// if (ptr != NULL) {
//       printf("Substring found: %s\n", substr);
//   } else {
//         printf("Substring not found.\n");
//     }
//   return 0;
// }