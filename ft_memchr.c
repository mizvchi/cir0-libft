/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:43 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 18:53:00 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;

	p = s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*p == ch)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/*
#include <stdio.h>

static void	test_case(const char *label,
						const unsigned char *buf,
						size_t n,
						unsigned char c)
{
	void	*found;

	printf("[%s]\n", label);
	printf("Searching for byte: 0x%02X", c);
	if (c >= 32 && c <= 126)
		printf(" ('%c')", c);
	printf("\n");
	found = ft_memchr(buf, c, n);
	if (found)
		printf("Result: FOUND at index %ld\n\n",
			(long)((const unsigned char *)found - buf));
	else
		printf("Result: NOT FOUND\n\n");
}

static void	run_auto_tests(void)
{
	unsigned char	buf[] = "Hello, World!";

	printf("Running built-in tests, for `str` = `%s`:\n\n", buf);
	test_case("FIRST CHAR", buf, 13, 'H');
	test_case("MIDDLE CHAR", buf, 13, ',');
	test_case("LAST CHAR", buf, 13, '!');
	test_case("ABSENT CHAR", buf, 13, 'x');
	test_case("NULL BYTE", buf, 13, '\0');
	test_case("LIMITED RANGE", buf, 5, 'W');
	test_case("ZERO LENGTH", buf, 0, 'H');
}

static void	run_user_test(const unsigned char *s, unsigned char c)
{
	size_t	len;

	len = ft_strlen((const char *)s);
	printf("Running user test:\n\n");
	test_case("USER INPUT", s, len, c);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test((unsigned char *)av[1],
			(unsigned char)av[2][0]);
	else
	{
		fprintf(stderr,
			"Usage: %s <string> <char>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
