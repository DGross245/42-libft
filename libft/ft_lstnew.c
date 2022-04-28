/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:04:03 by dgross            #+#    #+#             */
/*   Updated: 2022/04/19 13:04:05 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pointer;

	pointer = malloc(sizeof(t_list));
	if (pointer == NULL)
		return (NULL);
	pointer->content = content;
	pointer->next = NULL;
	return (pointer);
}
