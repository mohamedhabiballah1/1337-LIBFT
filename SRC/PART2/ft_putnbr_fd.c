/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:03:22 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/16 11:56:36 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
void    ft_putnbr_fd(int n, int fd)
{

    if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
    }
    else if(n < 0)
    {
        n = n * (-1);
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n, fd);
    }
    else if(n < 10)
    {
        ft_putchar_fd(n +48, fd);
    }
    else if(n > 9)
    {
        ft_putnbr_fd((n / 10),fd);
        ft_putnbr_fd((n % 10), fd); 
    }

}
int main()
{
    int fd;
    int i = -5484;
    fd = open("mohamed", O_WRONLY | O_CREAT);
    ft_putnbr_fd(i, fd);
}
