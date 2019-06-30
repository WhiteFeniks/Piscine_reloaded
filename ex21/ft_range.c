/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoff <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:50:10 by umoff             #+#    #+#             */
/*   Updated: 2019/04/04 22:58:32 by umoff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *mas;
	int i;

	if (min >= max)
		return (NULL);
	mas = (int*)malloc(sizeof(int) * (max - min));
	if (mas == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		mas[i] = min;
		min++;
		i++;
	}
	return (mas);
}
