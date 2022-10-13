/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:15:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/13 17:47:53 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count(int c)
{
    int i ;
    i = 0;
    while(c > 0)
    {
        c = (c / 10);
        i++;
    }
    return(i);
}
char *ft_positif(int c)
{
    int i;
    char *new;
    
    i = count(c);
    new = malloc(sizeof(char) * i + 1);
    if(new == NULL)
        return (NULL);
    new[i + 1] = '\0';
    while(i > 0)
    {
        new[i - 1] = (c % 10) + 48;
        c = (c / 10);
        i--;
    }
    return(new);
}
char *ft_negative(int c)
{
    int i;
    char *new;

    i = count(c);
    new = malloc(sizeof(char) * i + 2);
    if(new == NULL)
        return (NULL);
    new[i+1] = '\0';
    new[0]  = '-';
    while(i > 0)
    {
        new[i] = (c % 10) + 48;
        c = (c / 10);
        i--;
    }
    return(new);
}
char *ft_itoa(int n)
{
    char *new;
    if(n > 0)
        new = ft_positif(n);
    else if(n < 0)
    {
        n = n*-1;
        new = ft_negative(n);
    }
    return(new);
}
int main()
{
    int c = 0;
    printf("%s", ft_itoa(c));
    return(0);
}
