/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:05 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 22:24:11 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	nb;
	char	buf[11];

	i = 10;
	nb = n;
	if (nb == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	buf[i] = '\0';
	while (nb > 0)
	{
		buf[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	ft_putstr_fd(&buf[i], fd);
}

/*
#include <stdio.h>

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

static void	test_case(const char *label, int n, int fd)
{
	ft_putstr_fd("[", 1);
	ft_putstr_fd((char *)label, 1);
	ft_putstr_fd("] n = ", 1);
	ft_putnbr_fd(n, 1);
	ft_putstr_fd(" → output:", 1);

	print_fd_label(fd);
	ft_putnbr_fd(n, fd);
	ft_putstr_fd("\n\n", fd);
}

static void	run_auto_tests(void)
{
	ft_putstr_fd("\nRunning built-in tests:\n\n", 1);

	test_case("zero", 0, 1);
	test_case("positive", 42, 1);
	test_case("negative", -42, 1);
	test_case("INT_MAX", 2147483647, 1);
	test_case("INT_MIN", -2147483648, 1);
	test_case("stderr", 123, 2);
}

static void	run_user_test(int n, int fd)
{
	test_case("USER INPUT", n, fd);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(ft_atoi(av[1]), ft_atoi(av[2]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <number> <fd>\n"
			"No or invalid arguments given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
