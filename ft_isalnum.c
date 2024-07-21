/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqershor <kqershor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:23:31 by kqershor          #+#    #+#             */
/*   Updated: 2024/06/13 13:36:55 by kqershor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9' ))
		return (1);
	return (0);
}
// int main()
// {
// 	char mychar = 'L';
// 	int result;
// 	result =ft_isalnum(mychar);
// 	if(result)
// 	{
// 		printf("%c is a printable charachter \n", mychar);
// 	}
// 	else
// 	{
// 		printf("%c is a nonprintable charachter \n", mychar);
// 	}
// 	return 0;	
// }