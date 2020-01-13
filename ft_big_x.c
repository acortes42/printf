/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 00:30:09 by acortes-          #+#    #+#             */
/*   Updated: 2020/01/11 19:33:52 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_big_x(t_struct *base)
{
	ft_my_args(base);
	base->x = ft_convert_to_hex(va_arg(base->va_lues, unsigned int));
	if (base->flags == 2)
	{
		if (base->x[0] == '-')
			ft_put2(base);
		ft_precision(base);
		ft_put(base);
		ft_width(base);
		return ;
	}
	if (base->x[0] == '-' && base->flags == 1 && base->precision == 0)
		ft_put2(base);
	ft_width(base);
	if (base->x[0] == '-' && !(base->flags == 1 && base->precision == 0))
		ft_put2(base);
	ft_precision(base);
	if (base->flags != 2)
		ft_put(base);
}
