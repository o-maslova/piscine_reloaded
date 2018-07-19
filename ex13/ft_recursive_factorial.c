/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:06:35 by omaslova          #+#    #+#             */
/*   Updated: 2018/03/27 16:53:27 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
