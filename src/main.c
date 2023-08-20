/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 04:30:40 by kamitsui          #+#    #+#             */
/*   Updated: 2023/08/20 11:07:09 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_header.h"

/**
 * @brief The main function of the program.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line argument strings.
 *
 * @return Exit status of the program.
 */
int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int c;

	if (argc != 3)
		return (1);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = add(a, b);
	printf("a[%d] + b[%d] = c[%d]\n", a, b, c);
	JapaneseFunction(MESSAGE);
	return (0);
}
