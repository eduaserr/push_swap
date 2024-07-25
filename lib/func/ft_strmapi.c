/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:44:05 by eduaserr          #+#    #+#             */
/*   Updated: 2024/07/25 13:27:12 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = -1;
	p = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	while (s[++i])
	{
		p[i] = (*f)(i, s[i]);
	}
	p[i] = '\0';
	return (p);
}
