/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:54:37 by benjamsc          #+#    #+#             */
/*   Updated: 2025/01/13 16:57:55 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strslen(char **strs)
{
	int	i;
	int	j;

	j = -1;
	while (strs[++j])
	{
		i = 0;
		while (strs[i])
			i++;
	}
	return (j);
}
