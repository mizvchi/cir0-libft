/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:07 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 20:09:13 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = nbrlen(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*
#include <limits.h>
#include <stdio.h>

static void	test_case(const char *label, int n)
{
	char	*str;

	printf("\n[%s]\n", label);
	printf("Input : %d\n", n);
	str = ft_itoa(n);
	if (!str)
	{
		printf("Result: allocation failed\n");
		return ;
	}
	printf("Output: `%s`\n", str);
	free(str);
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n");
	test_case("ZERO", 0);
	test_case("POSITIVE", 42);
	test_case("NEGATIVE", -42);
	test_case("INT_MAX", INT_MAX);
	test_case("INT_MIN", INT_MIN);
}

static void	run_user_test(int n)
{
	printf("Running user test:\n");
	test_case("USER INPUT", n);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(ft_atoi(av[1]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <int>"
			"\nNo argument given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
