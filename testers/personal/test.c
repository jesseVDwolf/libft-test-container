#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	test_memchr(void)
{
	char *s1 = "";
	char *s2 = "abcdefabcdef";
	char *s3 = "11111111111111111111";

	printf("Testing ft_memchr():\nTest1...");
	if (ft_memchr(s1, 'x', 0) == NULL)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest2...");
	if (ft_memchr(s2, 'y', 0) == NULL)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest3...");
	if ((char *)ft_memchr(s2, 'a', 1) - s2 == 0)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest4...");
	if (ft_memchr(s2, 'd', 2)  == NULL)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest5...");
	if ((char *)ft_memchr(s2, 'd', 12)  - s2 == 3)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest6...");
	if ((char *)ft_memchr(s2, 'f', 12)  - s2 == 5)
		printf("passed.");
	else	printf("FAILED.");
	printf("\nTest7...");
	if ((char *)ft_memchr(s3, '1', 20)  - s3 == 0)
		printf("passed.");
	else	printf("FAILED.");
	printf("\n\n");
}

void	test_memset(void)
{
	char    a[] = "jessevanderwolf";

	/*
	** case1: check byte one after last byte change
	** case2: check last byte changed
	** case3: check first byte changed
	*/
    printf("Testing ft_memset():\nTest1...");
	if (*((char*)ft_memset(a, 'e', 12) + 12) == 'o')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (*((char*)ft_memset(a, 'e', 12) + 11) == 'e')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (*((char*)ft_memset(a, 'e', 12) + 0) == 'e')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_bzero(void)
{
	char	a[] = "jessevanderwolf";
	char	b[] = "jessevanderwolf";
	/*
	** case 1 check byte after bzero stopped
	** case 2 check byte at start of ptr that is bzero'd
	*/
	printf("Testing ft_bzero():\nTest1...");
	ft_bzero(a, 12);
	if (a[12] == 'o')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	ft_bzero(b, 12);
	if (*a == '\0')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_memcpy(void)
{
	char a[] = "jessevanderwolf";
	char b[] = "jessevanderwolf";
	char c[] = "jessevanderwolf";
	char d[] = "jessevanderwolf";
	/*
	** case 1 check when ps1 and ps2 are NULL
	** case 2 check when n = 0
	** case 3 check start of string when copied
	** case 4 check one byte after copied characters
	*/ 
	printf("Testing ft_memcpy():\nTest1...");
	if (ft_memcpy(NULL, NULL, 0) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (*((char*)ft_memcpy(b, "ben", 0)) == 'j')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (*((char*)ft_memcpy(c, "ben", 3)) == 'b')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (*((char*)ft_memcpy(d, "ben", 3) + 3) == 's')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_memccpy(void)
{
	char    a[] = "testing";
    char    b[] = "testing";
	char    c[] = "testing";
	char    d[] = "testing";
	char    e[] = "testing";
	char    f[] = "testing";
	/*
	** case 1: matching string copy first 4 bytes stopping at s
	** case 2: matching string copy first 4 bytes stopping at \0
	** case 3: copy exact string and stop at character i
	** case 4: copy exact string and stop after 4 bytes so it doesn't reach i
	** case 5: copy different string and stop after 4 bytes so it doesn't reach i
	** case 6: use NULL pointers
	*/

    printf("Testing ft_memccpy():\nTest1...");
	if (*((char*)ft_memccpy(a, "test", 's', 4)) == 't')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_memccpy(b, "test", '\0', 4) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (*((char*)ft_memccpy(c, "testing", 'i', 8)) == 'n')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (ft_memccpy(d, "testing", 'i', 4) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest5...");
	if (ft_memccpy(e, "jessing", 'i', 4) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest6...");
	if (ft_memccpy(NULL, NULL, 'i', 0) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_memmove(void)
{
	char	a[] = "hoijesse";
	char	b[] = "hoijesse";
	char	c[] = "hoijesse";
	char	d[] = "hoijesse";
	char	e[] = "hoijesse";
	/*
	** case 1: copy total length of src to dest
	** case 2: copy part of src to dest
	** case 3: copy nothing to dest
	** case 4: dest and src overlap where dest is bigger
	** case 5: dest and src overlap where dest is smaller
	*/

	printf("Testing ft_memmove():\nTest1...");
	if (*((char*)ft_memmove(a, "jesse", 5)) == 'j')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (*((char*)ft_memmove(b, "jesse", 3) + 2) == 's')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (*((char*)ft_memmove(c, "", 0)) == 'h')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (*((char*)ft_memmove(d + 3, d, 3)) == 'h')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest5...");
	if (*((char*)ft_memmove(e, e + 3, 5)) == 'j')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_memcmp(void)
{
	/*
	** case 1: matching strings
	** case 2: matching strings till n
	** case 3: non-matching strings
	** case 4: non-matching strings with n
	*/

	printf("Testing ft_memcmp():\nTest1...");
	if (!ft_memcmp("jesse", "jesse", 6))
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (!ft_memcmp("jesse", "jeses", 3))
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_memcmp("jesse", "benja", 6))
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (ft_memcmp("jesse", "jesben", 4))
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strlen(void)
{
	/*
	** case 1: check length of string
	** case 2: check if string is empty
	*/
	printf("Testing ft_strlen():\nTest1...");
	if (ft_strlen("testing") == 7)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_strlen("") == 0)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strlcpy(void)
{
	char	a[] = "jesse";
	char	b[] = "jesse";
	char	c[6];
	char	d[] = "jesse";
	char	e[] = "jesse";
	char	g[] = "jesse";
	/*
	** case 1: copy string to destination with same length
	** case 2: copy string to destination smaller than dest
	** case 3: copy string bigger than dest with correct size
	** case 4: copy empty string with size of destination
	** case 5: copy string to destination smaller than dest but size of dest
	*/
	printf("Testing ft_strlcpy():\nTest1...");
	if (ft_strlcpy(a, "benni", 6) == 5 && *a == 'b' && a[4] == 'i')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_strlcpy(b, "ben", 4) == 3 && *b == 'b' && b[3] == '\0')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_strlcpy(c, "jesse", 6) == 5 && *c == 'j' && c[4] == 'e')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (ft_strlcpy(d, "", 6) == 0 && *d == '\0')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest5...");
	if (ft_strlcpy(e, "ben", 6) == 3 && *e == 'b' && e[4] == 'e')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strlcat(void)
{
	char	a[12] = "jesse";
	char	b[12] = "jesse";
	char	c[12] = "jesse";
	char	d[12] = "jesse";
	/*
	** case1: Concat 2 strings with size strlen(dst) + strlen(src) + 1
	** case2: Concat 2 strings but with size being size of only dest
	** case3: concat 2 strings but with size being smaller than dest
	*/

	printf("Testing ft_strlcat():\nTest1...");
	if (ft_strlcat(a, "bennie", 12) == 11 && a[4] == 'e' && a[5] == 'b')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_strlcat(b, "bennie", 5) == 11 && b[5] == '\0')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_strlcat(c, "bennie", 3) == 9 && c[4] == 'e')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strchr(void)
{
	/*
	** case 1: look for normal character that exists
	** case 2: look for null byte character
	** case 3: look for character that does not exist
	*/
	printf("Testing ft_strchr():\nTest1...");
	if (*(ft_strchr("jessevdw", 'w')) == 'w')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (*(ft_strchr("jessevdw", '\0')) == '\0')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_strchr("jessevdw", 'f') == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strrchr(void)
{
	/*
	** case 1: look for character in sring that occurs ones
	** case 2: look for character in string that occurs multiple times
	** case 3: look for character in string that does not occur
	** case 4: look for null byte character should always return first occurrence
	*/
	printf("Testing ft_strrchr():\nTest1...");
	if (*(ft_strrchr("testing", 'i')) == 'i')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (*(ft_strrchr("testing", 't') + 1) == 'i')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_strrchr("testing", 'f') == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (*(ft_strrchr("testing\0test", '\0') - 1) == 'g')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strnstr(void)
{
	/*
	** case 1: the needle is in the middle of the haystack
	** case 2: there is no needle in haystack
	** case 3: needle is in haystack but out of bounds with n
	** case 4: needle is in haystack and just in bounds with n
	*/
    printf("Testing ft_strnstr():\nTest1...");
	if (*(ft_strnstr("abacadabra", "cad", 10)) == 'c')
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_strnstr("abacadabra", "acb", 10) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_strnstr("abacadabra", "bra", 9) == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (*(ft_strnstr("abacadabra", "bra", 10)) == 'b')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strncmp(void)
{
	char	a[] = "jesse";
	char	b[] = "jessee";
	char	c[] = "jesse";
	char	d[] = "jessef";	
	char	e[] = "jes\0\0s";
	char	f[] = "jes\0\0f";
	/*
	** case 1: compare two equal strings
	** case 2: compare two unequal strings
	** case 3: compare two strings equal till n
	** case 4: compare two strings not equal with n
	** case 5: check if stops at \0
	*/

	printf("Testing ft_strncmp():\nTest1...");
	if (ft_strncmp(a, c, 6) == 0)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_strncmp(b, d, 6) == -1)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_strncmp(a, b, 5) == 0)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (ft_strncmp(a, b, 6) == -101)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest5...");
	if (ft_strncmp(e, f, 6) == 0)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_atoi(void)
{
	/*
	** case 1: convert normal number
	** case 2: convert number partly
	** case 3: INT_MIN
	** case 4: INT_MAX
	** case 5: check if ltrim is done
	*/ 
	
	printf("Testing ft_atoi():\nTest1...");
	if (ft_atoi("256") == 256)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_atoi("256abcde56") == 256)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	if (ft_atoi("-2147483648") == INT_MIN)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (ft_atoi("2147483647") == INT_MAX)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest5...");
	if (ft_atoi("\t \v\n\r\f123abc") == 123)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_isalnum(void)
{
	// NOTE: also indirectly tests isalpha, isdigit, islower, isupper
	int		c1_passed = 1;
	int		c2_passed = 1;
	int		c3_passed = 1;
	/*
	** case 1: check upper characters
	** case 2: check lower characters
	** case 3: check digits
	*/
	printf("Testing ft_isalnum():\nTest1...");
	for (int i=48; i<=57; i++)
		if (!ft_isalnum(i))
			c1_passed = 0;
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	for (int i=65; i<=90; i++)
		if (!ft_isalnum(i))
			c2_passed = 0;
	if (c2_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest3...");
	for (int i=97; i<=122; i++)
		if (!ft_isalnum(i))
			c3_passed = 0;
	if (c3_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_isascii(void)
{
	int		c1_passed = 1;
	/*
	** case 1: check all possible options
	*/
	printf("Testing ft_isascii():\nTest1...");
	for (int i=0; i <= 127; i++)
		if (!ft_isascii(i))
			c1_passed = 0;
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_isprint(void)
{
	int		c1_passed = 1;
	/*
	** case 1: check all possible options
	*/
	printf("Testing ft_isprint():\nTest1...");
	for (int i=33; i <= 126; i++)
		if (!ft_isascii(i))
			c1_passed = 0;
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_toupper(void)
{
	int		c1_passed = 1;
	/*
	** case 1: try all possible options
	** case 2: pass non lower char
	*/
	printf("Testing ft_toupper():\nTest1...");
	for (int i=97; i <= 122; i++)
		if (ft_toupper(i) != i - 32)
			c1_passed = 0;
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_toupper('A') == 'A')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_tolower(void)
{
	int		c1_passed = 1;
	/*
	** case 1: try all possible options
	** case 2: pass non upper char
	*/
	printf("Testing ft_tolower():\nTest1...");
	for (int i=65; i <= 90; i++)
		if (ft_tolower(i) != i + 32)
			c1_passed = 0;
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest2...");
	if (ft_tolower('c') == 'c')
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_calloc(void)
{
	char	*a = ft_calloc(5, sizeof(char));
	char	*b = ft_calloc(0, 4);
	char	*c = ft_calloc(4, 0);
	int	c1_passed = 1;
	/*
	** case 1: allocate string
	** case 2: nmemb is 0
	** case 3: size is 0
	** 		   NOTE: If nmemb or size is 0, then calloc() returns 
	**		   either NULL, or a unique pointer value that 
	**		   can later be successfully passed to free().
	*/
    printf("Testing ft_calloc():\nTest1...");
	for (int i=0; i<5; i++)
		if (a[i] != '\0')
			c1_passed = 0;
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\nTest2...");
	if (b != NULL)
		printf("passed");
	else	printf("FAILED");
	free(b);
	printf("\nTest3...");
	if (c != NULL)
		printf("passed");
	else	printf("FAILED");
	free(c);
	printf("\n\n");
}

void	test_strdup(void)
{
	char	*a = ft_strdup("jesse");
	char	*b = ft_strdup("");
	/*
	** case 1: Duplicate string
	** case 2: free pointer
	*/
	printf("Testing ft_strdup():\nTest1...");
	if (*a == 'j' && *(a + 5) == '\0')
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\nTest2...");
	if (*b == '\0')
		printf("passed");
	else	printf("FAILED");
	free(b);
	printf("\n\n");
}

void	test_substr(void)
{
	char	*a = ft_substr("jesse", 0, 3);
	char	*b = ft_substr("jesse", 2, 3);
	char	*c = ft_substr("jesse", 2, 4);
	char	*d = ft_substr(NULL, 2, 4);
	char	*e = ft_substr("jesse", 0, 5);
	char	*f = ft_substr("jesse", 0, 7);
	/*
	** case 1: substring start 0 till len
	** case 2: substring start middle with len
	** case 3: unallocatable substring
	** case 4: s is null
	** case 5: copy whole string
	** case 6: len is bigger than string size
	*/
	printf("Testing ft_substr():\nTest1...");
	if (*a == 'j' && *(a + 3) == '\0')
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\nTest2...");
	if (*b == 's' && *(b + 3) == '\0')
		printf("passed");
	else	printf("FAILED");
	free(b);
	printf("\nTest3...");
	if (*c == 's' && *(c + 2) == 'e')
		printf("passed");
	else	printf("FAILED");
	free(c);
	printf("\nTest4...");
	if (d == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest5...");
	if (*e == 'j')
		printf("passed");
	else	printf("FAILED");
	free(e);
	printf("\nTest6...");
	if (*f == 'j' && *(f + 4) == 'e')
		printf("passed");
	else	printf("FAILED");
	free(f);
	printf("\n\n");
}

void	test_strjoin(void)
{
	char	*a = ft_strjoin("jesse", "bennie");
	char	*b = ft_strjoin("", "");
	char	*c = ft_strjoin(NULL, "bennie");
	char	*d = ft_strjoin("jesse", NULL);
	/*
	** case 1: join two normal strings
	** case 2: join two empty strings
	** case 3: s1 is null
	** case 4: s2 is null
	*/
    printf("Testing ft_strjoin():\nTest1...");
	if (*a == 'j' && *(a + 5) == 'b')
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\nTest2...");
	if (*b == '\0')
		printf("passed");
	else	printf("FAILED");
	free(b);
	printf("\nTest3...");
	if (c == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\nTest4...");
	if (d == NULL)
		printf("passed");
	else	printf("FAILED");
	printf("\n\n");
}

void	test_strtrim(void)
{
	char	*a = ft_strtrim("    je  s se ", " ");
	char	*b = ft_strtrim("\n \t\n   \tjesse z\nijn \t test set\n    \t", " \n\t");
	char	*c = ft_strtrim("  \t  \njesse", " \t\n");
	char	*d = ft_strtrim("jesse   \n\t\t", " \n\t");
	char	*e = ft_strtrim("   ", "");
	char	*f = ft_strtrim("   ", " ");
	/*
	** case 1: trim single character both sides
	** case 2: trim multiple characters both sides
	** case 3: trim only left 
	** case 4: trim only right
	** case 5: empty set
	** case 6: single character trim
	*/
	printf("Testing ft_strtrim():\nTest1...");
	if (*a == 'j' && *(a + 7) == 'e')
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\nTest2...");
	if (*b == 'j' && *(b + 21) == 't')
		printf("passed");
	else	printf("FAILED");
	free(b);
	printf("\nTest3...");
	if (*c == 'j' && *(c + 4) == 'e')
		printf("passed");
	else	printf("FAILED");
	free(c);
	printf("\nTest4...");
	if (*d == 'j' && *(d + 4)== 'e')
		printf("passed");
	else	printf("FAILED");
	free(d);
	printf("\nTest5...");
	if (*e == ' ' && *(e + 2) == ' ')
		printf("passed");
	else	printf("FAILED");
	free(e);
	printf("\nTest6...");
	if (*f == '\0')
		printf("passed");
	else	printf("FAILED");
	free(f);
	printf("\n\n");
}

void	test_split(void)
{
	char	**a = ft_split("jesse,,bennie,tom,,,vera", ',');
	int		c1_passed = 1;
	/*
	** case 1: split string into chunks with empty ones
	*/

	printf("Testing ft_split():\nTest1...");
	for (int i=0;a[i] != NULL;i++)
	{
		if (i == 0)
			if (a[i][0] != 'j' || a[i][4] != 'e')
				c1_passed = 0;
		else if (i == 1)
			if (a[i][0] != 'b' || a[i][5] != 'e')
				c1_passed = 0;
		else if (i == 2)
			if (a[i][0] != 't' || a[i][2] != 'm')
				c1_passed = 0;
		else
			if (a[i][0] != 'v' || a[i][3] != 'a')
				c1_passed = 0;
	}
	if (c1_passed)
		printf("passed");
	else	printf("FAILED");
	for (int i=0;a[i] != NULL;i++)
		free(a[i]);
	free(a);
	printf("\n\n");
}

void	test_itoa(void)
{
	char	*a = ft_itoa(256);
	char	*b = ft_itoa(INT_MAX);
	char	*c = ft_itoa(INT_MIN);
	/*
	** case 1: convert an int to a string 
	** case 2: convert INT_MAX
	** case 3: convert INT_MIN
	*/

	printf("Testing ft_itoa():\nTest1...");
	if (*a == '2' && *(a + 2) == '6' && ft_strlen(a) == 3)
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\nTest2...");
	if (*b == '2' && *(b + 9) == '7' && ft_strlen(b) == 10)
		printf("passed");
	else	printf("FAILED");
	free(b);
	printf("\nTest3...");
	if (*c == '-' && *(c + 10) == '8' && ft_strlen(c) == 11)
		printf("passed");
	else	printf("FAILED");
	free(c);
	printf("\n\n");
}

char upper_and_lower(unsigned int i, char c)
{
    if ((i % 2) == 1)
        return (ft_toupper(c));
    else
        return (ft_tolower(c));
}

void	test_strmapi(void)
{
	char	*a = ft_strmapi("jessevanderwolf", &upper_and_lower);
	size_t	alen = ft_strlen(a);
	int		c1_passed = 1;
	/*
	** case 1: execute function over each char in string
	*/
	printf("Testing ft_strmapi():\nTest1...");
    for (size_t i=0;i<alen;i++)
	{
		if ((i % 2) == 1)
		{
			if (a[i] < 'A' && a[i] > 'Z')
				c1_passed = 0;
		}
		else
		{
			if (a[i] < 'a' && a[i] > 'z')
				c1_passed = 0;
		}
	}
	if (alen == 15 && c1_passed)
		printf("passed");
	else	printf("FAILED");
	free(a);
	printf("\n\n");
}

int		main(void)
{
	test_memchr();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memcmp();
	test_strlen();
	test_strlcpy();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strnstr();
	test_strncmp();
	test_atoi();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	return (0);
}
