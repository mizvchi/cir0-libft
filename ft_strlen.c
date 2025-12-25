/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:35:42 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/14 17:56:33 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
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

static void	test_case(const char *label, const char *s)
{
	unsigned char	*buf;
	size_t			len;

	printf("\n[%s]\n", label);
	if (!s)
	{
		printf("Input: NULL\n");
		printf("Length: %zu\n", ft_strlen(s));
		return ;
	}
	buf = make_buffer(s);
	if (!buf)
	{
		fprintf(stderr, "\nAllocation failed\n");
		return ;
	}
	len = ft_strlen(s) + PAD + 1;
	printf("Input string: \"%s\"\n", s);
	printf("Memory layout: ");
	print_hex(buf, len);
	printf("Length: %zu\n", ft_strlen(s));
	free(buf);
}

static void	run_auto_tests(void)
{
	printf("Running built-in ft_strlen tests\n");

	test_case("NORMAL", "Hello");
	test_case("EMPTY", "");
	test_case("SPACES", "     ");
	test_case("SPECIAL CHARS", "\t\n\r");
	test_case("NULL", NULL);
}

static void	run_user_test(const char *s)
{
	printf("\n[USER TEST]\n");
	printf("Input string: \"%s\"\n", s);
	printf("Length: %zu\n", ft_strlen(s));
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>\n"
			"No or invalid argument, running built-in tests.\n\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
