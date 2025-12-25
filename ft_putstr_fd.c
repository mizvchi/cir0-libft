/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:07 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 21:22:52 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
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

static void	test_case(const char *label, char *s, int fd)
{
	ft_putstr_fd("[", 1);
	ft_putstr_fd(label, 1);
	ft_putstr_fd("]\n", 1);

	print_fd_label(fd);
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

static void	run_auto_tests(void)
{
	ft_putstr_fd("\nRunning built-in tests:\n\n", 1);

	test_case("empty string", "", 1);
	test_case("simple", "Hello, world!", 1);
	test_case("newline inside", "Line 1\nLine 2", 1);
	test_case("stderr", "Error message", 2);
	test_case("NULL string (no output expected)", NULL, 1);
}

static void	run_user_test(char *s, int fd)
{
	test_case("USER INPUT", s, fd);
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
