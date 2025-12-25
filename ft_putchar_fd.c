/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:01 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 21:21:27 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <stdio.h>

static int	is_single_char(const char *s)
{
	return (s && s[0] && !s[1]);
}

static void	print_fd_label(int fd)
{
	if (fd == 0)
		ft_putstr_fd("\n[STDIN ] ", 1);
	else if (fd == 1)
		ft_putstr_fd("\n[STDOUT] ", 1);
	else if (fd == 2)
		ft_putstr_fd("\n[STDERR] ", 1);
	else
	{
		ft_putstr_fd("\n[FD ", 1);
		ft_putnbr_fd(fd, 1);
		ft_putstr_fd("] ", 1);
	}
}

static void	run_user_test(char c, int fd)
{
	print_fd_label(fd);
	ft_putchar_fd(c, fd);
	ft_putchar_fd('\n', fd);
}

static void	run_auto_tests(void)
{
	ft_putstr_fd("\nRunning built-in tests:\n", 1);

	run_user_test('A', 1);
	run_user_test('B', 2);
	run_user_test('C', 1);
}

int	main(int ac, char **av)
{
	if (ac == 3 && is_single_char(av[1]))
		run_user_test(av[1][0], ft_atoi(av[2]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <single_character> <fd>\n"
			"No or invalid arguments given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
