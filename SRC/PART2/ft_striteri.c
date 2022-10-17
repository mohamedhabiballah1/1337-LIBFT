/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:52:25 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/13 20:19:13 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void *ft_striteri(char *s, void (*f)(unsigned int ,char *))
{
    unsigned int i;
    i = 0;
    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}
void f(unsigned int i, char *str)
{
    *str = *str + 32;
}
int main()
{
    char t[]="helo";
    ft_striteri(t,f);
    printf("%s",t);   
}
