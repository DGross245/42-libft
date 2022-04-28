/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:33:28 by dgross            #+#    #+#             */
/*   Updated: 2022/04/19 20:00:51 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pointer;

	pointer = NULL;
	while (*lst)
	{
		pointer = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pointer;
	}
}
