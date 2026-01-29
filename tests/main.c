/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:26:12 by aotaryan          #+#    #+#             */
/*   Updated: 2026/01/26 15:20:38 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

void	test_isalpha(void)
{
	printf("========== IS ALPHA ===========\n");
	unsigned char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'A';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'a';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'Z';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'z';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'm';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 'N';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = ' ';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = '3';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = ',';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
	c = 15;
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalpha(c), (ft_isalpha(c) != 0) ? 1 : 0);
}

void    test_isdigit(void)
{
        printf("========== IS DIGIT ===========\n");
        unsigned char   c;

        printf("char\t:\tReal\t:\tFT\n");
        c = 'A';
        printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
        c = 'a';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = 15;
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
        c = ',';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
        c = '9';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = '0';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
	c = '4';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isdigit(c), (ft_isdigit(c) != 0) ? 1 : 0);
}

void	test_isalnum(void)
{
	printf("========== IS DIGIT OR ALPHA===========\n");
        unsigned char   c;

        printf("char\t:\tReal\t:\tFT\n");
        c = 'A';
        printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
        c = 'a';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
        c = '0';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
        c = '9';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
        c = '?';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
        c = ' ';
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
	c = 20;
	printf("\'%u\'\t:\t%d\t:\t%d\n", c, isalnum(c), (ft_isalnum(c) != 0) ? 1 : 0);
}

int main()
{
	printf(    "=========== PART 1 ============\n");
	test_isalpha();
	test_isdigit();
	test_isalnum();
}
