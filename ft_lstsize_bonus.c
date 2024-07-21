/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 22:08:00 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/23 13:00:48 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int main()
// {
// 	t_list *new;
// 	t_list *new2;
// 	t_list *new3;

// 	new = ft_lstnew();
// 	new2 = ft_lstnew();
// 	new3 = ft_lstnew();
// 	if (new == NULL || new2 == NULL || new3 == NULL)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	ft_lstadd_front(&new, new2);
// 	ft_lstadd_front(&new, new3);
// 	printf("Size: %d\n", ft_lstsize(new));
// 	return (0);
// }