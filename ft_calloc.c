/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:25:01 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/22 17:06:50 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (count * size);
	if (count != 0 && count * size / count != size)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	int *ptr;
// 	ptr = (int *)ft_calloc(5, sizeof(int));
// 	if (ptr == NULL)
// 	{
// 		printf("Memory not allocated.\n");
// 		exit(0);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		ptr[i] = i + 1;
// 	}
// 	printf("Memory successfully allocated.\n");
// 	printf("The elements of the array are: ");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", ptr[i]);
// 	}
// 	free(ptr);
// 	return 0;
// }