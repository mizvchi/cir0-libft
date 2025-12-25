/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:48 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 19:00:12 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (!n)
		return (0);
	p1 = s1;
	p2 = s2;
	i = -1;
	while (++i < n)
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
	return (0);
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

static unsigned char	*make_buffer(const char *s, size_t pad)
{
	size_t			i;
	size_t			len;
	unsigned char	*buf;

	len = ft_strlen(s);
	buf = malloc(len + pad);
	if (!buf)
		return (NULL);
	i = -1;
	while (++i < len)
		buf[i] = (unsigned char)s[i];
	while (i < len + pad)
		buf[i++] = POISON;
	return (buf);
}

static void	test_case(const char *label,
						const char *s1,
						const char *s2,
						size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			len;

	len = ft_strlen(s1) + PAD;
	b1 = make_buffer(s1, PAD);
	b2 = make_buffer(s2, PAD);
	if (!b1 || !b2)
		return ;
	printf("\n[%s]\n", label);
	printf("n = %zu\n\n", n);
	printf("Buffer 1: ");
	print_hex(b1, len);
	printf("Buffer 2: ");
	print_hex(b2, len);
	printf("\nResult = %d\n\n", ft_memcmp(b1, b2, n));
	free(b1);
	free(b2);
}

static void	run_auto_tests(void)
{
	printf("Running built-in tests:\n");

	test_case("IDENTICAL", "Hello", "Hello", 5);
	test_case("DIFFER START", "abc", "xbc", 3);
	test_case("DIFFER MIDDLE", "abXde", "abYde", 5);
	test_case("PREFIX ONLY", "Hello", "Helium", 3);
	test_case("LIMITED RANGE", "Hello", "Helxo", 3);
	test_case("NULL BYTE", "Hi\0There", "Hi\0World", 6);
}

static void	run_user_test(const char *s1, const char *s2, size_t n)
{
	test_case("USER INPUT", s1, s2, n);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1], av[2], (size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"Usage: %s <string1> <string2> <n>\n"
			"No or invalid argument given, running built-in tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
