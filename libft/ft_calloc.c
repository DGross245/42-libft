/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:58:38 by dgross            #+#    #+#             */
/*   Updated: 2022/04/14 20:28:09 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (!size || !count)
	{
		size = 1;
		count = 1;
	}
	if (size > SIZE_MAX / count)
		return (NULL);
	pointer = malloc (count * size);
	if (pointer == NULL)
		return (pointer);
	ft_bzero (pointer, count * size);
	return (pointer);
	free (pointer);
}
