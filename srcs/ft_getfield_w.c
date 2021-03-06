/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfield_w.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psens <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:40:22 by psens             #+#    #+#             */
/*   Updated: 2017/11/27 19:31:15 by psens            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_getfield_w(size_t t)
{
	size_t	n;

	n = ft_sqrt(t * 4);
	if (n * n == t)
		return (n);
	else
		return (n + 1);
}
