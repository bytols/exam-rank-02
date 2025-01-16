/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:05:02 by erocha-l          #+#    #+#             */
/*   Updated: 2025/01/11 19:46:46 by erocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void rra(t_list **stack_a)
{
    t_list *last_node;
    t_list *second_last_node;

    if (!stack_a || !(*stack_a) || !(*stack_a)->next)
        return;
    second_last_node = *stack_a;
    while(second_last_node->next->next != NULL)
        second_last_node = second_last_node->next;
    last_node = second_last_node->next;
    last_node->next = *stack_a;
    *stack_a = last_node;
    second_last_node->next = NULL;
}

void rrb(t_list **stack_b)
{
    t_list *last_node;
    t_list *second_last_node;

    if (!stack_b || !(*stack_b) || !(*stack_b)->next)
        return;
    second_last_node = *stack_b;
    while(second_last_node->next->next != NULL)
        second_last_node = second_last_node->next;
    last_node = second_last_node->next;
    last_node->next = *stack_b;
    *stack_b = last_node;
    second_last_node->next = NULL;
}

void rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}