/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:34:37 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:34:37 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*
#include <stdio.h>

static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("`%s`\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	auto_tests(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("one"));
	ft_lstadd_back(&lst, ft_lstnew("two"));
	ft_lstadd_back(&lst, ft_lstnew("three"));
	printf("\n[AUTO]\n");
	printf("Size: %d\n", ft_lstsize(lst));
	print_list(lst);
	ft_lstclear(&lst, NULL);
}

static void	user_tests(int ac, char **av)
{
	t_list	*lst;
	int		i;

	lst = NULL;
	i = 0;
	while (++i < ac)
		ft_lstadd_back(&lst, ft_lstnew(av[i]));
	printf("\n[USER]\n");
	printf("Size: %d\n", ft_lstsize(lst));
	print_list(lst);
	ft_lstclear(&lst, NULL);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		user_tests(ac, av);
	else
	{
		fprintf(stderr,
			"Usage: %s <str1> <str2> ... <strN>\n"
			"No input provided, running automatic tests.\n",
			av[0]);
		auto_tests();
	}
	return (0);
}
*/
