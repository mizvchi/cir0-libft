/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:46 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:46 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

static void	print_last(t_list *lst)
{
	t_list	*last;

	last = ft_lstlast(lst);
	if (!last)
		printf("Last node: (null)\n");
	else
		printf("Last node: `%s`\n", (char *)last->content);
}

static void	run_auto_tests(void)
{
	t_list	*lst;

	printf("\n[AUTO TEST]\n");

	lst = NULL;
	print_last(lst);

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("one")));
	print_last(lst);

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));
	print_last(lst);

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
	print_last(lst);
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
