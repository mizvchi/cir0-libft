/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:44 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 06:55:45 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

static char	upper(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper(c));
}

static char	index_add(unsigned int i, char c)
{
	return (c + i);
}

static void	test_case(const char *label, const char *s,
			char (*f)(unsigned int, char))
{
	char	*res;

	printf("\n[%s]\n", label);
	if (!s || !f)
	{
		printf("Input: NULL\n");
		res = ft_strmapi(s, f);
		printf("Result: %s\n", res ? res : "NULL");
		free(res);
		return ;
	}
	printf("Input: \"%s\"\n", s);
	res = ft_strmapi(s, f);
	if (!res)
	{
		printf("Result: NULL\n");
		return ;
	}
	printf("Result: \"%s\"\n", res);
	free(res);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strmapi tests\n");

	test_case("UPPERCASE", "hello", upper);
	test_case("EMPTY", "", upper);
	test_case("SPECIAL CHARS", "a\tb\nc", upper);
	test_case("INDEX ADD", "abcd", index_add);
	test_case("NULL STRING", NULL, upper);
	test_case("NULL FUNCTION", "test", NULL);
}

static void	run_user_test(const char *s)
{
	char	*res;

	printf("\n[USER TEST]\n");
	printf("Input: \"%s\"\n", s);
	res = ft_strmapi(s, upper);
	if (!res)
	{
		printf("Result: NULL\n");
		return ;
	}
	printf("Result: \"%s\"\n", res);
	free(res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>\n"
			"No or invalid argument, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
