/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <minjinki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:39:03 by minjinki          #+#    #+#             */
/*   Updated: 2023/07/18 13:08:17 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	new_c;
	unsigned char	*new_s;

	new_c = (unsigned char)c;
	new_s = (unsigned char *)s;
	while (n--)
	{
		if (*new_s == new_c)
			return (new_s);
		new_s++;
	}
	return (NULL);
}
