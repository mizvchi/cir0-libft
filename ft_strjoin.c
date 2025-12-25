/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:38 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 05:38:28 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	return (str);
}

/*
#include <stdio.h>

static void	run_test(const char *label, const char *s1, const char *s2)
{
	char	*res;

	printf("\n[%s]\n", label);
	printf("String 1: \"%s\"\n", s1);
	printf("String 2: \"%s\"\n\n", s2);

	res = ft_strjoin(s1, s2);
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
	run_test("basic", "Hello, ", "world!");
	run_test("both empty", "", "");
	run_test("first empty", "", "libft");
	run_test("second empty", "libft", "");
	run_test("numbers", "42", " School");
	run_test("spaces", "foo ", " bar");
}

static void	run_user_test(char *s1, char *s2)
{
	char	*res;

	printf("\n[USER TEST]\n");
	printf("String 1: \"%s\"\n", s1);
	printf("String 2: \"%s\"\n\n", s2);

	res = ft_strjoin(s1, s2);
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
	if (ac == 3)
		run_user_test(av[1], av[2]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <str1> <str2>\n"
			"No arguments provided, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
