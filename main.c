/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:37:47 by tfockede          #+#    #+#             */
/*   Updated: 2022/10/04 17:11:25 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries/libft_updated/base/libft.h"
#include "libraries/libft_updated/printf/ft_printf.h"


void main(void)
{
	int a = 0;
	int b = 2;
	int c = 4;

	a = ft_isalnum(c);
	ft_printf("%d\n", a);
}