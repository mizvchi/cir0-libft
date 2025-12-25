/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:30 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 20:22:37 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s && *s != ch)
		s++;
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>

static void	test_case(const char *label, const char *s, int c)
{
	char	*res;

	printf("\n[%s]\n", label);
	printf("Input string : `%s`\n", s);
	printf("Search char  : `%c` (ASCII %d)\n\n", c, c);
	res = ft_strchr(s, c);
	if (res)
		printf("Result: FOUND at index %ld\n\n", (long)(res - s));
	else
		printf("Result: NOT FOUND\n\n");
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n");
	test_case("BASIC", "hello", 'e');
	test_case("FIRST CHAR", "hello", 'h');
	test_case("LAST CHAR", "hello", 'o');
	test_case("NOT FOUND", "hello", 'z');
	test_case("NULL TERMINATOR", "hello", '\0');
	test_case("EMPTY STRING", "", 'a');
}

static void	run_user_test(const char *s, char c)
{
	printf("Running user test:\n");
	test_case("USER INPUT", s, c);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], av[2][0]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <char>"
			"\nNo argument given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
