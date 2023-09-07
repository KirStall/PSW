/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbataill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:47:52 by pbataill          #+#    #+#             */
/*   Updated: 2023/09/07 18:47:53 by pbataill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str,
	const char *sub_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!sub_str[j])
		return ((char *)(str));
	while (str[i] && sub_str[j] && len)
	{
		if (str[i] == sub_str[j])
			j++;
		else if (j)
		{
			j = 0;
			continue ;
		}
		i++;
		len--;
	}
	if (!sub_str[j])
		return ((char *)(str + i - j));
	return (0);
}
