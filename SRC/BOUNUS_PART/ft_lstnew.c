/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:11:37 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/24 00:41:40 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new;
    new = malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    new -> content = content;
    new -> next = NULL;
    return (new);
}