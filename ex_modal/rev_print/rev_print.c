/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:28 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/26 15:17:30 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	ft_putchar(char	c)
{
	write(1, &c, 1);
	return (c);
}
char	*rev_print(char	*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return ("\n");
}

int main()
{
	rev_print("Ponies are awesome");
	write(1, "\n",1);
}
