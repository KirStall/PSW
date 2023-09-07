/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbataill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:49:57 by pbataill          #+#    #+#             */
/*   Updated: 2023/09/07 18:49:58 by pbataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)s;
	while (i < len)
	{
		str2[i] = 0;
		i++;
	}
	return (str2 = s);
}
