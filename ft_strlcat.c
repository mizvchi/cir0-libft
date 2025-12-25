/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:39 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 06:55:59 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	j = 0;
	while (i + j + 1 < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
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

static unsigned char	*make_buffer(const char *dst)
{
	size_t			i;
	size_t			len;
	unsigned char	*buf;

	len = ft_strlen(dst);
	buf = malloc(len + PAD + 1);
	if (!buf)
		return (NULL);
	i = -1;
	while (++i < len)
		buf[i] = (unsigned char)dst[i];
	buf[i++] = '\0';
	while (i < len + PAD + 1)
		buf[i++] = POISON;
	return (buf);
}

static void	test_case(const char *label,
	const char *dst, const char *src, size_t size)
{
	unsigned char	*buf;
	size_t			ret;
	size_t			len;

	buf = make_buffer(dst);
	if (!buf)
	{
		fprintf(stderr, "\n[%s] Allocation failed\n", label);
		return ;
	}
	len = ft_strlen(dst) + PAD + 1;
	printf("\n[%s]\n", label);
	printf("dst=\"%s\" | src=\"%s\" | size=%zu\n\n", dst, src, size);
	printf("Before:\n");
	print_hex(buf, len);
	ret = ft_strlcat((char *)buf, src, size);
	printf("After:\n");
	print_hex(buf, len);
	printf("Return value: %zu\n", ret);
	free(buf);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strlcat tests\n");

	test_case("NORMAL", "Hello", "World", 20);
	test_case("EXACT FIT", "Hello", "World", 11);
	test_case("TRUNCATED", "Hello", "World", 8);
	test_case("SIZE ZERO", "Hello", "World", 0);
	test_case("EMPTY DST", "", "World", 5);
	test_case("EMPTY SRC", "Hello", "", 10);
	test_case("DST FULL", "Hello", "World", 5);
}

static void	run_user_test(const char *dst,
	const char *src, size_t size)
{
	unsigned char	*buf;
	size_t			len;

	buf = make_buffer(dst);
	if (!buf)
	{
		fprintf(stderr, "\nAllocation failed\n");
		return ;
	}
	len = ft_strlen(dst) + PAD + 1;
	printf("Before:\n");
	print_hex(buf, len);
	printf("\nReturn value: %zu\n",
		ft_strlcat((char *)buf, src, size));
	printf("After:\n");
	print_hex(buf, len);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_user_test(av[1], av[2], (size_t)ft_atoi(av[3]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <dst> <src> <size>\n"
			"No or invalid arguments, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
