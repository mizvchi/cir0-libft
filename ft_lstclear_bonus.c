/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:28 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:28 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*
#include <stdio.h>

static void	del(void *content)
{
	free(content);
}

static void	run_auto_tests(void)
{
	t_list	*head;

	printf("\n[AUTO TEST]\n");

	head = NULL;
	printf("Clearing empty list\n");
	ft_lstclear(&head, del);

	head = ft_lstnew(ft_strdup("one"));
	printf("Clearing single-node list\n");
	ft_lstclear(&head, del);

	head = ft_lstnew(ft_strdup("one"));
	head->next = ft_lstnew(ft_strdup("two"));
	head->next->next = ft_lstnew(ft_strdup("three"));
	printf("Clearing multi-node list\n");
	ft_lstclear(&head, del);
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
	printf("Clearing user-built list\n");
	ft_lstclear(&head, del);
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
