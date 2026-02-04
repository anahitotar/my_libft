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
#include <string.h>
#include <unistd.h>
#include <strings.h>

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
	printf("========== IS DIGIT OR ALPHA ===========\n");
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

void	test_isascii(void)
{
	printf("========== IS ASCII ===========\n");
	char   c;
 	
	printf("char\t:\tReal\t:\tFT\n");
 	c = 0;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = -34;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = '~';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = -128;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = 'n';
 	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
	c = 'A';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isascii(c), (ft_isascii(c) != 0) ? 1 : 0);
}

void	test_isprint(void)
{
	printf("========== IS PRINTABLE ===========\n");
	char   c;
	printf("char\t:\tReal\t:\tFT\n");
	c = -4;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 127;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 0;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = '7';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 'D';
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
	c = 126;
	printf("\'%c\'\t:\t%d\t:\t%d\n", c, isprint(c), (ft_isprint(c) != 0) ? 1 : 0);
}

void	test_toupper(void)
{
	printf("=========== TO UPPER ============\n");
	unsigned char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'a';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = 'z';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = 'A';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = ')';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = '3';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = '~';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
	c = 'B';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, toupper(c), ft_toupper(c));
}

void	test_tolower(void)
{
	printf("=========== TO LOWER ============\n");
	unsigned char	c;

	printf("char\t:\tReal\t:\tFT\n");
	c = 'A';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = 'Z';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = 'a';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = ' ';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = '8';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = 'g';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
	c = '*';
	printf("\'%u\'\t:\t\'%c\'\t:\t\'%c\'\n", c, tolower(c), ft_tolower(c));
}

void	ft_putstr(char *s)
{
	while (*s != '\0')
		write(1, s++, 1);
}

