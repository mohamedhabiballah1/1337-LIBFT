/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:36:09 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/10 14:01:23 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
size_t ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while(s[len])
    {
        len++;
    }
    return(len);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *str;
    
    i = 0;
    j = 0;
    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
    if(str == NULL)
        return(NULL);
    while(s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        str[i + j] = s2[j];
        j++;
    }
	str[i+j] = '\0';
    return(str);
}
int main()
{
    char s1[] =  "mohamed.";
    char s2[] = "habiballah";
    
    char *dest = ft_strjoin(s1, s2);
    printf("%s", dest);
    return(0);
}
