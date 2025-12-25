/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:55 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 18:43:25 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if ((!dest || !src) && n)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d <= s)
		ft_memcpy(d, s, n);
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
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

static void	test_case(const char *label,
						const char *src,
						size_t dest_off,
						size_t n)
{
	unsigned char	*buf;
	size_t			len;

	len = ft_strlen(src) + PAD;
	buf = make_buffer(src);
	if (!buf)
	{
		fprintf(stderr, "[%s] allocation failed\n", label);
		return ;
	}
	printf("\n[%s] | ", label);
	printf("dest offset = %zu | n = %zu\n", dest_off, n);
	printf("Before: ");
	print_hex(buf, len);
	ft_memmove(buf + dest_off, buf, n);
	printf("After:  ");
	print_hex(buf, len);
	free(buf);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_memmove tests:\n");
	test_case("NO OVERLAP (FORWARD)", "ABCDE", 5, 5);
	test_case("OVERLAP FORWARD SAFE", "ABCDE", 1, 4);
	test_case("OVERLAP BACKWARD", "ABCDE", 0, 4);
	test_case("SELF COPY", "ABCDE", 0, 5);
	test_case("ZERO BYTES", "ABCDE", 2, 0);
}

static void	run_user_test(const char *s, size_t dest_off, size_t n)
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
	ft_memmove(buf + dest_off, buf, n);
	printf("After:  ");
	print_hex(buf, len);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1],
			(size_t)ft_atoi(av[2]),
			(size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"Usage: %s <string> <dest_offset> <n>\n"
			"No or invalid argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
