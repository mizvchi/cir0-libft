/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:52 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 17:43:11 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>

static void	test_case(const char *label, int value)
{
	int	result;

	result = ft_tolower(value);
	printf("[%s]\n", label);
	printf("input : %d", value);
	if (value >= 32 && value <= 126)
		printf(" ('%c')", value);
	else
		printf(" (non-printable)");
	printf("\n");
	printf("output: %d", result);
	if (result >= 32 && result <= 126)
		printf(" ('%c')", result);
	else
		printf(" (non-printable)");
	printf("\n");
	if (value == result)
		printf("change: NO\n\n");
	else
		printf("change: YES\n\n");
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n\n");
	test_case("'A'", 'A');
	test_case("'Z'", 'Z');
	test_case("'a'", 'a');
	test_case("'z'", 'z');
	test_case("'!'", '!');
	test_case("space", ' ');
	test_case("newline", '\n');
}

static void	run_user_test(const char *arg)
{
	unsigned char	value;

	value = (unsigned char)arg[0];
	printf("Running user test (first character only):\n\n");
	test_case("USER INPUT", value);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"Usage: %s <string>\n"
			"No argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
