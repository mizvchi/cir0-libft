/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:32:35 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 16:35:39 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
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

	if (ft_isalpha(value))
		printf("Result: YES (alphabetic)\n\n");
	else
		printf("Result: NO  (not alphabetic)\n\n");
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n\n");
	test_case("'A'", 'A');
	test_case("'Z'", 'Z');
	test_case("'a'", 'a');
	test_case("'z'", 'z');
	test_case("'0'", '0');
	test_case("'!'", '!');
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
