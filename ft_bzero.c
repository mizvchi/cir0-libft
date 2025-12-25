/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:31:57 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 18:02:59 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
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
	unsigned char	*buf;
	size_t			i;
	size_t			len;

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

static void	test_case(const char *label, const char *s, size_t n)
{
	unsigned char	*buf;
	size_t			len;

	len = ft_strlen(s) + PAD;
	buf = make_buffer(s);
	if (!buf)
		return ;
	printf("\n[%s]\nBefore: ", label);
	print_hex(buf, len);
	ft_bzero(buf, n);
	printf("After : ");
	print_hex(buf, len);
	free(buf);
}

static void	run_auto_tests(void)
{
	const char	*str;

	str = "HELLO";
	printf("For `str` = `%s`\n", str);
	test_case("n = 0", str, 0);
	test_case("partial (3)", str, 3);
	test_case("full", str, ft_strlen(str));
}

static void	run_user_test(const char *s)
{
	unsigned char	*buf;
	size_t			len;

	len = ft_strlen(s);
	buf = malloc(len);
	if (!buf)
	{
		fprintf(stderr, "Allocation failed\n");
		return ;
	}
	ft_memcpy(buf, s, len);
	printf("\nFor `str` = `%s`\n\nBefore: ", s);
	print_hex(buf, len);
	ft_bzero(buf, len);
	printf("After : ");
	print_hex(buf, len);
	free(buf);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>"
			"\nNo argument given, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