void	test_strlen(void)
{
	printf("=========== STRLEN ============\n");
	char * str;	

	printf("string\t\t:\tReal Size\t:\tFT Size\n");
	str = "Hello";
	ft_putstr(str);
	printf("\t\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
	str = " ";
	ft_putstr(str);
	printf("\t\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
	str = "";
	ft_putstr(str);
	printf("\t\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
	str = "3";
	ft_putstr(str);
	printf("\t\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
	str = "\0";
	ft_putstr(str);	
	printf("\t\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
        str = "gcbfjhert874598";
        ft_putstr(str);
        printf("\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
        str = "r5\0gtjjtn";
        ft_putstr(str);
        printf("\t\t:\t%zu\t\t:\t%zu\n", strlen(str), ft_strlen(str));
}

void	test_strlcpy(void)
{
	printf("=========== STRLCPY ============\n");

	char    dst_real[100];
	char    dst_ft[100];
	char    *src;
	size_t  size;

	printf("src\t\t:\tsize\t:\tret strlcpy\t:\tret ft_strlcpy\t:\tdst_real\t:\tdst_ft\n");	

	src = "123456789";
	size = 5;
	printf("%s\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcpy(dst_real, src, size), ft_strlcpy(dst_ft, src, size), dst_real, dst_ft);

	src = "";
        size = 6;
        printf("%s\t\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcpy(dst_real, src, size), ft_strlcpy(dst_ft, src, size), dst_real, dst_ft);

	src = "abcd6789rty";
        size = 1;
        printf("%s\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcpy(dst_real, src, size), ft_strlcpy(dst_ft, src, size), dst_real, dst_ft); 

	src = "Hello!";
        size = 0;
        printf("%s\t\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcpy(dst_real, src, size), ft_strlcpy(dst_ft, src, size), dst_real, dst_ft);

	src = "tyk";
        size = 4;
        printf("%s\t\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcpy(dst_real, src, size), ft_strlcpy(dst_ft, src, size), dst_real, dst_ft);
}

void	test_strlcat(void)
{
	printf("=========== STRLCAT ============\n");

	char	dst_real[100] = "123";
	char	dst_ft[100] = "123";
	char    *src;
        size_t  size;
 
        printf("src\t\t:\tsize\t:\tret strlcpy\t:\tret ft_strlcpy\t:\tdst_real\t:\tdst_ft\n");

        src = "123456789";
        size = 5;
        printf("%s\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcat(dst_real, src, size), ft_strlcat(dst_ft, src, size), dst_real, dst_ft);

        src = "";
        size = 6;
        printf("%s\t\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t\t:\t%s\n", src, size, strlcat(dst_real, src, size), ft_strlcat(dst_ft, src, size), dst_real, dst_ft);
 
	src = "abcd6789rty";
        size = 10;
	printf("%s\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t:\t%s\n", src, size, strlcat(dst_real, src, size), ft_strlcat(dst_ft, src, size), dst_real, dst_ft);

        src = "Hello!";
        size = 12;
	printf("%s\t\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t:\t%s\n", src, size, strlcat(dst_real, src, size), ft_strlcat(dst_ft, src, size), dst_real, dst_ft);

        src = "tyk";
        size = 0;
	printf("%s\t\t:\t%zu\t:\t%zu\t\t:\t%zu\t\t:\t%s\t:\t%s\n", src, size, strlcat(dst_real, src, size), ft_strlcat(dst_ft, src, size), dst_real, dst_ft);
}

void	test_memset(void)
{
	printf("=========== MEMSET ============\n");
	unsigned char real[10] = "abcdef";
	unsigned char ft[10]   = "abcdef";
	
	printf("real memset\t:\tft_memset\t:\treal[0]\t\t:\tft[0]\t\t:\tReturn value check\n");
	printf("%d\t\t:\t%d\t\t:\t%d\t\t:\t%d\t\t:\t\t", *((char *)memset(real, 1, sizeof(real))), *((char *)ft_memset(ft, 1, sizeof(ft))), real[0], ft[0]);
 
   	 if (ft_memset(ft, 1, sizeof(ft)) == ft)
       		 printf("OK\n");
   	 else
       		 printf("FAIL\n");

         printf("%d\t\t:\t%d\t\t:\t%d\t\t:\t%d\t\t:\t\t", *((char *)memset(real, 0, 4)), *((char *)ft_memset(ft, 0, 4)), real[0], ft[0]);

         if (ft_memset(ft, 0, 4) == ft)
                 printf("OK\n");
         else
                 printf("FAIL\n");

	printf("%d\t\t:\t%d\t\t:\t%d\t\t:\t%d\t\t:\t\t", *((char *)memset(real, 300, sizeof(real))), *((char *)ft_memset(ft, 300, sizeof(ft))), real[0], ft[0]);

	if (ft_memset(ft, 300, sizeof(ft)) == ft)
        	printf("OK\n");
    	else
       		printf("FAIL\n");
	

	printf("%d\t\t:\t%d\t\t:\t%d\t\t:\t%d\t\t:\t\t", *((char *)memset(real, 'o', 5)), *((char *)ft_memset(ft, 'o', 5)), real[0], ft[0]);
         if (ft_memset(ft, 'o', 5) == ft)
                 printf("OK\n");
         else
                 printf("FAIL\n");	
}

void	test_bzero(void)
{
	printf("=========== BZERO ============\n");
	char	real[20] = "abcdef";
	char	ft[20] = "abcdef";
	bzero(real, 4);
	ft_bzero(ft, 4);
	printf("String is \"abcdef\" ,the number of zeroed bytes is 4.\n");
	int	i;
	i = 0;

	while (i < 6 && real[i] == ft[i])
		i++;
	if (i == 6)
		printf("OK: expected [%c] [%c] [%c] [%c] [%c] [%c], got [%c] [%c] [%c] [%c] [%c] [%c].\n", real[0], real[1], real[2], real[3], real[4], real[5], ft[0], ft[1], ft[2], ft[3], ft[4], ft[5]);

	else
		printf("Try again: expected [%c] [%c] [%c] [%c] [%c] [%c], got [%c] [%c] [%c] [%c] [%c] [%c].\n", real[0], real[1], real[2], real[3], real[4], real[5], ft[0], ft[1], ft[2], ft[3], ft[4], ft[5]);

}

void	test_memcpy(void)
{
	printf("=========== MEMCPY ============\n");

	char	real_d[20] = "World";
	char	ft_d[20] = "World";

	if(!strcmp(memcpy(real_d, "source", 3), ft_memcpy(ft_d, "source", 3)))
		printf("OK: expected \"%s\", got \"%s\".\n", real_d, ft_d);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", real_d, ft_d);
	if(!strcmp(memcpy(real_d, "123456source", 9), ft_memcpy(ft_d, "123456source", 9)))
		printf("OK: expected \"%s\", got \"%s\".\n", real_d, ft_d);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", real_d, ft_d);
	if(!strcmp(memcpy(real_d, "ab23456source", 0), ft_memcpy(ft_d, "ab123456source", 0)))
		printf("OK: expected \"%s\", got \"%s\".\n", real_d, ft_d);
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", real_d, ft_d);
}

int main()
{
	printf(    "=========== PART 1 ============\n");
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_strlen();
	test_strlcpy();
	test_strlcat();
	

	test_memset();
	test_bzero();
	test_memcpy();
}
