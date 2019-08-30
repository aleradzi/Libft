/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:42:53 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/18 18:49:10 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int g)
{
	if ((g > 64 && g < 91) || (g > 96 && g < 123))
		return (1);
	else
		return (0);
}
