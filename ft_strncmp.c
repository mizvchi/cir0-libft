/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:45 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 06:58:01 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && (s1[i] || s2[i]))
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*
#include <stdio.h>

static void	test_case(const char *label,
			const char *s1, const char *s2, size_t n)
{
	int	res;

	printf("\n[%s]\n", label);
	printf("s1: \"%s\"\n", s1);
	printf("s2: \"%s\"\n", s2);
	printf("n : %zu\n", n);
	res = ft_strncmp(s1, s2, n);
	printf("Result: %d\n", res);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strncmp tests\n");

	test_case("IDENTICAL", "hello", "hello", 5);
	test_case("DIFF EARLY", "hello", "hallo", 5);
	test_case("DIFF LATE", "hello", "helLo", 3);
	test_case("PREFIX", "hello", "hello world", 5);
	test_case("SHORT VS LONG", "hi", "hello", 5);
	test_case("EMPTY BOTH", "", "", 3);
	test_case("EMPTY VS STR", "", "test", 3);
	test_case("N = 0", "abc", "xyz", 0);
}

static void	run_user_test(const char *s1, const char *s2, size_t n)
{
	int	res;

	printf("\n[USER TEST]\n");
	printf("s1: \"%s\"\n", s1);
	printf("s2: \"%s\"\n", s2);
	printf("n : %zu\n", n);
	res = ft_strncmp(s1, s2, n);
	printf("Result: %d\n", res);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1], av[2], (size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <str1> <str2> <n>\n"
			"No or invalid argument, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
