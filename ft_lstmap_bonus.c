/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizvchi <mizvchi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:33:51 by mizvchi           #+#    #+#             */
/*   Updated: 2025/12/13 17:33:51 by mizvchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}

/*
#include <stdio.h>

static void	*uppercase(void *content)
{
	char	*str;

	str = ft_strdup((char *)content);
	if (!str)
		return (NULL);
	if (*str)
		*str = ft_toupper(*str);
	return (str);
}

static void	*fail_on_x(void *content)
{
	if (*(char *)content == 'x')
		return (NULL);
	return (uppercase(content));
}

static void	del(void *content)
{
	free(content);
}

static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("Node content:\t`%s`\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	run_auto_tests(void)
{
	t_list	*src;
	t_list	*dst;

	printf("\n[AUTO TEST]\n");

	printf("Empty list\n");
	src = NULL;
	dst = ft_lstmap(src, uppercase, del);
	printf("Result: %p\n", dst);

	printf("\nMulti-node success\n");
	src = ft_lstnew(ft_strdup("one"));
	src->next = ft_lstnew(ft_strdup("two"));
	dst = ft_lstmap(src, uppercase, del);
	print_list(dst);
	ft_lstclear(&src, del);
	ft_lstclear(&dst, del);

	printf("\nFailure path\n");
	src = ft_lstnew(ft_strdup("ok"));
	src->next = ft_lstnew(ft_strdup("xray"));
	dst = ft_lstmap(src, fail_on_x, del);
	printf("Result after failure: %p\n", dst);
	ft_lstclear(&src, del);
}

static void	run_user_tests(int ac, char **av)
{
	t_list	*src;
	t_list	*dst;
	int		i;

	printf("\n[USER TEST]\n");
	src = NULL;
	i = 0;
	while (++i < ac)
		ft_lstadd_back(&src, ft_lstnew(ft_strdup(av[i])));
	dst = ft_lstmap(src, uppercase, del);
	print_list(dst);
	ft_lstclear(&src, del);
	ft_lstclear(&dst, del);
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
