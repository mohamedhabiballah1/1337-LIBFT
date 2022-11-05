/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:11:32 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/22 12:11:33 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    while (lst)
    {
        if (lst -> next == NULL)
            return (lst);
        lst = lst -> next;
    }
    return (lst);
}

