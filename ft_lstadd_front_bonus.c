/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 22:04:02 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/23 19:21:08 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *new;

//     new = ft_lstnew();
//     if (new == NULL)
//     {
//         printf("Error\n");
//         return (1);
//     }
//     else
//     printf("Success\n");
//     return (0);
// }