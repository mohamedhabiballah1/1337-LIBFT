/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:34:16 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/14 16:32:10 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<string.h>
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
void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}
int main()
{
    int fd;
    char str[] = "ergferger";
    fd = open("badr", O_WRONLY | O_CREAT);
    ft_putendl_fd(str, fd);
}