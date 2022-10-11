/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:22:16 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/10 11:22:19 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void    *ft_memcpy(void *dst, void *src, size_t n)
{
    int i;
    i = 0;
    while(i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return(dst);
}