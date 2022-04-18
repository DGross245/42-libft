/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:00:59 by dgross            #+#    #+#             */
/*   Updated: 2022/04/14 20:48:36 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{	
	void	*pointer;
	size_t	len;

	len = ft_strlen(s1) + 1;
	pointer = malloc (sizeof(char) * len);
	if (pointer == NULL)
		return (NULL);
	strlcpy(pointer, s1, len);
	return ((char *)pointer);
	free (pointer);
}
