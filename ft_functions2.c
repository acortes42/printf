/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 21:01:23 by acortes-          #+#    #+#             */
/*   Updated: 2020/01/11 19:24:34 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	i += 1;
	if (!(str = (char*)malloc(i * sizeof(char))))
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i-- > 0)
		str[i] = s[i];
	return (str);
}

char	*ft_strndup(const char *s, int n)
{
	int		i;
	char	*str;

	i = 0;
	if (n == 0)
		return ("");
	while (s[i] != '\0' && i < n - 1)
		i++;
	i += 1;
	if (!(str = malloc(i * sizeof(char))))
		return (NULL);
	while (i-- > 0)
		str[i] = s[i];
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
