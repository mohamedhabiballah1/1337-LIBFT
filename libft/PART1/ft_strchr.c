/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:26:17 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/10 11:28:36 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
            return((char *)&s[i]);
        i++;
    }
    return(NULL);
}