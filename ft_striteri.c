/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:36 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 05:28:39 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, s + i);
}

/*
#include <stdio.h>

static void	to_upper(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_toupper(*c);
}

static void	to_even_upper(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = (char)ft_toupper(*c);
}

static void	run_test(const char *label, char *s, void (*f)(unsigned int, char *))
{
	printf("\n[%s]\n", label);
	printf("Before: \"%s\"\n", s);
	ft_striteri(s, f);
	printf("After : \"%s\"\n", s);
}

static void	run_auto_tests(void)
{
	char	test1[] = "hello";
	char	test2[] = "libft";
	char	test3[] = "42 school";

	run_test("uppercase all", test1, to_upper);
	run_test("uppercase even indexes", test2, to_even_upper);
	run_test("with spaces", test3, to_upper);
}

static void	run_user_test(char *s)
{
	printf("\n[USER TEST]\n");
	printf("Before: \"%s\"\n", s);
	ft_striteri(s, to_upper);
	printf("After : \"%s\"\n", s);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>\n"
			"No argument provided, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
