/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:34:16 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/10/24 23:20:40 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<fcntl.h>
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
int main()
{
	int fd ;
	char n[] = "habiballah";

	fd = open("mohame", O_CREAT | O_WRONLY | O_RDONLY);
	ft_putendl_fd(n, fd);
}