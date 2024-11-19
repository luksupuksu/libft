/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnorris <lnorris@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:52:15 by lnorris           #+#    #+#             */
/*   Updated: 2024/11/02 19:52:19 by lnorris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	if ((nmemb * size > INT_MAX) || (nmemb == 0) || (size == 0))
		return (array = malloc(0));
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (size * nmemb));
	return (array);
}