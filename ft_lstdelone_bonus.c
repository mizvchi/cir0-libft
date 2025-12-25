/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:36 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:36 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
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
	t_list	*node;
	t_list	*head;

	printf("\n[AUTO TEST]\n");

	node = ft_lstnew(ft_strdup("single"));
	printf("Deleting single node\n");
	ft_lstdelone(node, del);

	head = ft_lstnew(ft_strdup("one"));
	head->next = ft_lstnew(ft_strdup("two"));
	printf("Deleting head of list\n");
	ft_lstdelone(head, del);
	head = NULL;
}

static void	run_user_tests(int ac, char **av)
{
	t_list	*node;

	printf("\n[USER TEST]\n");
	node = ft_lstnew(ft_strdup(av[1]));
	if (!node)
		return ;
	printf("Deleting node with content: `%s`\n",
		(char *)node->content);
	ft_lstdelone(node, del);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		run_user_tests(ac, av);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <string>\n"
			"No or invalid argument given, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
