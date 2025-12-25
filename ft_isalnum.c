/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:32:28 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 16:45:00 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>

static int	is_single_char(const char *s)
{
	return (s && s[0] && !s[1]);
}

static void	test_case(const char *label, int value)
{
	printf("[%s]\n", label);
	printf("value = %d", value);
	if (value >= 32 && value <= 126)
		printf(" ('%c')", value);
	else
		printf(" (non-printable)");
	printf("\n");

	if (ft_isalnum(value))
		printf("Result: YES (alphanumeric)\n\n");
	else
		printf("Result: NO  (not alphanumeric)\n\n");
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n\n");
	test_case("'A'", 'A');
	test_case("'z'", 'z');
	test_case("'0'", '0');
	test_case("'9'", '9');
	test_case("'!'", '!');
	test_case("space", ' ');
	test_case("newline", '\n');
}

static void	run_user_test(char c)
{
	int	value;

	value = (unsigned char)c;
	printf("Running user test:\n\n");
	test_case("USER INPUT", value);
}

int	main(int ac, char **av)
{
	if (ac == 2 && is_single_char(av[1]))
		run_user_test(av[1][0]);
	else
	{
		fprintf(stderr,
			"Usage: %s <single_char>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
