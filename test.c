/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamsell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:03:53 by anamsell          #+#    #+#             */
/*   Updated: 2017/11/07 19:19:53 by anamsell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int		main(void)
{
	char	*str;
	int		fd;

	ft_putnbr(-2147483648);     // plus petit int
	ft_putchar('\n');
	ft_putnbr(2147483647);		// plus grand int
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(-514708360);
	ft_putchar('\n');
	ft_putnbr(+275412);
	ft_putchar('\n');
	ft_putstr("Fair une librairie c'est de l'eau\n");
	ft_putendl("Je ne met pas de retour a la ligne");
	fd = open("test.txt", O_WRONLY | O_CREAT);
	ft_putnbr_fd(-2147483648, fd);     // plus petit int
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(2147483647, fd);		// plus grand int
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-0, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-514708360, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(+275412, fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("Fair une librairie c'est de l'eau\n", fd);
	ft_putendl_fd("Je ne met pas de retour a la ligne", fd);
	ft_putnbr(ft_atoi("				-1522548-1"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-+14755"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("22222222222222"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("				-1522q548"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("a			-2548"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-152254 8"));
	ft_putchar('\n');
	str = ft_memalloc(sizeof(char) * 5);
	str[4] = 'a';
}
