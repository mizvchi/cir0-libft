/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:32:12 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 19:42:34 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
#include <stdio.h>

#define PAD		5
#define POISON	0xAA

static void	print_hex(const unsigned char *buf, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		printf("%02X ", buf[i]);
	printf("\n");
}

static void	test_case(const char *label, size_t n, size_t size)
{
	unsigned char	*buf;
	size_t			total;
	size_t			i;

	printf("\n[%s]\n", label);
	printf("n = %zu | size = %zu\n", n, size);

	if (size && n > SIZE_MAX / size)
	{
		buf = ft_calloc(n, size);
		if (!buf)
			printf("Result: allocation failed (expected)\n");
		else
			printf("Error: allocation succeeded (unexpected)\n");
		return ;
	}
	total = n * size + PAD;
	buf = malloc(total);
	if (!buf)
	{
		printf("Allocation failed\n");
		return ;
	}
	ft_memcpy(buf, ft_calloc(n, size), n * size);
	i = n * size - 1;
	while (++i < total)
		buf[i] = POISON;
	printf("Memory dump:\n");
	print_hex(buf, total);
	free(buf);
}

static void	run_auto_tests(void)
{
	test_case("ZERO ELEMENTS", 0, 10);
	test_case("ZERO SIZE", 10, 0);
	test_case("NORMAL", 4, 4);
	test_case("LARGE", 16, 8);
	test_case("OVERFLOW", SIZE_MAX, 2);
}

static void	run_user_test(size_t n, size_t size)
{
	unsigned char	*buf;
	size_t			total;

	if (size && n > SIZE_MAX / size)
	{
		printf("\nOverflow detected, allocation refused\n");
		return ;
	}
	total = n * size;
	buf = ft_calloc(n, size);
	if (!buf)
	{
		fprintf(stderr, "\nft_calloc failed\n");
		return ;
	}
	printf("\nAllocated %zu bytes (%zu x %zu)\n\n", total, n, size);
	print_hex(buf, total);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test((size_t)ft_atoi(av[1]),
			(size_t)ft_atoi(av[2]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <n_elements> <size>"
			"\nNo arguments given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
