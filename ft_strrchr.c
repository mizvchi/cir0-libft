/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:49 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 07:02:23 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		++s;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*
#include <stdio.h>

static void	test_case(const char *label, const char *s, int c)
{
	char	*res;

	printf("\n[%s]\n", label);
	printf("string: \"%s\"\n", s);
	printf("char  : '%c'\n", (char)c);
	res = ft_strrchr(s, c);
	if (res)
		printf("Result: found at index %ld\n", (long)(res - s));
	else
		printf("Result: not found\n");
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strrchr tests\n");

	test_case("BASIC", "hello world", 'o');
	test_case("MULTIPLE", "banana", 'a');
	test_case("NO MATCH", "hello", 'x');
	test_case("NULL CHAR", "hello", '\0');
	test_case("EMPTY STRING", "", 'a');
	test_case("SINGLE CHAR MATCH", "a", 'a');
	test_case("SINGLE CHAR NO MATCH", "a", 'b');
}

static void	run_user_test(const char *s, int c)
{
	char	*res;

	printf("\n[USER TEST]\n");
	printf("string: \"%s\"\n", s);
	printf("char  : '%c'\n", (char)c);
	res = ft_strrchr(s, c);
	if (res)
		printf("Result: found at index %ld\n", (long)(res - s));
	else
		printf("Result: not found\n");
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], av[2][0]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <char>\n"
			"No or invalid argument, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
