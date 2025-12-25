/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:51 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 07:17:15 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = malloc(len + 1);
	if (sub)
	{
		ft_memcpy(sub, s + start, len);
		sub[len] = '\0';
	}
	return (sub);
}

/*
#include <stdio.h>

static void	print_str(const char *label, const char *s)
{
	if (!s)
		printf("%s: (null)\n", label);
	else
		printf("%s: `%s`\n", label, s);
}

static void	test_case(const char *label,
						const char *s,
						unsigned int start,
						size_t len)
{
	char	*res;

	printf("\n[%s]\n", label);
	print_str("Original", s);
	printf("Start: %u | Len: %zu\n", start, len);
	res = ft_substr(s, start, len);
	print_str("Substring", res);
	free(res);
}

static void	run_auto_tests(void)
{
	const char	*str;

	str = "Hello, world!";
	printf("Running built-in ft_substr tests on `%s`\n", str);

	test_case("NORMAL", str, 0, 5);
	test_case("MIDDLE", str, 7, 5);
	test_case("END", str, 7, 50);
	test_case("START >= LEN", str, 50, 5);
	test_case("LEN = 0", str, 3, 0);
	test_case("EMPTY STRING", "", 0, 5);
}

static void	run_user_test(const char *s,
							unsigned int start,
							size_t len)
{
	char	*res;

	print_str("Original", s);
	printf("Start: %u | Len: %zu\n", start, len);
	res = ft_substr(s, start, len);
	print_str("Substring", res);
	free(res);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1],
			(unsigned int)ft_atoi(av[2]),
			(size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <start> <len>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
