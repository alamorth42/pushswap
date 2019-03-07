/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:53:45 by alamorth          #+#    #+#             */
/*   Updated: 2019/02/11 14:58:17 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		resolution(int *tab1, int *tab2)
{
	int		med;
	int		i;
	int		len;
	int		j;
	int		k;
	int		l;
	int		y;
	int		coup;
	int u = 0;
	coup = 0;
	y = 0;
	l = 0;
	k = 0;
	j = 0;
	while (tab1[j])
		j++;
	len = ft_get_len(tab1);
	while (i <= len / 2)
	{
		med = ft_get_index_med(tab1);
		if (tab1[0] < tab1[1])
		{
			rev_rotate(tab1);
			u = 1;
			coup += 1;
		}
		if (tab1[j - 1] > tab1[j - 2])
		{
			swap(tab1);
			coup += 1;
		}
		if (tab1[j - 1] <= tab1[med])
		{
			push(tab1, tab2, j - 1, k);
			med = ft_get_index_med(tab1);
			coup += 1;
			if (k > 0)
			{
				if (tab2[k] < tab2[0] || tab1[j - 1] > tab1[0])
				{
					if (tab2[k] < tab2[0] && tab1[j - 1] > tab1[0])
					{
						rotate(tab2);
						rotate(tab1);
						coup += 1;
					}
					else if (tab2[k] < tab2[0])
					{
						rotate(tab2);
						coup += 1;
					}
					else
					{
						rotate(tab1);
						coup += 1;
					}
				}
				else
				{
					if (tab2[k - 1] > tab2[k])
						l = 1;
					if (tab1[j - 3] < tab1[j - 2])
						y = 1;
					if (l == 1 || y == 1)
					{
						if (l == 1 && y == 1)
						{
							swap(tab1);
							swap(tab2);
						}
						else if (l == 1)
							swap(tab2);
						else if (y == 1)
							swap(tab1);
						l = 0;
						y = 0;
						coup += 1;
					}
				}
			}
			k++;
			j--;
			i++;
		}
		else
		{
			if (u != 1)
			{
				rotate(tab1);
				coup += 1;
				med = ft_get_index_med(tab1);
			}
			u = 0;
		}
	}
	return (coup);
}

int		finish(int *tab1,int *tab2)
{
	int		i;
	int		j;
	int		coup;

	coup = 0;
	i = 0;
	j = 0;
	while (tab1[i])
		i++;
	while (tab2[j])
		j++;
	while (j != 0)
	{
		push(tab2, tab1, j - 1, i);
//		if (tab1[i] > tab1[i - 1])
//		{
//			swap(tab1);
//			coup += 1;
//		}
		j--;
		i++;
		coup += 1;
	}
	return (coup);
}
