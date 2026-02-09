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
#include <stdlib.h>

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
        printf("\n========== IS DIGIT ===========\n");
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
	printf("\n========== IS DIGIT OR ALPHA ===========\n");
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
	printf("\n========== IS ASCII ===========\n");
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
	printf("\n========== IS PRINTABLE ===========\n");
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
	printf("\n=========== TO UPPER ============\n");
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
	printf("\n=========== TO LOWER ============\n");
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
	printf("\n=========== STRLEN ============\n");
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
	printf("\n=========== STRLCPY ============\n");

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
	printf("\n=========== STRLCAT ============\n");

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
	printf("\n=========== MEMSET ============\n");
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
	printf("\n=========== BZERO ============\n");
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
	printf("\n=========== MEMCPY ============\n");

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

void	test_strchr(void)
{
	printf("\n=========== STRCHR ============\n");

	char *str = "Coucou la ville!";

	if (!strcmp(strchr(str, 'C'), ft_strchr(str, 'C')))
		printf("OK: expected \"%s\", got \"%s\".\n", strchr(str, 'C'), ft_strchr(str, 'C'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strchr(str, 'C'), ft_strchr(str, 'C'));

	if (!strcmp(strchr(str, 'u'), ft_strchr(str, 'u')))
		printf("OK: expected \"%s\", got \"%s\".\n", strchr(str, 'u'), ft_strchr(str, 'u'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strchr(str, 'u'), ft_strchr(str, 'u'));

	if (!strcmp(strchr(str, 'v'), ft_strchr(str, 'v')))
		printf("OK: expected \"%s\", got \"%s\".\n", strchr(str, 'v'), ft_strchr(str, 'v'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strchr(str, 'v'), ft_strchr(str, 'v'));

	if (!strcmp(strchr(str, 'l'), ft_strchr(str, 'l')))
		printf("OK: expected \"%s\", got \"%s\".\n", strchr(str, 'l'), ft_strchr(str, 'l'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strchr(str, 'l'), ft_strchr(str, 'l'));

	if (!strcmp(strchr(str, '\0'), ft_strchr(str, '\0')))
		printf("OK: expected \"%s\", got \"%s\".\n", strchr(str, '\0'), ft_strchr(str, '\0'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strchr(str, '\0'), ft_strchr(str, '\0'));


	if (strchr(str, 'x') == ft_strchr(str, 'x'))
		printf("OK: expected \"%s\", got \"%s\".\n", strchr(str, 'x'), ft_strchr(str, 'x'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strchr(str, 'x'), ft_strchr(str, 'x'));
}

void	test_strrchr(void)
{
	printf("\n=========== STRRCHR ============\n");

	char *strr = "Coucou la ville!";

	if (!strcmp(strrchr(strr, 'C'), ft_strrchr(strr, 'C')))
		printf("OK: expected \"%s\", got \"%s\".\n", strrchr(strr, 'C'), ft_strrchr(strr, 'C'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strrchr(strr, 'C'), ft_strrchr(strr, 'C'));

	if (!strcmp(strrchr(strr, 'u'), ft_strrchr(strr, 'u')))
		printf("OK: expected \"%s\", got \"%s\".\n", strrchr(strr, 'u'), ft_strrchr(strr, 'u'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strrchr(strr, 'u'), ft_strrchr(strr, 'u'));

	if (!strcmp(strrchr(strr, 'v'), ft_strrchr(strr, 'v')))
		printf("OK: expected \"%s\", got \"%s\".\n", strrchr(strr, 'v'), ft_strrchr(strr, 'v'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strrchr(strr, 'v'), ft_strrchr(strr, 'v'));

	if (!strcmp(strrchr(strr, 'l'), ft_strrchr(strr, 'l')))
		printf("OK: expected \"%s\", got \"%s\".\n", strrchr(strr, 'l'), ft_strrchr(strr, 'l'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strrchr(strr, 'l'), ft_strrchr(strr, 'l'));

	if (!strcmp(strrchr(strr, '\0'), ft_strrchr(strr, '\0')))
		printf("OK: expected \"%s\", got \"%s\".\n", strrchr(strr, '\0'), ft_strrchr(strr, '\0'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strrchr(strr, '\0'), ft_strrchr(strr, '\0'));


	if (strrchr(strr, 'x') == ft_strrchr(strr, 'x'))
		printf("OK: expected \"%s\", got \"%s\".\n", strrchr(strr, 'x'), ft_strrchr(strr, 'x'));
	else
		printf("Try again: expected \"%s\", got \"%s\".\n", strrchr(strr, 'x'), ft_strrchr(strr, 'x'));
}

void	test_strncmp(void)
{
	printf("\n=========== STRNCMP ============\n");
	
	char	s1[50] = "Hello there are 75 days left.";
	char	s2[50] = "Hello there are 75 days left.";
	
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	
	if (strncmp(s1, s2, 0) == ft_strncmp(s1, s2, 0))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 0), ft_strncmp(s1, s2, 0));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 0), ft_strncmp(s1, s2, 0));
	
	s2[14] = ' ';
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	
	s2[14] = '~';
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	
	if (strncmp(s1, s2, 9) == ft_strncmp(s1, s2, 9))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));
	
	strcpy(s2, "");
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));

	strcpy(s2, "Hello there are tree days left");
	if (strncmp(s1, s2, 20) == ft_strncmp(s1, s2, 20))
		printf("OK: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
	else
		printf("Try again: expected %d, got %d.\n", strncmp(s1, s2, 20), ft_strncmp(s1, s2, 20));
}

void	test_memmove(void)
{
	char a1[50];
	char a2[50];

	printf("\n========== MEMMOVE ==========\n");

	strcpy(a1, "hello world");
	strcpy(a2, "hello world");
	printf("Test 1: ft_memmove = %s : memmove = %s \n", (char *)ft_memmove(a1 + 6, "42", 2), (char *)memmove(a2 + 6, "42", 2));

	/* 2. dst > src */
	strcpy(a1, "abcdef");
	strcpy(a2, "abcdef");
	printf("Test 2: ft_memmove = %s : memmove = %s \n", (char *)ft_memmove(a1 + 2, a1, 4), (char *)memmove(a2 + 2, a2, 4));

	/* 3. src > dst */
	strcpy(a1, "abcdef");
	strcpy(a2, "abcdef");
	printf("Test 3: ft_memmove = %s : memmove = %s \n", (char *)ft_memmove(a1, a1 + 2, 4), (char *)memmove(a2, a2 + 2, 4));

	/* 4. len = 0 */
	strcpy(a1, "abcdef");
	strcpy(a2, "abcdef");
	printf("Test 4: ft_memmove = %s : memmove = %s \n", (char *)ft_memmove(a1, "xxxx", 0), (char *)memmove(a2, "xxxx", 0));

	/* 5. dst == src */
	strcpy(a1, "abcdef");
	strcpy(a2, "abcdef");
	printf("Test 5: ft_memmove = %s : memmove = %s \n", (char *)ft_memmove(a1, a1, 3), (char *)memmove(a2, a2, 3));

	/* 6. Full buffer copy */
	strcpy(a1, "libft_memmove_test");
	strcpy(a2, "libft_memmove_test");
	printf("Test 6: ft_memmove = %s : memmove = %s \n", (char *)ft_memmove(a1, a1, strlen(a1) + 1), (char *)memmove(a2, a2, strlen(a2) + 1));
}

void test_memchr(void)
{
    const char arr[] = "Make it work, make it right, make it fast.";
    printf("\n=========== MEMCHR ============\n");
    
    void *r1;
    void *r2;

    r1 = memchr(arr, 'l', 5);
    r2 = ft_memchr(arr, 'l', 5);
    printf("Test 1: %s\n", (r1 == r2) ? "OK" : "FAIL");

    r1 = memchr(arr, 'y', 10);
    r2 = ft_memchr(arr, 'y', 10);
    printf("Test 2: %s\n", (r1 == r2) ? "OK" : "FAIL");

    r1 = memchr(arr, 'y', 2);
    r2 = ft_memchr(arr, 'y', 2);
    printf("Test 3: %s\n", (r1 == r2) ? "OK" : "FAIL");

    r1 = memchr(arr, 'y', 0);
    r2 = ft_memchr(arr, 'y', 0);
    printf("Test 4: %s\n", (r1 == r2) ? "OK" : "FAIL");

    r1 = memchr(arr, 'x', 20);
    r2 = ft_memchr(arr, 'x', 20);
    printf("Test 5: %s\n", (r1 == r2) ? "OK" : "FAIL");

    r1 = memchr(arr, '\0', strlen(arr) + 1);
    r2 = ft_memchr(arr, '\0', strlen(arr) + 1);
    printf("Test 6: %s\n", (r1 == r2) ? "OK" : "FAIL");

    r1 = memchr(arr, '\0', 20);
    r2 = ft_memchr(arr, '\0', 20);
    printf("Test 7: %s\n", (r1 == r2) ? "OK" : "FAIL");

    const unsigned char arr2[] = { '/', '|', 0x12, 0xff, 0x09, 0x42, 0x80, '2', '"', '|', '\\' };

    r1 = memchr(arr2, 0x80, 10);
    r2 = ft_memchr(arr2, 0x80, 10);
    printf("Test 8: %s\n", (r1 == r2) ? "OK" : "FAIL");
}

/*
It guarantees only the sign of the result:
< 0 → first memory block is less than the second
== 0 → memory blocks are equal
> 0 → first memory block is greater than the second
*/

int sign(int x)
{
    if (x < 0)
        return (-1);
    if (x > 0)
        return (1);
    return (0);
}

void test_memcmp(void)
{
	printf("\n=========== MEMCMP ============\n");

	int r1;
	int r2;

	r1 = memcmp("abcdef", "abcdef", 6);
	r2 = ft_memcmp("abcdef", "abcdef", 6);
	printf("Test 1: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");

	r1 = memcmp("abc", "xbc", 3);
	r2 = ft_memcmp("abc", "xbc", 3);
	printf("Test 2: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");

	r1 = memcmp("abxdef", "abzdef", 6);
	r2 = ft_memcmp("abxdef", "abzdef", 6);
	printf("Test 3: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");

	r1 = memcmp("abcde", "abcdx", 5);
	r2 = ft_memcmp("abcde", "abcdx", 5);
	printf("Test 4: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");

	{
		char a[] = { 'a', '\0', 'x' };
		char b[] = { 'a', '\0', 'y' };

		r1 = memcmp(a, b, 3);
		r2 = ft_memcmp(a, b, 3);
		printf("Test 5: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");
	}

	r1 = memcmp("abc", "xyz", 0);
	r2 = ft_memcmp("abc", "xyz", 0);
	printf("Test 6: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");

	{
		unsigned char a[] = { 0x80, 0x01, 0x02 };
		unsigned char b[] = { 0x7F, 0x01, 0x02 };

		r1 = memcmp(a, b, 3);
		r2 = ft_memcmp(a, b, 3);
		printf("Test 7: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");
	}

	r1 = memcmp("axxxxx", "bxxxxx", 6);
	r2 = ft_memcmp("axxxxx", "bxxxxx", 6);
	printf("Test 8: %s\n", sign(r1) == sign(r2) ? "OK" : "FAIL");
}

void test_strnstr(void)
{
    char *r1;
    char *r2;

	printf("\n=========== STRNSTR ============\n");
	printf("Test number\t:\thaystack\t:\tneedle\t:\tResult\n");

	r1 = strnstr("hello world", "world", 11);
	r2 = ft_strnstr("hello world", "world", 11);
	printf("Test 1\t\t:\thello world\t:\tworld\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("hello world", "world", 5);
	r2 = ft_strnstr("hello world", "world", 5);
	printf("Test 2\t\t:\thello world\t:\tworld\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("hello world", "lo", 5);
	r2 = ft_strnstr("hello world", "lo", 5);
	printf("Test 3\t\t:\thello world\t:\tworld\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("abcdef", "", 6);
	r2 = ft_strnstr("abcdef", "", 6);
	printf("Test 4\t\t:\tabcdef\t\t:\t\"\"\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("", "a", 0);
	r2 = ft_strnstr("", "a", 0);
	printf("Test 5\t\t:\t\"\"\t\t:\ta\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("abc", "c", 3);
	r2 = ft_strnstr("abc", "c", 3);
	printf("Test 6\t\t:\tabc\t\t:\tc\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("abcabcabc", "abc", 2);
	r2 = ft_strnstr("abcabcabc", "abc", 2);
	printf("Test 7\t\t:\tabcabcabc\t:\tabc\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");

	r1 = strnstr("aaa", "aa", 3);
	r2 = ft_strnstr("aaa", "aa", 3);
	printf("Test 8\t\t:\taaa\t\t:\taa\t:\t%s\n", (r1 == r2) ? "OK" : "FAIL");
}

void	test_atoi(void)
{
	printf("\n=========== ATOI ============\n");

	const char  *tests[] = {
		"42",
		"   42",
		"   -42",
		"+42",
		"0042",
		"42abc",
		"abc42",
		"--42",
		"+-42",
		"",
		"   ",
		"2147483647",
		"-2147483648",
		"2147483648",
		"-2147483649"
	};

	int i = 0;
	int r1;
	int r2;

	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		r1 = atoi(tests[i]);
		r2 = ft_atoi(tests[i]);
		printf("Test %d\t:\t\"%s\"\t:\tatoi=%d\t:\tft_atoi=%d\t:\t%s\n",
			i + 1,
			tests[i],
			r1,
			r2,
			(r1 == r2) ? "OK" : "FAIL");
		i++;
	}
}

void	test_calloc(void)
{
	printf("\n=========== CALLOC ============\n");

	int *r1;
	int *r2;
	size_t n;

	n = 5;
	r1 = calloc(n, sizeof(int));
	r2 = ft_calloc(n, sizeof(int));

	int ok = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (r1[i] != r2[i])
		{
			ok = 0;
			break;
		}
	}
	printf("Test 1: %s\n", ok ? "OK" : "FAIL");
	free(r1);
	free(r2);
	
	r1 = calloc(0, sizeof(int));
	r2 = ft_calloc(0, sizeof(int));
	printf("Test 2: %s\n", (r1 == r2) ? "OK" : "FAIL");
	if (r1 == NULL)
		printf("calloc(0, sizeof(int)) returned NULL\n");
	else
		printf("calloc(0, sizeof(int)) returned non-NULL pointer %p\n", r1);
	if (r2 == NULL)
		printf("ft_calloc(0, sizeof(int)) returned NULL\n");
	else
		printf("ft_calloc(0, sizeof(int)) returned non-NULL pointer %p\n", r2);

	free(r1);
	free(r2);

	n = 100;
	r1 = calloc(n, sizeof(int));
	r2 = ft_calloc(n, sizeof(int));

	ok = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (r1[i] != r2[i])
		{
			ok = 0;
			break;
		}
	}
	printf("Test 3: %s\n", ok ? "OK" : "FAIL");
	free(r1);
	free(r2);

        r1 = calloc(100, 0);
        r2 = ft_calloc(100, 0);
	printf("Test 4: %s\n", (r1 == r2) ? "OK" : "FAIL");
        if (r1 == NULL)
                printf("calloc(0, sizeof(int)) returned NULL\n");
        else
                printf("calloc(0, sizeof(int)) returned non-NULL pointer %p\n", r1);
        if (r2 == NULL)
                printf("ft_calloc(0, sizeof(int)) returned NULL\n");
        else
                printf("ft_calloc(0, sizeof(int)) returned non-NULL pointer %p\n", r2);

        free(r1);
        free(r2);
}

void test_strdup(void)
{
	printf("\n========== STRDUP ===========\n");
	const char *tests[] = {
		"Hello, world!",
		"",
		"   leading spaces",
		"trailing spaces   ",
		"special chars !@#$%^&*()",
		"1234567890",
		"a"
	};

	for (int i = 0; i < (int)(sizeof(tests) / sizeof(tests[0])); ++i)
	{
		char *r1;
		r1 = strdup(tests[i]);
		char *r2; 
		r2 = ft_strdup(tests[i]);
		int ok = 0;

		if (r1 && r2 && strcmp(r1, r2) == 0)
			ok = 1;

		printf("Test %d:\"%s\" : strdup %s : ft_strdup %s : %s\n\n", i + 1, tests[i], r1 ? r1 : "NULL",r2 ? r2 : "NULL", ok ? "OK" : "FAIL");
		free(r1);
		free(r2);
	}
}

void test_substr(void)
{
        printf("\n========== SUBSTR ===========\n");
        const char *s[] = {
                "Hello World",
		"Hello",
                ""
        };
	char	*sub;
	sub = ft_substr(s[0], 0, 5);
	printf("Test 1: s = \"%s\"\t: sub = \"%s\" : start = 0 : len = 5\n", s[0], sub);
	free(sub);
	sub = ft_substr(s[0], 6, 5);
	printf("Test 2: s = \"%s\"\t: sub = \"%s\" : start = 6 : len = 5\n", s[0], sub);
	free(sub);
	sub = ft_substr(s[1], 2, 10);
	printf("Test 3: s = \"%s\"\t\t: sub = \"%s\" : start = 2 : len = 10\n", s[1], sub);
	free(sub);
	sub = ft_substr(s[1], 5, 3);
	printf("Test 4: s = \"%s\"\t\t: sub = \"%s\" : start = 5 : len = 3\n", s[1], sub);
	free(sub);
	sub = ft_substr(s[1], 10, 3);
	printf("Test 5: s = \"%s\"\t\t: sub = \"%s\" : start = 10 : len = 3\n", s[1], sub);
	free(sub);
	sub = ft_substr(s[2], 0, 5);
	printf("Test 6: s = \"%s\"\t\t\t: sub = \"%s\" : start = 0 : len = 5\n", s[2], sub);
	free(sub);
}

void	test_strjoin(void)
{
	char *result;
	printf("\n========== STRJOIN ===========\n");
	result = ft_strjoin("Hello, ", "World!");
	if (result && strcmp(result, "Hello, World!") == 0)
		printf("Test 1 :OK\n");
	else
		printf("Test 1 :FAIL\n");
	free(result);

	result = ft_strjoin("", "World!");
	if (result && strcmp(result, "World!") == 0)
		printf("Test 2 :OK\n");
	else
		printf("Test 2 :FAIL\n");
	free(result);

	result = ft_strjoin("Hello, ", "");
	if (result && strcmp(result, "Hello, ") == 0)
		printf("Test 3 :OK\n");
	else
		printf("Test 3 :FAIL\n");
	free(result);

	result = ft_strjoin("", "");
	if (result && strcmp(result, "") == 0)
		printf("Test 4 :OK\n");
	else
		printf("Test 4 :FAIL\n");
	free(result);

	result = ft_strjoin(NULL, "World!");
	if (result == NULL)
		printf("Test 5 :OK\n");
	else
		printf("Test 5 :FAIL\n");
	free(result);

	result = ft_strjoin("Hello", NULL);
	if (result == NULL)
		printf("Test 6 :OK\n");
	else
		printf("Test 6 :FAIL\n");
	free(result);
}

void	test_strtrim(void)
{
	printf("\n========== STRTRIM ===========\n");
	char *trimmed = ft_strtrim("xxabcxx", "xa");
        printf("s1 = \"xxabcxx\" : set = \"xa\" : output '%s'\n", trimmed);
        free(trimmed);

        char *empty = ft_strtrim("xxxx", "x");
        printf("s1 = \"xxxx\" : set = \"x\" : output '%s'\n", empty);
        free(empty);

        char *no_trim = ft_strtrim("abc", "");
        printf("s1 = \"abc\" : set = \"\" : output '%s'\n", no_trim);
        free(no_trim);

	trimmed = ft_strtrim("llohello","elo");
	printf("s1 = \"llohello\" : set = \"elo\" : output '%s'\n", trimmed);
        free(trimmed);

	trimmed = ft_strtrim("","o");
        printf("s1 = \"\" : set = \"o\" : output '%s'\n", trimmed);
        free(trimmed);

        trimmed = ft_strtrim("","");
        printf("s1 = \"\" : set = \"\" : output '%s'\n", trimmed);
        free(trimmed);
}

static void print_split(char **arr)
{
	int i = 0;
	if (!arr)
	{
		printf("NULL\n");
		return;
	}
	while (arr[i])
	{
		printf("'%s'\n", arr[i]);
		i++;
	}
	printf("'%s'\n\n", arr[i]);
}

static void free_split(char **arr)
{
	int i = 0;
	if (!arr)
		return;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

void test_split(void)
{
	printf("\n========== SPLIT ===========\n");
	char **res;

	printf("\nTest 1: s = \"hello world 42\" , c = ' ', split = \n");
	res = ft_split("hello world 42", ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 2: s = \"hello  world   42\" , c = ' ', split = \n");
	res = ft_split("hello  world   42", ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 3: s = \"  hello world  \" , c = ' ', split = \n");
	res = ft_split("  hello world  ", ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 4: s = \"helloworld42\" , c = ' ', split = \n");
	res = ft_split("helloworld42", ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 5: s = \"\" , c = ' ', split = \n");
	res = ft_split("", ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 6: s = \"   \" , c = ' ', split = \n");
	res = ft_split("   ", ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 7: s = NULL , c = ' ', split = \n");
	res = ft_split(NULL, ' ');
	print_split(res);
	free_split(res);

	printf("\nTest 8: s = \"a,b,c,d\" , c = ',', split = \n");
	res = ft_split("a,b,c,d", ',');
	print_split(res);
	free_split(res);
}

void	test_itoa(void)
{
        printf("\n========== ITOA ===========\n");
	char *res;
	int n;

	n = -123;
	res = ft_itoa(n);
        printf("\nTest 1: n = %d , s = %s\n", n, res);
        free(res);

	n = 0;
	res = ft_itoa(n);
        printf("\nTest 2: n = %d , s = %s\n", n, res);
	free(res);

        n = -2147483648;
        res = ft_itoa(n);
        printf("\nTest 3: n = %d , s = %s\n", n, res);
        free(res);

        n = 2147483647;
        res = ft_itoa(n);
        printf("\nTest 4: n = %d , s = %s\n", n, res);
        free(res);

        n = 982;
        res = ft_itoa(n);
        printf("\nTest 5: n = %d , s = %s\n", n, res);
        free(res);

}

int main()
{
	printf("=========== PART 1 ============\n");
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
	test_strchr();
	test_strrchr();
	test_strncmp();	
	test_strnstr();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_atoi();
	test_calloc();
	test_strdup();
	printf("\n=========== PART 2 ============\n");
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();

}
