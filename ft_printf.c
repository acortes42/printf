/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:59:34 by acortes-          #+#    #+#             */
/*   Updated: 2020/01/23 18:10:43 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arr, ...)
{
	t_struct	*base;
	int			n;

	if (!(base = (t_struct*)ft_calloc(1, sizeof(t_struct))))
		return (-1);
	base->copy = (char*)arr;
	ft_all_values_to_start(base);
	if (arr)
	{
		va_start(base->va_lues, arr);
		base->len = ft_super_function(base);
		va_end(base->va_lues);
	}
	n = base->total_return;
	free(base);
	return (n);
}
/*
int main ()
{
ft_printf("\n");
  ft_printf("%%\n");
  ft_printf("%d\n", 42);
  ft_printf("%d%d\n", 42, 41);
  ft_printf("%d%d%d\n", 42, 43, 44);
  ft_printf("%ld\n", 2147483647);
  ft_printf("%lld\n", 9223372036854775807);
  ft_printf("%x\n", 505);
  ft_printf("%X\n", 505);
  ft_printf("%p\n", &ft_printf);
  ft_printf("%20.15s\n", "54321");
  ft_printf("%10s\n", "s");
  ft_printf("%x\n", 3);
  ft_printf("%%\n");
  ft_printf("%+d\n", 3);
  ft_printf("%010d\n", 1);
  ft_printf("%hhd\n", 0);
  ft_printf("%jd\n", 9223372036854775807);
  ft_printf("%zd\n", 4294967295);
  ft_printf("%\n");
  ft_printf("%U\n", 4294967295);
  ft_printf("%u\n", 4294967295);
  ft_printf("%o\n", 40);
  ft_printf("%%#08x\n", 42);
  ft_printf("%x\n", 1000);
  ft_printf("%#X\n", 1000);
  ft_printf("%s\n", NULL);
  ft_printf("%S\n", L"ݗݜशব");
  ft_printf("%s%s\n", "test", "test");
  ft_printf("%%#08x\n", 42);
  ft_printf("%s%s%s\n", "test", "test", "test");
  ft_printf("%C\n", 15000);
	return (0);
}*/
