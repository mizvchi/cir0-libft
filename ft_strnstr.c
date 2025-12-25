/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:47 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 06:59:52 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = -1;
	while (++i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
			if (!little[++j])
				return ((char *)&big[i]);
	}
	return (NULL);
}

/*
#include <stdio.h>

static void	test_case(const char *label,
			const char *big, const char *little, size_t len)
{
	char	*res;

	printf("\n[%s]\n", label);
	printf("big   : \"%s\"\n", big);
	printf("little: \"%s\"\n", little);
	printf("len   : %zu\n", len);
	res = ft_strnstr(big, little, len);
	if (res)
		printf("Result: found at index %ld\n", (long)(res - big));
	else
		printf("Result: not found\n");
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strnstr tests\n");

	test_case("BASIC", "hello world", "world", 11);
	test_case("START", "hello world", "hello", 11);
	test_case("END", "hello world", "world", 11);
	test_case("NO MATCH", "hello world", "42", 11);
	test_case("LEN TOO SMALL", "hello world", "world", 8);
	test_case("EMPTY LITTLE", "hello world", "", 11);
	test_case("EMPTY BIG", "", "test", 5);
	test_case("OVERLAP", "aaaaa", "aaa", 5);
}

static void	run_user_test(const char *big, const char *little, size_t len)
{
	char	*res;

	printf("\n[USER TEST]\n");
	printf("big   : \"%s\"\n", big);
	printf("little: \"%s\"\n", little);
	printf("len   : %zu\n", len);
	res = ft_strnstr(big, little, len);
	if (res)
		printf("Result: found at index %ld\n", (long)(res - big));
	else
		printf("Result: not found\n");
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1], av[2], (size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <big> <little> <len>\n"
			"No or invalid argument, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
