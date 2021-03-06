/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:27:27 by yherrera          #+#    #+#             */
/*   Updated: 2016/11/23 10:27:29 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../hdrs/libft.h"

void	ft_freetab(char ***tab)
{
	size_t	i;

	if (!*tab || !**tab)
		return ;
	i = 0;
	while ((*tab)[i])
	{
		free((*tab)[i]);
		i++;
	}
	free(*tab);
	*tab = NULL;
}
