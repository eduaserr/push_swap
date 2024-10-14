/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:39:19 by eduaserr          #+#    #+#             */
/*   Updated: 2024/07/25 13:26:59 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == (char) c)
			return ((char *) &s[i]);
	if (s[i] == (char) c)
		return ((char *) &s[i]);
	return (NULL);
}
