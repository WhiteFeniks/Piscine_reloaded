/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoff <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:35:45 by umoff             #+#    #+#             */
/*   Updated: 2019/04/03 22:48:08 by umoff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

void	ft_disp(int argc, char **argv)
{
	int j;
	int i;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		j;
	int		i;
	char	*x;

	i = 1;
	while (i < (argc - 1))
	{
		j = 1;
		while (j < (argc - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				x = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = x;
			}
			j++;
		}
		i++;
	}
	ft_disp(argc, argv);
	return (0);
}
