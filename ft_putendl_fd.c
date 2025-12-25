/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:03 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 22:15:03 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
#include <stdio.h>

static void	print_fd_label(int fd)
{
	if (fd == 0)
		ft_putstr_fd("\n[STDIN ]\n", 1);
	else if (fd == 1)
		ft_putstr_fd("\n[STDOUT]\n", 1);
	else if (fd == 2)
		ft_putstr_fd("\n[STDERR]\n", 1);
	else
	{
		ft_putstr_fd("\n[FD ", 1);
		ft_putnbr_fd(fd, 1);
		ft_putstr_fd("]\n", 1);
	}
}

static void	run_user_test(char *s, int fd)
{
	print_fd_label(fd);
	ft_putendl_fd(s, fd);
}

static void	run_auto_tests(void)
{
	ft_putstr_fd("\nRunning built-in tests:\n", 1);

	run_user_test("`Hello, world!`", 1);
	run_user_test("`Error line`", 2);
	run_user_test("``", 1);
	run_user_test(NULL, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], ft_atoi(av[2]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <fd>\n"
			"No or invalid arguments given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
