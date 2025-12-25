/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:39:40 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 07:17:21 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, end - start);
	str[end - start] = '\0';
	return (str);
}

/*
#include <stdio.h>

#define PAD		5
#define POISON	0xAA

static void	print_str(const char *label, const char *s)
{
	if (!s)
		printf("%s: (null)\n", label);
	else
		printf("%s: `%s`\n", label, s);
}

static void	test_case(const char *label, const char *s, const char *set)
{
	char	*res;

	printf("\n[%s]\n", label);
	print_str("Original", s);
	print_str("Set", set);
	res = ft_strtrim(s, set);
	print_str("Trimmed", res);
	free(res);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strtrim tests\n");

	test_case("NO TRIM", "hello", "xyz");
	test_case("TRIM BOTH", "  hello  ", " ");
	test_case("TRIM LEFT", "   hello", " ");
	test_case("TRIM RIGHT", "hello   ", " ");
	test_case("FULL TRIM", "xxxxx", "x");
	test_case("EMPTY STRING", "", " ");
	test_case("EMPTY SET", "hello", "");
	test_case("SET OVERLAP", "abccba", "ab");
}

static void	run_user_test(const char *s, const char *set)
{
	char	*res;

	print_str("Original", s);
	print_str("Set", set);
	res = ft_strtrim(s, set);
	print_str("Trimmed", res);
	free(res);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], av[2]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <set>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
