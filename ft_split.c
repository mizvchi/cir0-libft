/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:12 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 05:19:07 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*make_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

static void	split_free(char **arr, int filled)
{
	while (filled > 0)
		free(arr[--filled]);
	free(arr);
}

static char	**split_fill(char **arr, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			arr[i] = make_word(s, c);
			if (!arr[i])
				return (split_free(arr, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	return (split_fill(arr, s, c));
}

/*
#include <stdio.h>

static void	free_result(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}

static void	print_result(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		printf("`%s`\n", res[i]);
}

static void	run_test(const char *label, const char *s, char c)
{
	char	**res;

	printf("\n[%s]\n", label);
	printf("Input string: \"%s\"\n", s);
	printf("Separator: '%c'\n\n", c);

	res = ft_split(s, c);
	if (!res)
	{
		printf("Result: NULL\n");
		return ;
	}
	print_result(res);
	free_result(res);
}

static void	run_auto_tests(void)
{
	run_test("basic", "hello world 42", ' ');
	run_test("multiple seps", "hello   world", ' ');
	run_test("leading sep", "   hello", ' ');
	run_test("trailing sep", "hello   ", ' ');
	run_test("only seps", "::::", ':');
	run_test("no sep", "libft", ' ');
	run_test("empty string", "", ' ');
}

static void	run_user_test(char *s, char c)
{
	char	**res;

	printf("\n[USER TEST]\n");
	printf("Input string: \"%s\"\n", s);
	printf("Separator: '%c'\n\n", c);

	res = ft_split(s, c);
	if (!res)
	{
		printf("Result: NULL\n");
		return ;
	}
	print_result(res);
	free_result(res);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], av[2][0]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <sep>\n"
			"No arguments provided, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
