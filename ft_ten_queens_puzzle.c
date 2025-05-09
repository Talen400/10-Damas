#include <stdio.h>

void	print_matrix(int matrix[10])
{
	int	j;

	j = 0;
	while (j <= 9)
	{
		printf("%i", matrix[j]);
		j++;
	}
	printf("\n");
}

int	ft_validate(int matrix[10], int num)
{
	int	j;

	j = 0;
	while (j <= 9)
	{
		if (num == matrix[j])
			return (0);
		j++;
	}
	return (1);
}

int	ft_mini_back(int matrix[10], int num)
{
	if (ft_validate(matrix, num))
		ft_mini_back(matrix, num + 1);
	print_matrix(matrix);
	return (1);
}

int	ft_ten_queens_puzzle(void)
{
	int	matrix[10];
	int	j;
	
	j = 0;
	while (j <= 9)
	{
		matrix[j] = -1;
		j++;
	}
	return (ft_mini_back(matrix, 0));
}

int	main(void)
{
	printf("%i\n", ft_ten_queens_puzzle());
}
