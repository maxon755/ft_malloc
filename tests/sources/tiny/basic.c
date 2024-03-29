/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maks <maksym.haiduk@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 13:00:56 by maks              #+#    #+#             */
/*   Updated: 2019/08/28 16:26:57 by maks             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc_tests.h"

void	t_basic_usage(void)
{
	char *p;
	char *x;
	char *c;

	p = malloc(32);
	memset(p, 'p', 32);
	x = malloc(20);
	memset(x, 'x', 20);
	c = malloc(11);
	memset(c, 'c', 11);
	show_alloc_mem();
	ft_putendl("Memory will be freed");
	free(p);
	free(x);
	free(c);
}

void	t_fragmentation(void)
{
	char *p;
	char *x;

	p = malloc(10);
	memset(p, 'p', 10);
	x = malloc(10);
	memset(x, 'x', 10);
}

void	t_defrag_backward(void)
{
	char *p;
	char *x;

	p = malloc(10);
	memset(p, 'p', 10);
	x = malloc(10);
	memset(x, 'x', 10);
	show_alloc_mem();
	ft_putendl(
		"\nMemory will be freed and allocated"
		" in the same memory blocks");
	free(p);
	free(x);
	p = malloc(15);
	memset(p, 'p', 15);
	x = malloc(10);
	memset(x, 'x', 10);
}
