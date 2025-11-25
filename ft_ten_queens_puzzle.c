/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 03:34:23 by tlavared          #+#    #+#             */
/*   Updated: 2025/11/25 19:00:10 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

# define FAIL 1
# define SUCESS 0
# define N 10

char	*ft_ten_queens_puzzle(void);
void	ft_putstr(char *str);

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	size_t	len;

	if (!str)
		return ;
	len = ft_strlen(str);
	write(1, str, len);
}

char	*ft_ten_queens_puzzle(void)
{
	int	tab[N][N];

	tab
	return (NULL);
}

int	main(void)
{
	ft_putstr(ft_ten_queens_puzzle());
	return  (SUCESS)
}
