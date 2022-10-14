/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:21:56 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/14 15:30:23 by mhabib-a         ###   ########.fr       */
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
void    ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}
int main()
{
    int fd;
    char str[] = "mohamed habiballah its mesvsvsd ";
    fd = open("mohamed", O_WRONLY | O_CREAT);
    ft_putstr_fd(str, fd);
}