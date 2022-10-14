/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:26:52 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/14 15:18:39 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
int main(void)
{
    int fd;
    fd =open("aaa", O_WRONLY | O_CREAT);
    ft_putchar_fd('c', fd);
    return (0);
}
