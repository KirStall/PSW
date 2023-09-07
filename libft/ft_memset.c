/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbataill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:48:50 by pbataill          #+#    #+#             */
/*   Updated: 2023/09/07 18:48:52 by pbataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str1, int val, size_t len)
{
	size_t				i;
	unsigned char		*str2;

	i = 0;
	str2 = (unsigned char *)str1;
	while (i < len)
	{
		str2[i] = val;
		i++;
	}
	return (str2);
}
