/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlee2 <junlee2@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:18:21 by junlee2           #+#    #+#             */
/*   Updated: 2022/07/20 10:23:51 by junlee2          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*returns;
	size_t	i;

	if ((unsigned int)ft_strlen(s) < start)
	{
		returns = (char *)malloc(1);
		returns[0] = 0;
		return (returns);
	}
	returns = (char *)malloc(len + 1);
	if (!returns)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		returns[i] = s[start + i];
		i++;
	}
	returns[i] = 0;
	return (returns);
}
