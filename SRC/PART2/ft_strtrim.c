/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:44:13 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/11 21:04:15 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char c, const char *set)
{
    int i;
    i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return(1);
        i++;
    }
    return(0);
}
char *ft_strtrim(char const *str, char const *set)
{
    char *dst;
    int i;
    int start;
    int end;

    start = 0;
    while(str[start] && check(str[start], set))
        start++;
    end = strlen(str);
    while((end > start) && check(str[end - 1], set))
        end--;
    dst = malloc(sizeof(char) * (strlen(str) - (end - start)));
    if(dst == NULL)
        return(NULL);
    i = 0;
    while(start < end)
    {
        dst[i] = str[start];
        i++;
        start++;
    }
    dst[i] = '\0';
    return(dst);
}
int main()
{
    const char str[] = "....hello world....";
    const char set[] = ".";
    printf("%s", ft_strtrim(str, set));
}