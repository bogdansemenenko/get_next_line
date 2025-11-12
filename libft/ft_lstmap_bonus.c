/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:07:10 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/14 17:27:38 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		temp = f(lst->content);
		if (!temp)
			return (ft_lstclear(&new_list, del), NULL);
		new_node = ft_lstnew(temp);
		if (!new_node)
		{
			del(temp);
			return (ft_lstclear(&new_list, del), NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*






void	*map_func(void *content)
	{
		char *str = (char *)content;
		size_t len = ft_strlen(str);
		char *new_str = malloc(len + 2);
		if (!new_str)
			return (NULL);
		strcpy(new_str, str);
		new_str[len] = '!';
		new_str[len + 1] = '\0';
		return (new_str);
	}

	// Delete function
void	del_func(void *content)
{
		free(content);
}
int	main(void)
{
	// Create a sample list: "one" -> "two" -> "three"
	t_list *lst = ft_lstnew(ft_strdup("one"));
	lst->next = ft_lstnew(ft_strdup("two"));
	lst->next->next = ft_lstnew(ft_strdup("three"));

	// Apply ft_lstmap
	t_list *new_lst = ft_lstmap(lst, map_func, del_func);

	// Print original list
	t_list *tmp = lst;
	printf("Original list:\n");
	while (tmp)
	{
		printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("NULL\n");

	// Print new list
	tmp = new_lst;
	printf("Mapped list:\n");
	while (tmp)
	{
		printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("NULL\n");

	// Free memory
	ft_lstclear(&lst, del_func);
	ft_lstclear(&new_lst, del_func);

	return (0);
}*/
