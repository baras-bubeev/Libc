/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpowder <mpowder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:32:29 by mpowder           #+#    #+#             */
/*   Updated: 2020/11/01 17:52:16 by mpowder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main()
{
    /*printf("\nft_tolower:\n");
    printf("%c = ", tolower('A'));
    printf("%c\n", ft_tolower('A'));
    printf("%c = ", tolower('a'));
    printf("%c\n", ft_tolower('a'));
    printf("%c = ", tolower('Z'));
    printf("%c\n", ft_tolower('Z'));
    printf("%c = ", tolower('z'));
    printf("%c\n", ft_tolower('z'));
    printf("%c = ", tolower('?'));
    printf("%c\n", ft_tolower('?'));
    printf("%c = ", tolower(' '));
    printf("%c\n", ft_tolower(' '));

    printf("\nft_toupper:\n");
    printf("%c = ", toupper('A'));
    printf("%c\n", ft_toupper('A'));
    printf("%c = ", toupper('a'));
    printf("%c\n", ft_toupper('a'));
    printf("%c = ", toupper('Z'));
    printf("%c\n", ft_toupper('Z'));
    printf("%c = ", toupper('z'));
    printf("%c\n", ft_toupper('z'));
    printf("%c = ", toupper('?'));
    printf("%c\n", ft_toupper('?'));
    printf("%c = ", toupper(' '));
    printf("%c\n", ft_toupper(' '));
    
    printf("\nft_isprint:\n");
    printf("%d = ", isprint(126));
    printf("%d\n", ft_isprint(126));
    printf("%d = ", isprint(127));
    printf("%d\n", ft_isprint(127));
    printf("%d = ", isprint(32));
    printf("%d\n", ft_isprint(32));
    printf("%d = ", isprint(2));
    printf("%d\n", ft_isprint(2));

    printf("\nft_isascii:\n");
    printf("%d = ", isascii(0));
    printf("%d\n", ft_isascii(0));
    printf("%d = ", isascii(127));
    printf("%d\n", ft_isascii(127));
    printf("%d = ", isascii(128));
    printf("%d\n", ft_isascii(128));

    printf("\nft_isalnum:\n");
    printf("%d = ", isalnum('0'));
    printf("%d\n", ft_isalnum('0'));
    printf("%d = ", isalnum('9'));
    printf("%d\n", ft_isalnum('9'));
    printf("%d = ", isalnum('a'));
    printf("%d\n", ft_isalnum('a'));
    printf("%d = ", isalnum('z'));
    printf("%d\n", ft_isalnum('z'));
    printf("%d = ", isalnum('A'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d = ", isalnum('Z'));
    printf("%d\n", ft_isalnum('Z'));
    printf("%d = ", isalnum('['));
    printf("%d\n", ft_isalnum('['));
    printf("%d = ", isalnum(';'));
    printf("%d\n", ft_isalnum(';'));

    printf("\nft_isdigit:\n");
    printf("%d = ", isdigit('0'));
    printf("%d\n", ft_isdigit('0'));
    printf("%d = ", isdigit('9'));
    printf("%d\n", ft_isdigit('9'));
    printf("%d = ", isdigit('a'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d = ", isdigit('z'));
    printf("%d\n", ft_isdigit('z'));
    printf("%d = ", isdigit('A'));
    printf("%d\n", ft_isdigit('A'));
    printf("%d = ", isdigit('Z'));
    printf("%d\n", ft_isdigit('Z'));
    printf("%d = ", isdigit('['));
    printf("%d\n", ft_isdigit('['));
    printf("%d = ", isdigit(';'));
    printf("%d\n", ft_isdigit(';'));

    printf("\nft_isalpha:\n");
    printf("%d = ", isalpha('0'));
    printf("%d\n", ft_isalpha('0'));
    printf("%d = ", isalpha('9'));
    printf("%d\n", ft_isalpha('9'));
    printf("%d = ", isalpha('a'));
    printf("%d\n", ft_isalpha('a'));
    printf("%d = ", isalpha('z'));
    printf("%d\n", ft_isalpha('z'));
    printf("%d = ", isalpha('A'));
    printf("%d\n", ft_isalpha('A'));
    printf("%d = ", isalpha('Z'));
    printf("%d\n", ft_isalpha('Z'));
    printf("%d = ", isalpha('['));
    printf("%d\n", ft_isalpha('['));
    printf("%d = ", isalpha(';'));
    printf("%d\n", ft_isalpha(';'));

    printf("\nft_atoi:\n");
    printf("%d = ", atoi("   \n\t\v\r  +123"));
    printf("%d\n", ft_atoi("   \n\t\v\r  +123"));
    printf("%d = ", atoi("   \n\t\v\r  -123"));
    printf("%d\n", ft_atoi("   \n\t\v\r  -123"));
    printf("%d = ", atoi("   \n\t\v\r  +12 3"));
    printf("%d\n", ft_atoi("   \n\t\v\r  +12 3"));
    printf("%d = ", atoi("   \n\t\v\r  + 123"));
    printf("%d\n", ft_atoi("   \n\t\v\r  + 123"));
    printf("%d = ", atoi("   \n\t\v\r  +-123"));
    printf("%d\n", ft_atoi("   \n\t\v\r  +-123"));
    printf("%d = ", atoi("   \n\t\v\r  -+123"));
    printf("%d\n", ft_atoi("   \n\t\v\r  -+123"));
    printf("%d = ", atoi("   \n\t\v\r  +123ssvf"));
    printf("%d\n", ft_atoi("   \n\t\v\r  +123ssvf"));
    printf("%d = ", atoi("   \n\t\v\r  2147483647"));
    printf("%d\n", ft_atoi("   \n\t\v\r  2147483647"));
    printf("%d = ", atoi("   \n\t\v\r  -2147483648"));
    printf("%d\n", ft_atoi("   \n\t\v\r  -2147483648"));
    printf("%d = ", atoi("   \n\t\v\r  9223372036854775807"));
    printf("%d\n", ft_atoi("   \n\t\v\r  9223372036854775807"));
    printf("%d = ", atoi("   \n\t\v\r  -9223372036854775808"));
    printf("%d\n", ft_atoi("   \n\t\v\r  -9223372036854775808"));
    printf("%d = ", atoi("   \n\t\v\r  9223372036854775808"));
    printf("%d\n", ft_atoi("   \n\t\v\r  9223372036854775808"));
    printf("%d = ", atoi("   \n\t\v\r  -9223372036854775809"));
    printf("%d\n", ft_atoi("   \n\t\v\r  -9223372036854775809"));

    printf("\nft_strncmp:\n");
    printf("%d = ", strncmp("qwerty", "qwer", 4));
    printf("%d\n", ft_strncmp("qwerty", "qwer", 4));
    printf("%d = ", strncmp("qwerty", "qwer", 5));
    printf("%d\n", ft_strncmp("qwerty", "qwer", 5));
    printf("%d = ", strncmp("qwer\0ty", "qwer", 5));
    printf("%d\n", ft_strncmp("qwer\0ty", "qwer", 5));
    printf("%d = ", strncmp("qwerdfv", "qwerhkmln", 5));
    printf("%d\n", ft_strncmp("qwerdfv", "qwerhkmln", 5));
    printf("%d = ", strncmp("qwerdfv", "", 5));
    printf("%d\n", ft_strncmp("qwerdfv", "", 5));
    printf("%d = ", strncmp("\200", "\0", 1));
    printf("%d\n", ft_strncmp("\200", "\0", 1));

    printf("\nft_strnstr:\n");
    printf("%s = ", strnstr("qwertyuiop", "rtyu", 10));
    printf("%s\n", ft_strnstr("qwertyuiop", "rtyu", 10));
    printf("%s = ", strnstr("qwertyuiop", "rtyu", 4));
    printf("%s\n", ft_strnstr("qwertyuiop", "rtyu", 4));
    printf("%s = ", strnstr("qwertyuiop", "", 10));
    printf("%s\n", ft_strnstr("qwertyuiop", "", 10));
    printf("%s = ", strnstr("qweqwerrtyuiop", "qwer", 10));
    printf("%s\n", ft_strnstr("qweqwerrtyuiop", "qwer", 10));
    printf("%s = ", strnstr("qweqwerrtyuiop", "op", 14));
    printf("%s\n", ft_strnstr("qweqwerrtyuiop", "op", 14));
    printf("%s = ", strnstr("a", "a", 3));
    printf("%s\n", ft_strnstr("a", "a", 3));

    printf("\nft_strrchr:\n");
    printf("%s = ", strrchr("qwertyytrewq", 't'));
    printf("%s\n", ft_strrchr("qwertyytrewq", 't'));
    printf("%s = ", strrchr("qwertyytrewq", 's'));
    printf("%s\n", ft_strrchr("qwertyytrewq", 's'));
    printf("%s = ", strrchr("qwertyytrewq", 0));
    printf("%s\n", ft_strrchr("qwertyytrewq", 0));

    printf("\nft_strchr:\n");
    printf("%s = ", strchr("qwertyytrewq", 't'));
    printf("%s\n", ft_strchr("qwertyytrewq", 't'));
    printf("%s = ", strchr("qwertyytrewq", 's'));
    printf("%s\n", ft_strchr("qwertyytrewq", 's'));
    printf("%s = ", strchr("qwertyytrewq", 0));
    printf("%s\n", ft_strchr("qwertyytrewq", 0));
    

    printf("\nft_strlcat:\n");
    char    a1[20] = "Hello";
    char    a2[20] = "Hello";
    char    b[] = " qwertyu!";
    printf("%lu, %s = ", strlcat(a1, b, 20), a1);
    printf("%lu, %s\n", ft_strlcat(a2, b, 20), a2);
    printf("%lu, %s = ", strlcat(a1, b, 20), a1);
    printf("%lu, %s\n", ft_strlcat(a2, b, 20), a2);
    printf("%lu, %s = ", strlcat(a1, b, 10), a1);
    printf("%lu, %s\n", ft_strlcat(a2, b, 10), a2);

    printf("\nft_strlcpy:\n");
    char    c1[20] = "Hello";
    char    c2[20] = "Hello";
    char    d[] = " qwertyu!";
    printf("%lu, %s = ", strlcpy(c1, d, 20), c1);
    printf("%lu, %s\n", ft_strlcpy(c2, d, 20), c2);
    printf("%lu, %s = ", strlcpy(c1, d, 5), c1);
    printf("%lu, %s\n", ft_strlcpy(c2, d, 5), c2);
    printf("%lu, %s = ", strlcpy(c1, d, 0), c1);
    printf("%lu, %s\n", ft_strlcpy(c2, d, 0), c2);

    printf("\nft_strlen:\n");
    printf("%lu = ", strlen("Hello, world!"));
    printf("%lu\n", ft_strlen("Hello, world!"));
    printf("%lu = ", strlen(""));
    printf("%lu\n", ft_strlen(""));
    

    printf("\nft_memcmp:\n");
    printf("%d = ", memcmp("qwerty", "qwerty", 6));
    printf("%d\n", ft_memcmp("qwerty", "qwerty", 6));
    printf("%d = ", memcmp("A", "a", 1));
    printf("%d\n", ft_memcmp("A", "a", 1));
    printf("%d = ", memcmp("qwer\0ty", "qwer\0Ty", 7));
    printf("%d\n", ft_memcmp("qwer\0ty", "qwer\0Ty", 7));

    printf("\nft_memchr:\n");
    printf("%s = ", memchr("qwertyytrewq", 't', 12));
    printf("%s\n", ft_memchr("qwertyytrewq", 't', 12));
    printf("%s = ", memchr("qwertyytrewq", 's', 12));
    printf("%s\n", ft_memchr("qwertyytrewq", 's', 12));
    printf("%s = ", memchr("qwertyytrewq", 0, 12));
    printf("%s\n", ft_memchr("qwertyytrewq", 0, 12));
    printf("%s = ", memchr("qwerty\0ytrsewq", 's', 16));
    printf("%s\n", ft_memchr("qwerty\0ytrsewq", 's', 16));
    printf("%s = ", memchr("qwertyytrewq", 0, 13));
    printf("%s\n", ft_memchr("qwertyytrewq", 0, 13));

    printf("\nft_memset:\n");
    char    x1[10];
    char    x2[10];
    printf("%s = ", memset(&x1, 'a', 4));
    printf("%s\n", ft_memset(&x2, 'a', 4));

    printf("\nft_bzero:\n");
    char    z1[10];
    char    z2[10];
    bzero(z1, 5);
    ft_bzero(z2, 5);
    printf("%s = ", z1);
    printf("%s\n", z2);

    printf("\nft_memcpy:\n");
    char    q1[10];
    char    q2[10];
    printf("%s = ", memcpy(q1, "qwerty", 6));
    printf("%s\n", ft_memcpy(q2, "qwerty", 6));
    printf("%s = ", memcpy(NULL, NULL, 6));
    printf("%s\n", ft_memcpy(NULL, NULL, 6));
    // printf("%s = ", memcpy(q1, NULL, 6));
    // printf("%s\n", ft_memcpy(q2, NULL, 6));
    // printf("%s = ", memcpy(q1, NULL, 6));
    // printf("%s\n", ft_memcpy(q2, NULL, 6));

    printf("\nft_memccpy:\n");
    char    w1[10];
    printf("%p, %s = ", memccpy(w1, "qwerty", 'r', 6), w1);
    printf("%p, %s\n", ft_memccpy(w1, "qwerty", 'r', 6), w1);
    printf("%p, %s = ", memccpy(w1, "qwerty", 's', 6), w1);
    printf("%p, %s\n", ft_memccpy(w1, "qwerty", 's', 6), w1);

    printf("\nft_memmove:\n");
    char    e1[10];
    char    e2[10];
    char    r1[] = "qwerty";
    char    r2[] = "qwerty";
    printf("%s = ", memmove(e1, "qwerty", 6));
    printf("%s\n", ft_memmove(e2, "qwerty", 6));
    printf("%s = ", memmove(NULL, NULL, 6));
    printf("%s\n", ft_memmove(NULL, NULL, 6));
    printf("%s = ", memmove(r1, r1+2, 3));
    printf("%s\n", ft_memmove(r2, r2+2, 3));
    printf("%s = ", memmove(r1+2, r1, 3));
    printf("%s\n", ft_memmove(r2+2, r2, 3));

    printf("\nft_split:\n");
    char const a1[] = " kdsnf iefwef i  oipjew    wn  ";
    char const a2[] = "   ";
    char const a3[] = " kdsnf  ";
    char const a4[] = "";
    ft_split(a1, ' ');
    ft_split(a2, ' ');
    ft_split(a3, ' ');
    ft_split(a4, ' ');
    */

    printf("\nft_itoa:\n");
    // ft_itoa(123456);
    // ft_itoa(1);
    // ft_itoa(-123456);
    ft_itoa(0);
    return (0);
}