/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:13:28 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/16 17:35:19 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst != 0)
		new->next = *lst;
	*lst = new;
}

/* <linked list> adds an element at the beginning of a list
 * lst = the address of a pointer to the first link of a list; 
 * new = the address of a pointer to the node to be added to the list;
 * adds the node "new" at the begging of the list;
 * (18)no return, so it is empty (just as a break);
 */