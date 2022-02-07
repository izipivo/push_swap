/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:05:42 by pdursley          #+#    #+#             */
/*   Updated: 2021/10/09 16:05:44 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
