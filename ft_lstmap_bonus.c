/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:10:32 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/23 20:27:38 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*ptr;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	new_elem = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		new_elem = ft_lstnew(ptr);
		if (!new_elem)
		{
			del (ptr);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
// void *increment_content(void *content)
// {
// 	int *num = (int *)content;
// 	int *new_num = malloc(sizeof(int));
// 	if (new_num)
// 		*new_num = (*num) + 1;
// 	return (new_num);
// }

// int main()
// {
// 	t_list *lst;
// 	t_list *new;
// 	t_list *tmp;

// 	// Create the original list
// 	lst = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)(lst->content) = 10;
// 	lst->next = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)(lst->next->content) = 20;
// 	lst->next->next = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)(lst->next->next->content) = 30;

// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("Original list %d\n", *(int *)(tmp->content));
// 		tmp = tmp->next;
// 	}

// 	// Apply ft_lstmap to the list
// 	new = ft_lstmap(lst, increment_content, free);

// 	// Print the contents of the new list
// 	tmp = new;
// 	while (tmp)
// 	{
// 		printf("Modified list %d\n", *(int *)(tmp->content));
// 		tmp = tmp->next;
// 	}

// 	// Free the lists
// 	ft_lstclear(&lst, free);
// 	ft_lstclear(&new, free);

// 	return (0);
// }
