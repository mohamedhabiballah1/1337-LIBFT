/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:36:12 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/09 20:45:43 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ft_strlen(char *s)
{
   int i;

   i = 0;
   while(s[i])
      i++;
   return(i);
}
char *ft_strdup(char *src)
{
   char *dest;
   int i;

   i = 0;
   dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
   if(dest == NULL)
      return (NULL);
   while(src[i])
   {
      dest[i] = src[i];
      i++;
   }
   dest[i] = '\0';
   return(dest);
}
int main()
{
   char str[] = "mohamed";
   char *new;
   new = ft_strdup(str);
   printf("%s", new);
   return(0);
}
