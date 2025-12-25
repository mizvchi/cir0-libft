/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:31:49 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 19:35:42 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
		res = res * 10 + (*nptr++ - '0');
	return (res * sign);
}

/*
#include <stdio.h>

static void	test_case(const char *label, const char *s)
{
	int	sys;
	int	ft;

	sys = atoi(s);
	ft = ft_atoi(s);
	printf("\n[%s]\n", label);
	printf("Input : `%s`\n", s);
	printf("atoi    : %d\n", sys);
	printf("ft_atoi : %d\n", ft);
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n");

	test_case("PLAIN", "42");
	test_case("LEADING SPACES", "   42");
	test_case("NEGATIVE", "-42");
	test_case("POSITIVE SIGN", "+42");
	test_case("DOUBLE SIGN --", "--42");
	test_case("DOUBLE SIGN ++", "++42");
	test_case("MIXED SIGN +-", "+-42");
	test_case("ALPHA SUFFIX", "42abc");
	test_case("ALPHA PREFIX", "abc42");
	test_case("EMPTY STRING", "");
	test_case("ONLY SPACES", "   ");
	test_case("INT MAX", "2147483647");
	test_case("INT MIN", "-2147483648");
	test_case("OVERFLOW +", "2147483648");
	test_case("OVERFLOW -", "-2147483649");
}

static void	run_user_test(const char *s)
{
	printf("Running user test:\n");
	test_case("USER INPUT", s);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>"
			"\nNo argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
