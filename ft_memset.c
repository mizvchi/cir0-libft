/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:59 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 18:33:01 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	if (!s && n)
		return (NULL);
	p = (unsigned char *)s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
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

static unsigned char	*make_buffer(const char *s)
{
	size_t			i;
	size_t			len;
	unsigned char	*buf;

	len = ft_strlen(s);
	buf = malloc(len + PAD);
	if (!buf)
		return (NULL);
	i = -1;
	while (++i < len)
		buf[i] = (unsigned char)s[i];
	while (i < len + PAD)
		buf[i++] = POISON;
	return (buf);
}

static void	test_case(const char *label, const char *s, int c, size_t n)
{
	unsigned char	*buf;
	size_t			len;

	len = ft_strlen(s) + PAD;
	buf = make_buffer(s);
	if (!buf)
	{
		fprintf(stderr, "[%s] allocation failed\n", label);
		return ;
	}
	printf("\n[%s] c=%d (0x%02X) | n=%zu\n", label, c, (unsigned char)c, n);
	printf("Before: ");
	print_hex(buf, len);
	ft_memset(buf, c, n);
	printf("After:  ");
	print_hex(buf, len);
	free(buf);
}

static void	run_auto_tests(void)
{
	const char	*str;

	str = "HELLO";
	printf("Running built-in ft_memset tests on \"%s\"\n", str);
	test_case("ZERO", str, 0, 5);
	test_case("MINUS ONE", str, -1, 5);
	test_case("OVERFLOW (256)", str, 256, 5);
	test_case("PARTIAL", str, 'X', 3);
	test_case("N = 0", str, 'X', 0);
}

static void	run_user_test(const char *s, int c, size_t n)
{
	unsigned char	*buf;
	size_t			len;

	len = ft_strlen(s) + PAD;
	buf = make_buffer(s);
	if (!buf)
	{
		fprintf(stderr, "allocation failed\n");
		return ;
	}
	printf("Before: ");
	print_hex(buf, len);
	ft_memset(buf, c, n);
	printf("After:  ");
	print_hex(buf, len);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1],
			ft_atoi(av[2]),
			(size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string> <byte> <n>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
