/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:11:21 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/22 12:11:22 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void  ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
