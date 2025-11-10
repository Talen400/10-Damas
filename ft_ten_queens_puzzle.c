/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 03:34:23 by tlavared          #+#    #+#             */
/*   Updated: 2025/11/10 05:37:26 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

# define FAIL 1
# define SUCESS 0

int 	ft_ten_queens_puzzle(void);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	n;

	n = -1;
	while (++n && str[n])
		write(1, &str[n], 1);
}

int ft_ten_queens_puzzle(void)
{

}

int	ft_ten_queens_puzzle(void)
{
	ft_putstr("teste\n");
	return  (SUCESS)
}
