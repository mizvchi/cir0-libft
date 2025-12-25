/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:19 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:34:23 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>

static void	print_node(const char *label, t_list *node)
{
	printf("\n[%s]\n", label);
	if (!node)
	{
		printf("Node: NULL\n");
		return ;
	}
	printf("Content: %s\n", (char *)node->content);
	printf("Next: %p\n", (void *)node->next);
}

static void	run_auto_tests(void)
{
	t_list	*n1;
	t_list	*n2;

	printf("Running built-in tests\n");

	n1 = ft_lstnew("hello");
	print_node("basic string", n1);

	n2 = ft_lstnew(NULL);
	print_node("NULL content", n2);

	free(n1);
	free(n2);
}

static void	run_user_test(char *s)
{
	t_list	*node;

	printf("\n[USER TEST]\n");
	node = ft_lstnew(s);
	print_node("user input", node);
	free(node);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_test(av[1]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>\n"
			"No argument provided, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
