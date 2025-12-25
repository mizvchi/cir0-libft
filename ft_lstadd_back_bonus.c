/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:11 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:11 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

/*
#include <stdio.h>

static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("Node: `%s`\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	run_auto_tests(void)
{
	t_list	*lst;

	printf("\n[AUTO TEST]\n");

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("one")));
	print_list(lst);

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));
	print_list(lst);

	ft_lstclear(&lst, free);
}

static void	run_user_tests(int ac, char **av)
{
	t_list	*lst;
	t_list	*node;
	int		i;

	lst = NULL;
	i = 0;
	while (++i < ac)
	{
		node = ft_lstnew(ft_strdup(av[i]));
		if (!node)
		{
			ft_lstclear(&lst, free);
			return ;
		}
		ft_lstadd_back(&lst, node);
	}
	printf("\n[USER TEST]\n");
	print_list(lst);
	ft_lstclear(&lst, free);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		run_user_tests(ac, av);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <str1> <str2> ... <strN>\n"
			"No arguments provided, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
