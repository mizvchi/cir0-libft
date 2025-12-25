/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:15 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:15 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>

static void	print_list(const char *label, t_list *lst)
{
	printf("\n[%s]\n", label);
	while (lst)
	{
		printf("Node content: `%s`\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	run_auto_tests(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("second")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("first")));
	print_list("AUTO TEST", lst);
	ft_lstclear(&lst, free);
}

static void	run_user_test(char *s1, char *s2)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup(s2)));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup(s1)));
	print_list("USER TEST", lst);
	ft_lstclear(&lst, free);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		run_user_test(av[1], av[2]);
	else
	{
		fprintf(stderr,
			"\nUsage: %s <first> <second>\n"
			"No arguments provided, running default tests.\n",
			av[0]);
		run_auto_tests();
	}
	return (0);
}
*/
