/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:39 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:39 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

static void	print_content(void *content)
{
	printf("Node content:\t`%s`\n", (char *)content);
}

static void	run_auto_tests(void)
{
	t_list	*head;

	printf("\n[AUTO TEST]\n");

	printf("Empty list\n");
	head = NULL;
	ft_lstiter(head, print_content);

	printf("\nSingle-node list\n");
	head = ft_lstnew(ft_strdup("one"));
	ft_lstiter(head, print_content);
	ft_lstclear(&head, free);

	printf("\nMulti-node list\n");
	head = ft_lstnew(ft_strdup("one"));
	head->next = ft_lstnew(ft_strdup("two"));
	head->next->next = ft_lstnew(ft_strdup("three"));
	ft_lstiter(head, print_content);
	ft_lstclear(&head, free);
}

static void	run_user_tests(int ac, char **av)
{
	t_list	*head;
	t_list	*tmp;
	int		i;

	printf("\n[USER TEST]\n");
	head = NULL;
	i = 0;
	while (++i < ac)
	{
		tmp = ft_lstnew(ft_strdup(av[i]));
		ft_lstadd_back(&head, tmp);
	}
	ft_lstiter(head, print_content);
	ft_lstclear(&head, free);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		run_user_tests(ac, av);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <str1> [str2 ...]\n"
			"No arguments given, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
