/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:52 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 18:37:34 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if ((!dest || !src) && n)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
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

static void	test_case(const char *label, const char *src, size_t n)
{
	unsigned char	*dest;
	size_t			len;

	len = ft_strlen(src) + PAD;
	dest = make_buffer("........");
	if (!dest)
	{
		fprintf(stderr, "[%s] allocation failed\n", label);
		return ;
	}
	printf("\n[%s]\n", label);
	printf("src = \"%s\"\n", src);
	printf("n = %zu\n\n", n);
	printf("Before: ");
	print_hex(dest, len);
	ft_memcpy(dest, src, n);
	printf("After:  ");
	print_hex(dest, len);
	free(dest);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_memcpy tests:\n\n");
	test_case("COPY ZERO BYTES", "HELLO", 0);
	test_case("PARTIAL COPY", "HELLO", 3);
	test_case("FULL COPY", "HELLO", 5);
	test_case("COPY WITH NULL BYTE", "HI\0WORLD", 7);
}

static void	run_user_test(const char *src, size_t n)
{
	unsigned char	*dest;
	size_t			len;

	len = ft_strlen(src) + PAD;
	dest = make_buffer("........");
	if (!dest)
	{
		fprintf(stderr, "allocation failed\n");
		return ;
	}
	printf("Before: ");
	print_hex(dest, len);
	ft_memcpy(dest, src, n);
	printf("After:  ");
	print_hex(dest, len);
	free(dest);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], (size_t)ft_atoi(av[2]));
	else
	{
		fprintf(stderr,
			"Usage: %s <string> <n>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
