/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:38:54 by omaslova          #+#    #+#             */
/*   Updated: 2018/03/26 17:40:01 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int diff;
	int *range;

	i = 0;
	if (min >= max)
		return (0);
	diff = max - min;
	range = (int *)malloc(sizeof(int) * diff);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
