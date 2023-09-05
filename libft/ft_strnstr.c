/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <minjinki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:53:07 by minjinki          #+#    #+#             */
/*   Updated: 2023/07/18 13:08:55 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	nlen = ft_strlen(needle);
	while (*haystack && len >= nlen)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
