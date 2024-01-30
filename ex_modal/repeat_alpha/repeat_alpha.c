/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:12:03 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/24 13:20:38 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

int	ft_alpha_num(char c)
{
	if (c <= 90 || c >= 65)
		return (c - 64);
	else if(c <= 122 || c >= 97)
		return (c - 96);
}

char	repeat_alpha(char	*c)
{
	int i;
	int	j;
	char	result;

	i = 0;
	while(c[i] != '\0')
	{
		j = 0;
		while(j < ft_alpha_num(c[i]))
		{
			result = ft_putchar(c[i]);
			j++;
		}
		i++;
	}
	return (result);
}
int main()
{
	char l[]="AnDyH";
	ft_putchar(repeat_alpha(l));
}
