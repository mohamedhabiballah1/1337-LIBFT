/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:16:43 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/10 16:38:28 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    int i;
    i = 0;
    while(i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return(b);
}
int main ()
{
    char str[]="hello";
    int i;
    char *p;
    p=ft_memset(str,256,5);
    printf("%s",p);
    return(0);
}