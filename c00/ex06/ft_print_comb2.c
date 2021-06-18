#include <unistd.h>
void	print_number(char number1[2], char number2[2]);
void	validate_numbers(char number1[2], char number2[2]);

void	ft_print_comb2(void)
{
	char	number1[2];
	char	number2[2];

	number1[0] = '0';
	while (number1[0] <= '9')
	{
		number1[1] = '0';
		while (number1[1] <= '9')
		{
			number2[0] = '0';
			while (number2[0] <= '9')
			{
				number2[1] = '0';
				while (number2[1] <= '9')
				{
					validate_numbers(number1, number2);
					number2[1]++;
				}
				number2[0]++;
			}
			number1[1]++;
		}
		number1[0]++;
	}
}

void	print_number(char number1[2], char number2[2])
{
	write(1, number1, 2);
	write(1, " ", 1);
	write(1, number2, 2);
	if (number1[0] == '9' && number1[1] == '8')
		write(1, "", 0);
	else
		write(1, ", ", 2);
}

void	validate_numbers(char number1[2], char number2[2])
{
	if (number1[0] <= number2[0] && number1[1] < number2[1])
		print_number (number1, number2);
	else if (number1[0] < number2[0] && number1[1] <= number2[1])
		print_number (number1, number2);
	if (number1[1] > number2[1] && number1[0] < number2[0])
		print_number (number1, number2);
}

int	main()
{
	ft_print_comb2();
	return(0);
}