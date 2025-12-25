/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:32 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 20:44:33 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
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

static unsigned char	*poisoned_strdup(const char *s)
{
	size_t			i;
	size_t			len;
	unsigned char	*buf;

	len = ft_strlen(s) + 1;
	buf = malloc(len + PAD);
	if (!buf)
		return (NULL);
	i = -1;
	while (++i < len + PAD)
		buf[i] = POISON;
	ft_memcpy(buf, s, len);
	return (buf);
}

static void	test_case(const char *label, const char *s)
{
	unsigned char	*dup;
	size_t			len;

	len = ft_strlen(s) + 1 + PAD;
	printf("\n[%s]\n", label);
	printf("Input: `%s`\n", s);
	dup = poisoned_strdup(s);
	if (!dup)
	{
		fprintf(stderr, "allocation failed\n");
		return ;
	}
	printf("Memory dump (string + \\0 + PAD):\n");
	print_hex(dup, len);
	free(dup);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strdup tests:\n\n");
	test_case("BASIC", "hello");
	test_case("EMPTY STRING", "");
	test_case("SPACES", "hello world");
	test_case("SYMBOLS", "!@#$%^&*()");
	test_case("LONG STRING",
		"This is a longer test string for ft_strdup");
}

static void	run_user_test(const char *s)
{
	unsigned char	*dup;
	size_t			len;

	len = ft_strlen(s) + 1 + PAD;
	printf("\n[USER TEST]\n");
	printf("Input: `%s`\n", s);
	dup = poisoned_strdup(s);
	if (!dup)
	{
		fprintf(stderr, "allocation failed\n");
		return ;
	}
	print_hex(dup, len);
	free(dup);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"Usage: %s <string>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
