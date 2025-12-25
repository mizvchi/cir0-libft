/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:41 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 06:56:07 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = -1;
	while (++i + 1 < size && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
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
	buf = malloc(len + PAD + 1);
	if (!buf)
		return (NULL);
	i = -1;
	while (++i < len)
		buf[i] = (unsigned char)s[i];
	buf[i++] = '\0';
	while (i < len + PAD + 1)
		buf[i++] = POISON;
	return (buf);
}

static void	test_case(const char *label,
	const char *src, size_t size)
{
	unsigned char	*buf;
	size_t			ret;
	size_t			len;

	buf = make_buffer("XXXXXXXX");
	if (!buf)
	{
		fprintf(stderr, "\n[%s] Allocation failed\n", label);
		return ;
	}
	len = ft_strlen("XXXXXXXX") + PAD + 1;
	printf("\n[%s]\n", label);
	printf("src=\"%s\" | size=%zu\n\n", src, size);
	printf("Before:\n");
	print_hex(buf, len);
	ret = ft_strlcpy((char *)buf, src, size);
	printf("After:\n");
	print_hex(buf, len);
	printf("Return value: %zu\n", ret);
	free(buf);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strlcpy tests\n");

	test_case("NORMAL", "Hello", 10);
	test_case("EXACT FIT", "Hello", 6);
	test_case("TRUNCATED", "Hello", 4);
	test_case("SIZE ZERO", "Hello", 0);
	test_case("EMPTY SRC", "", 5);
}

static void	run_user_test(const char *src, size_t size)
{
	unsigned char	*buf;
	size_t			len;

	buf = make_buffer("XXXXXXXX");
	if (!buf)
	{
		fprintf(stderr, "\nAllocation failed\n");
		return ;
	}
	len = ft_strlen("XXXXXXXX") + PAD + 1;
	printf("Before:\n");
	print_hex(buf, len);
	printf("\nReturn value: %zu\n",
		ft_strlcpy((char *)buf, src, size));
	printf("After:\n");
	print_hex(buf, len);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], (size_t)ft_atoi(av[2]));
	else
	{
		fprintf(stderr,
			"\nUsage: %s <src> <size>\n"
			"No or invalid arguments, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
