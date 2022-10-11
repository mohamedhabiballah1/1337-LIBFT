/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:19:57 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/10 11:36:59 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *ss1;
    char *ss2;

    i = 0;
    ss1 = (char *)s1;
    ss2 = (char *)s2;
    while(i < (n - 1) && ss1[i] == ss2[i])
        i++;
    return((unsigned char *)ss1[i] - (unsigned char *)ss2[i]);
}