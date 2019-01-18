/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifstrdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 16:52:13 by pmorgan-          #+#    #+#             */
/*   Updated: 2019/01/02 14:12:21 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ifstrdel(char **str_address)
{
	if (*str_address)
		ft_strdel(str_address);
}