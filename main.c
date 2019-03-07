/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 07:01:46 by alamorth          #+#    #+#             */
/*   Updated: 2019/02/11 15:42:43 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	int tab[7] = {5, 1, 3, 6, 2, 8, '\0'};
	int		*oui;
	int j = 0;
	int coup = 0;
	oui = malloc(sizeof(int) * 7);
	oui = tab;
	int *tab2 = malloc(sizeof(int) * 7);
	printf("len= %d\n", ft_get_len(tab));
	printf("index= %d\n", ft_get_index_med(tab));
	coup = resolution(oui, tab2);
	coup += finish(oui ,tab2);
/*	swap(oui);
	push(oui, tab2, 5, 0);
	push(oui, tab2, 4, 1);
	push(oui, tab2, 3, 2);
	rotate(oui);
	rotate(tab2);
	rev_rotate(oui);
	rev_rotate(tab2);
	swap(oui);
	push(tab2, oui, 2, 3);
	push(tab2, oui, 1, 4);
	push(tab2, oui, 0, 5);
	*/
	while(oui[j])
	{
		printf("tab=%d\n", oui[j]);
		j++;
	}
	j = 0;
	while(tab2[j])
	{
		printf("tab2=%d\n", tab2[j]);
		j++;
	}
	printf("coups = %d\n", coup);
}
