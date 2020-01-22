/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:14:00 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/22 17:30:45 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *curr;
	t_list *tmp;

	curr = *begin_list;
	tmp = ft_create_elem(data);
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = tmp;
}
