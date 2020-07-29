/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_general.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/12 05:13:41 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int broken;
	int	bonus;
	
	char			c = 'a';
	char			*s = "stringalingadingdong";
	int				di = 42;
	int				*p = &di;
	unsigned int	u = 42;
	unsigned int	xcap = 185334478;
	unsigned int	x = 185334478;
	
	char			*percent = "It goes well 100% of the time";
	char			*conv = "%c, %s, %p, %d, %i, %u, %x, %X, %%";

	broken = 0;
	bonus = 0;
	
	printf(" (%d)\n", printf("|First lets try a string without arguments|"));
	printf(" (%d)\n", printf("|First lets try a string without arguments|"));
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Basic percentage sign conversions:"));
	printf(" (%d)\n", printf("Basic percentage sign conversions:"));
	printf("\n");
	
	printf(" (%d)\n", printf("|Let's try a double percentage sign: %%|"));
	printf(" (%d)\n", printf("|Let's try a double percentage sign: %%|"));
	printf("-\n");

	printf(" (%d)\n", printf("How does it handle a percentage sign in a string? |%s|", percent));
	printf(" (%d)\n", printf("How does it handle a percentage sign in a string? |%s|", percent));
	printf("-\n");

	printf(" (%d)\n", printf("It handles all these too: |%s|", "%c, %s, %p, %d, %i, %u, %x, %X, %%"));
	printf(" (%d)\n", printf("It handles all these too: |%s|", "%c, %s, %p, %d, %i, %u, %x, %X, %%"));
	printf("-\n");

	printf(" (%d)\n", printf("Also these: |%s|", conv));
	printf(" (%d)\n", printf("Also these: |%s|", conv));
	printf("-\n");
	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Other basic conversions:"));
	printf(" (%d)\n", printf("Other basic conversions:"));
	printf("\n");

	printf(" (%d)\n", printf("And a single character: |%c|", c));
	printf(" (%d)\n", printf("And a single character: |%c|", c));
	printf("-\n");

	printf(" (%d)\n", printf("And a string: |%s|", s));
	printf(" (%d)\n", printf("And a string: |%s|", s));
	printf("-\n");

	printf(" (%d)\n", printf("And a decimal: |%d|", di));
	printf(" (%d)\n", printf("And a decimal: |%d|", di));
	printf("-\n");

	printf(" (%d)\n", printf("And an integer: |%i|", di));
	printf(" (%d)\n", printf("And an integer: |%i|", di));
	printf("-\n");

	printf(" (%d)\n", printf("And a zero as integer: |%i|", 0));
	printf(" (%d)\n", printf("And a zero as integer: |%i|", 0));
	printf("-\n");

	printf(" (%d)\n", printf("And a pointer to the same integer: |%p|", p));
	printf(" (%d)\n", printf("And a pointer to the same integer: |%p|", p));
	printf("-\n");

	printf(" (%d)\n", printf("And an unsignted int |%u|", u));
	printf(" (%d)\n", printf("And an unsignted int |%u|", u));
	printf("-\n");

	printf(" (%d)\n", printf("AND A HEXADECIMAL |%X|", xcap));
	printf(" (%d)\n", printf("AND A HEXADECIMAL |%X|", xcap));
	printf("-\n");

	printf(" (%d)\n", printf("And a hexadecimal |%x|", x));
	printf(" (%d)\n", printf("And a hexadecimal |%x|", x));
	printf("-\n");

	printf(" (%d)\n", printf("Can it handle all these at once? %c%s%p%d%i%u%x%X%%%%%X%x%u%i%d%p%s%c", c, s, p, di, di, u, x, x, x, x, u, di, di, p, s, c));
	printf(" (%d)\n", printf("Can it handle all these at once? %c%s%p%d%i%u%x%X%%%%%X%x%u%i%d%p%s%c", c, s, p, di, di, u, x, x, x, x, u, di, di, p, s, c));
	printf("-\n");

	printf(" (%d)\n", printf("And these in the middle |%c%s%p%d%i%u%x%X%%%%%X%x%u%i%d%p%s%c| of a sentence", c, s, p, di, di, u, x, x, x, x, u, di, di, p, s, c));
	printf(" (%d)\n", printf("And these in the middle |%c%s%p%d%i%u%x%X%%%%%X%x%u%i%d%p%s%c| of a sentence", c, s, p, di, di, u, x, x, x, x, u, di, di, p, s, c));
	printf("-\n");

	printf(" (%d)\n", printf("My compliments in hexadecimal: %X %X %X", 4011, 49374, 47806));	

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("How does it handle MIN & MAX values?"));
	printf(" (%d)\n", printf("How does it handle MIN & MAX values?"));
	printf("\n");

	printf(" (%d)\n", printf("Char: |%c|", '%'));
	printf(" (%d)\n", printf("Char: |%c|", '%'));
	printf("-\n");

	printf(" (%d)\n", printf("MAX Decimal: |%d|", 2147483647));
	printf(" (%d)\n", printf("MAX Decimal: |%d|", 2147483647));
	printf("-\n");

	printf(" (%d)\n", printf("MIN Decimal: |%d|", ((int)(-2147483648))));
	printf(" (%d)\n", printf("MIN Decimal: |%d|", ((int)(-2147483648))));
	printf("-\n");

	printf(" (%d)\n", printf("MAX Integer: |%i|", 2147483647));
	printf(" (%d)\n", printf("MAX Integer: |%i|", 2147483647));
	printf("-\n");

	printf(" (%d)\n", printf("MIN Integer: |%i|", ((int)(-2147483648))));
	printf(" (%d)\n", printf("MIN Integer: |%i|", ((int)(-2147483648))));
	printf("-\n");

	printf(" (%d)\n", printf("MAX Unsignted int |%u|", (u - 43)));
	printf(" (%d)\n", printf("MAX Unsignted int |%u|", (u - 43)));
	printf("-\n");

	printf(" (%d)\n", printf("MAX INT AS HEXADECIMAL |%X|", 2147483647));
	printf(" (%d)\n", printf("MAX INT AS HEXADECIMAL |%X|", 2147483647));
	printf("-\n");

	printf(" (%d)\n", printf("MAX HEXADECIMAL |%X|", ((unsigned int)(4294967295))));
	printf(" (%d)\n", printf("MAX HEXADECIMAL |%X|", ((unsigned int)(4294967295))));
	printf("-\n");

	printf(" (%d)\n", printf("HEXadecimal with negative number |%X|", -42));
	printf(" (%d)\n", printf("HEXadecimal with negative number |%X|", -42));
	printf("-\n");

	printf(" (%d)\n", printf("Hexadecimal with negative number |%x|", -42));
	printf(" (%d)\n", printf("Hexadecimal with negative number |%x|", -42));
	printf("-\n");

	printf(" (%d)\n", printf("MAX int as hex |%x|", 2147483647));
	printf(" (%d)\n", printf("MAX int as hex |%x|", 2147483647));
	printf("-\n");

	printf(" (%d)\n", printf("MAX hex |%x|", ((unsigned int)(4294967295))));
	printf(" (%d)\n", printf("MAX hex |%x|", ((unsigned int)(4294967295))));
	printf("-\n");

	printf("\n\n");

	printf(" (%d)\n", printf("Char: |%c|", ('%' + 1)));
	printf(" (%d)\n", printf("Char: |%c|", ('%' + 1)));
	printf("-\n");

	printf(" (%d)\n", printf("MAX Decimal: |%d|", (2147483647 + 1)));
	printf(" (%d)\n", printf("MAX Decimal: |%d|", (2147483647 + 1)));
	printf("-\n");

	printf(" (%d)\n", printf("MIN Decimal: |%d|", (((int)(-2147483648))- 1)));
	printf(" (%d)\n", printf("MIN Decimal: |%d|", (((int)(-2147483648))- 1)));
	printf("-\n");

	printf(" (%d)\n", printf("MAX Int: |%i|", (2147483647 + 1)));
	printf(" (%d)\n", printf("MAX Int: |%i|", (2147483647 + 1)));
	printf("-\n");

	printf(" (%d)\n", printf("MIN Int: |%i|", (((int)(-2147483648))- 1)));
	printf(" (%d)\n", printf("MIN Int: |%i|", (((int)(-2147483648))- 1)));
	printf("-\n");

	printf(" (%d)\n", printf("MAX HEXADECIMAL |%X|", (((unsigned int)(4294967295)) + 1)));
	printf(" (%d)\n", printf("MAX HEXADECIMAL |%X|", (((unsigned int)(4294967295)) + 1)));
	printf("-\n");

	printf(" (%d)\n", printf("MAX hex |%x|", (((unsigned int)(4294967295)) + 1)));
	printf(" (%d)\n", printf("MAX hex |%x|", (((unsigned int)(4294967295)) + 1)));
	printf("-\n");

	
	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width"));
	printf(" (%d)\n", printf("Handling minimum field width"));

	printf(" (%d)\n", printf("(0) Mfw 0: |%0i|", 0));
	printf(" (%d)\n", printf("(0) Mfw 0: |%0i|", 0));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1i|", 0));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1i|", 0));
	printf(" (%d)\n", printf("Mfw 0: |%0i|", di));
	printf(" (%d)\n", printf("Mfw 0: |%0i|", di));
	printf(" (%d)\n", printf("Mfw 1: |%1i|", di));
	printf(" (%d)\n", printf("Mfw 1: |%1i|", di));
	printf(" (%d)\n", printf("Mfw 2: |%2i|", di));
	printf(" (%d)\n", printf("Mfw 2: |%2i|", di));
	printf(" (%d)\n", printf("Mfw 3: |%3i|", di));
	printf(" (%d)\n", printf("Mfw 3: |%3i|", di));
	printf(" (%d)\n", printf("Mfw 4: |%4i|", di));
	printf(" (%d)\n", printf("Mfw 4: |%4i|", di));
	printf(" (%d)\n", printf("Mfw 5: |%5i|", di));
	printf(" (%d)\n", printf("Mfw 5: |%5i|", di));
	printf(" (%d)\n", printf("Mfw 10: |%10i|", di));
	printf(" (%d)\n", printf("Mfw 10: |%10i|", di));
	printf(" (%d)\n", printf("Mfw 15: |%15i|", di));
	printf(" (%d)\n", printf("Mfw 15: |%15i|", di));
	printf(" (%d)\n", printf("Mfw 42: |%42i|", di));
	printf(" (%d)\n", printf("Mfw 42: |%42i|", di));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision"));
	printf(" (%d)\n", printf("Handling precision"));

	printf(" (%d)\n", printf("(0) Precis. 0: |%.0i|", 0));
	printf(" (%d)\n", printf("(0) Precis. 0: |%.0i|", 0));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1i|", 0));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1i|", 0));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2i|", 0));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2i|", 0));
	printf(" (%d)\n", printf("Precis. 0: |%.0i|", di));
	printf(" (%d)\n", printf("Precis. 0: |%.0i|", di));
	printf(" (%d)\n", printf("Precis. 1: |%.1i|", di));
	printf(" (%d)\n", printf("Precis. 1: |%.1i|", di));
	printf(" (%d)\n", printf("Precis. 2: |%.2i|", di));
	printf(" (%d)\n", printf("Precis. 2: |%.2i|", di));
	printf(" (%d)\n", printf("Precis. 3: |%.3i|", di));
	printf(" (%d)\n", printf("Precis. 3: |%.3i|", di));
	printf(" (%d)\n", printf("Precis. 4: |%.4i|", di));
	printf(" (%d)\n", printf("Precis. 4: |%.4i|", di));
	printf(" (%d)\n", printf("Precis. 5: |%.5i|", di));
	printf(" (%d)\n", printf("Precis. 5: |%.5i|", di));
	printf(" (%d)\n", printf("Precis. 10: |%.10i|", di));
	printf(" (%d)\n", printf("Precis. 10: |%.10i|", di));
	printf(" (%d)\n", printf("Precis. 15: |%.15i|", di));
	printf(" (%d)\n", printf("Precis. 15: |%.15i|", di));
	printf(" (%d)\n", printf("Precis. 42: |%.42i|", di));
	printf(" (%d)\n", printf("Precis. 42: |%.42i|", di));

	printf(" (%d)\n", printf("(0) P .00: |%.00i|", 0));
	printf(" (%d)\n", printf("(0) P .00: |%.00i|", 0));
	printf(" (%d)\n", printf("(0) P .01: |%.01i|", 0));
	printf(" (%d)\n", printf("(0) P .01: |%.01i|", 0));	
	printf(" (%d)\n", printf("P .00: |%.00i|", di));
	printf(" (%d)\n", printf("P .00: |%.00i|", di));	
	printf(" (%d)\n", printf("P .01: |%.01i|", di));
	printf(" (%d)\n", printf("P .01: |%.01i|", di));
	printf(" (%d)\n", printf("P .02: |%.02i|", di));
	printf(" (%d)\n", printf("P .02: |%.02i|", di));
	printf(" (%d)\n", printf("P .03: |%.03i|", di));
	printf(" (%d)\n", printf("P .03: |%.03i|", di));
	printf(" (%d)\n", printf("P .04: |%.04i|", di));
	printf(" (%d)\n", printf("P .04: |%.04i|", di));
	printf(" (%d)\n", printf("P .05: |%.05i|", di));
	printf(" (%d)\n", printf("P .05: |%.05i|", di));
	printf(" (%d)\n", printf("P .010: |%.010i|", di));
	printf(" (%d)\n", printf("P .010: |%.010i|", di));
	printf(" (%d)\n", printf("P .015: |%.015i|", di));
	printf(" (%d)\n", printf("P .015: |%.015i|", di));
	printf(" (%d)\n", printf("P .042: |%.042i|", di));
	printf(" (%d)\n", printf("P .042: |%.042i|", di));

	printf(" (%d)\n", printf("P .007: |%.007i|", di));
	printf(" (%d)\n", printf("P .007: |%.007i|", di));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007i|", di));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007i|", di));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width"));
	printf(" (%d)\n", printf("Handling precision & minimum field width"));

	printf(" (%d)\n", printf("(0) 0.0: |%0.0i|", 0));
	printf(" (%d)\n", printf("(0) 0.0: |%0.0i|", 0));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0i|", 0));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0i|", 0));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0i|", 10));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0i|", 10));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1i|", 0));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1i|", 0));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1i|", 0));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1i|", 0));
	printf(" (%d)\n", printf("0.0: |%0.0i|", di));
	printf(" (%d)\n", printf("0.0: |%0.0i|", di));
	printf(" (%d)\n", printf("1.1: |%1.1i|", di));
	printf(" (%d)\n", printf("1.1: |%1.1i|", di));
	printf(" (%d)\n", printf("2.2: |%2.2i|", di));
	printf(" (%d)\n", printf("2.2: |%2.2i|", di));
	printf(" (%d)\n", printf("3.2: |%3.2i|", di));
	printf(" (%d)\n", printf("3.2: |%3.2i|", di));
	printf(" (%d)\n", printf("2.3: |%2.3i|", di));
	printf(" (%d)\n", printf("2.3: |%2.3i|", di));
	printf(" (%d)\n", printf("8.4: |%8.4i|", di));
	printf(" (%d)\n", printf("8.4: |%8.4i|", di));
	printf(" (%d)\n", printf("4.8: |%4.8i|", di));
	printf(" (%d)\n", printf("4.8: |%4.8i|", di));
	printf(" (%d)\n", printf("8.8: |%8.8i|", di));
	printf(" (%d)\n", printf("8.8: |%8.8i|", di));
	printf(" (%d)\n", printf("8.2: |%8.2i|", di));
	printf(" (%d)\n", printf("8.2: |%8.2i|", di));
	printf(" (%d)\n", printf("2.8: |%2.8i|", di));
	printf(" (%d)\n", printf("2.8: |%2.8i|", di));
	printf(" (%d)\n", printf("8.1: |%8.1i|", di));
	printf(" (%d)\n", printf("8.1: |%8.1i|", di));
	printf(" (%d)\n", printf("1.8: |%1.8i|", di));
	printf(" (%d)\n", printf("1.8: |%1.8i|", di));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 00.0: |%00.0i|", 0));
	printf(" (%d)\n", printf("(0) 00.0: |%00.0i|", 0));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0i|", 0));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0i|", 0));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1i|", 0));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1i|", 0));
	printf(" (%d)\n", printf("01.1: |%01.1i|", di));
	printf(" (%d)\n", printf("01.1: |%01.1i|", di));
	printf(" (%d)\n", printf("02.2: |%02.2i|", di));
	printf(" (%d)\n", printf("02.2: |%02.2i|", di));
	printf(" (%d)\n", printf("03.2: |%03.2i|", di));
	printf(" (%d)\n", printf("03.2: |%03.2i|", di));
	printf(" (%d)\n", printf("02.3: |%02.3i|", di));
	printf(" (%d)\n", printf("02.3: |%02.3i|", di));
	printf(" (%d)\n", printf("08.4: |%08.4i|", di));
	printf(" (%d)\n", printf("08.4: |%08.4i|", di));
	printf(" (%d)\n", printf("04.8: |%04.8i|", di));
	printf(" (%d)\n", printf("04.8: |%04.8i|", di));
	printf(" (%d)\n", printf("08.8: |%08.8i|", di));
	printf(" (%d)\n", printf("08.8: |%08.8i|", di));
	printf(" (%d)\n", printf("08.2: |%08.2i|", di));
	printf(" (%d)\n", printf("08.2: |%08.2i|", di));
	printf(" (%d)\n", printf("02.8: |%02.8i|", di));
	printf(" (%d)\n", printf("02.8: |%02.8i|", di));
	printf(" (%d)\n", printf("08.1: |%08.1i|", di));
	printf(" (%d)\n", printf("08.1: |%08.1i|", di));
	printf(" (%d)\n", printf("01.8: |%01.8i|", di));
	printf(" (%d)\n", printf("01.8: |%01.8i|", di));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 0: |%0i|", 0));
	printf(" (%d)\n", printf("(0) 0: |%0i|", 0));
	printf(" (%d)\n", printf("(0) 00: |%00i|", 0));
	printf(" (%d)\n", printf("(0) 00: |%00i|", 0));
	printf(" (%d)\n", printf("(0) 01: |%01i|", 0));
	printf(" (%d)\n", printf("(0) 01: |%01i|", 0));
	printf(" (%d)\n", printf("(0) 02: |%02i|", 0));
	printf(" (%d)\n", printf("(0) 02: |%02i|", 0));
	printf(" (%d)\n", printf("0: |%0i|", di));
	printf(" (%d)\n", printf("0: |%0i|", di));
	printf(" (%d)\n", printf("00: |%00i|", di));
	printf(" (%d)\n", printf("00: |%00i|", di));
	printf(" (%d)\n", printf("01: |%01i|", di));
	printf(" (%d)\n", printf("01: |%01i|", di));
	printf(" (%d)\n", printf("02: |%02i|", di));
	printf(" (%d)\n", printf("02: |%02i|", di));
	printf(" (%d)\n", printf("03: |%03i|", di));
	printf(" (%d)\n", printf("03: |%03i|", di));
	printf(" (%d)\n", printf("08: |%08i|", di));
	printf(" (%d)\n", printf("08: |%08i|", di));
	printf(" (%d)\n", printf("000000000008: |%000000000008i|", di));
	printf(" (%d)\n", printf("000000000008: |%000000000008i|", di));
	printf(" (%d)\n", printf("010: |%010i|", di));
	printf(" (%d)\n", printf("010: |%010i|", di));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010i|", di));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010i|", di));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));

	printf(" (%d)\n", printf("(0) -0: |%-0i|", 0));
	printf(" (%d)\n", printf("(0) -0: |%-0i|", 0));
	printf(" (%d)\n", printf("(0) -00: |%-00i|", 0));
	printf(" (%d)\n", printf("(0) -00: |%-00i|", 0));
	printf(" (%d)\n", printf("(0) -01: |%-01i|", 0));
	printf(" (%d)\n", printf("(0) -01: |%-01i|", 0));
	printf(" (%d)\n", printf("(0) -02: |%-02i|", 0));
	printf(" (%d)\n", printf("(0) -02: |%-02i|", 0));

	printf(" (%d)\n", printf("-0: |%-0i|", di));
	printf(" (%d)\n", printf("-0: |%-0i|", di));
	printf(" (%d)\n", printf("-00: |%-00i|", di));
	printf(" (%d)\n", printf("-00: |%-00i|", di));
	printf(" (%d)\n", printf("-01: |%-01i|", di));
	printf(" (%d)\n", printf("-01: |%-01i|", di));
	printf(" (%d)\n", printf("-02: |%-02i|", di));
	printf(" (%d)\n", printf("-02: |%-02i|", di));
	printf(" (%d)\n", printf("-03: |%-03i|", di));
	printf(" (%d)\n", printf("-03: |%-03i|", di));
	printf(" (%d)\n", printf("-08: |%-08i|", di));
	printf(" (%d)\n", printf("-08: |%-08i|", di));
	printf(" (%d)\n", printf("0-8: |%0-8i|", di));
	printf(" (%d)\n", printf("0-8: |%0-8i|", di));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008i|", di));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008i|", di));
	printf(" (%d)\n", printf("-010: |%-010i|", di));
	printf(" (%d)\n", printf("-010: |%-010i|", di));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010i|", di));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010i|", di));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	printf(" (%d)\n", printf("Handling minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) Mfw -0: |%-0i|", 0));
	printf(" (%d)\n", printf("(0) Mfw -0: |%-0i|", 0));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1i|", 0));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1i|", 0));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2i|", 0));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2i|", 0));
	
	printf(" (%d)\n", printf("Mfw -0: |%-0i|", di));
	printf(" (%d)\n", printf("Mfw -0: |%-0i|", di));
	printf(" (%d)\n", printf("Mfw -1: |%-1i|", di));
	printf(" (%d)\n", printf("Mfw -1: |%-1i|", di));
	printf(" (%d)\n", printf("Mfw -2: |%-2i|", di));
	printf(" (%d)\n", printf("Mfw -2: |%-2i|", di));
	printf(" (%d)\n", printf("Mfw -3: |%-3i|", di));
	printf(" (%d)\n", printf("Mfw -3: |%-3i|", di));
	printf(" (%d)\n", printf("Mfw -4: |%-4i|", di));
	printf(" (%d)\n", printf("Mfw -4: |%-4i|", di));
	printf(" (%d)\n", printf("Mfw -5: |%-5i|", di));
	printf(" (%d)\n", printf("Mfw -5: |%-5i|", di));
	printf(" (%d)\n", printf("Mfw -10: |%-10i|", di));
	printf(" (%d)\n", printf("Mfw -10: |%-10i|", di));
	printf(" (%d)\n", printf("Mfw --10: |%--10i|", di));
	printf(" (%d)\n", printf("Mfw --10: |%--10i|", di));
	printf(" (%d)\n", printf("Mfw ---10: |%---10i|", di));
	printf(" (%d)\n", printf("Mfw ---10: |%---10i|", di));
	printf(" (%d)\n", printf("Mfw -15: |%-15i|", di));
	printf(" (%d)\n", printf("Mfw -15: |%-15i|", di));
	printf(" (%d)\n", printf("Mfw -42: |%-42i|", di));
	printf(" (%d)\n", printf("Mfw -42: |%-42i|", di));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) -0.0: |%-0.0i|", 0));
	printf(" (%d)\n", printf("(0) -0.0: |%-0.0i|", 0));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1i|", 0));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1i|", 0));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0i|", 0));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0i|", 0));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1i|", 0));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1i|", 0));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2i|", 0));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2i|", 0));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0i|", 0));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0i|", 0));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2i|", 0));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2i|", 0));


	printf(" (%d)\n", printf("-0.0: |%-0.0i|", 5));
	printf(" (%d)\n", printf("-0.0: |%-0.0i|", 5));
	printf(" (%d)\n", printf("-0.1: |%-0.1i|", 5));
	printf(" (%d)\n", printf("-0.1: |%-0.1i|", 5));
	printf(" (%d)\n", printf("-1.0: |%-1.0i|", 5));
	printf(" (%d)\n", printf("-1.0: |%-1.0i|", 5));
	printf(" (%d)\n", printf("-1.1: |%-1.1i|", 5));
	printf(" (%d)\n", printf("-1.1: |%-1.1i|", 5));
	printf(" (%d)\n", printf("-0.2: |%-0.2i|", 5));
	printf(" (%d)\n", printf("-0.2: |%-0.2i|", 5));
	printf(" (%d)\n", printf("-2.0: |%-2.0i|", 5));
	printf(" (%d)\n", printf("-2.0: |%-2.0i|", 5));
	printf(" (%d)\n", printf("-2.2: |%-2.2i|", 5));
	printf(" (%d)\n", printf("-2.2: |%-2.2i|", 5));


	printf(" (%d)\n", printf("-1.1: |%-1.1i|", di));
	printf(" (%d)\n", printf("-1.1: |%-1.1i|", di));
	printf(" (%d)\n", printf("-2.2: |%-2.2i|", di));
	printf(" (%d)\n", printf("-2.2: |%-2.2i|", di));
	printf(" (%d)\n", printf("-3.2: |%-3.2i|", di));
	printf(" (%d)\n", printf("-3.2: |%-3.2i|", di));
	printf(" (%d)\n", printf("-2.3: |%-2.3i|", di));
	printf(" (%d)\n", printf("-2.3: |%-2.3i|", di));
	printf(" (%d)\n", printf("-8.4: |%-8.4i|", di));
	printf(" (%d)\n", printf("-8.4: |%-8.4i|", di));
	printf(" (%d)\n", printf("-4.8: |%-4.8i|", di));
	printf(" (%d)\n", printf("-4.8: |%-4.8i|", di));
	printf(" (%d)\n", printf("-8.8: |%-8.8i|", di));
	printf(" (%d)\n", printf("-8.8: |%-8.8i|", di));
	printf(" (%d)\n", printf("-8.2: |%-8.2i|", di));
	printf(" (%d)\n", printf("-8.2: |%-8.2i|", di));
	printf(" (%d)\n", printf("-2.8: |%-2.8i|", di));
	printf(" (%d)\n", printf("-2.8: |%-2.8i|", di));
	printf(" (%d)\n", printf("-8.1: |%-8.1i|", di));
	printf(" (%d)\n", printf("-8.1: |%-8.1i|", di));
	printf(" (%d)\n", printf("-1.8: |%-1.8i|", di));
	printf(" (%d)\n", printf("-1.8: |%-1.8i|", di));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards"));
	printf(" (%d)\n", printf("Handling wildcards"));

	printf(" (%d)\n", printf("Mfw *1: |%*i|", 1, di));
	printf(" (%d)\n", printf("Mfw *1: |%*i|", 1, di));
	printf(" (%d)\n", printf("Mfw *5: |%*i|", 5, di));
	printf(" (%d)\n", printf("Mfw *5: |%*i|", 5, di));
	printf(" (%d)\n", printf("Mfw *5: |%*i|",5, di));
	printf(" (%d)\n", printf("Mfw *5: |%*i|", 5, di));
	printf(" (%d)\n", printf("Mfw *5: |%*i|",        5, di));
	printf(" (%d)\n", printf("Mfw *5: |%*i|",        5, di));
	printf(" (%d)\n", printf("Mfw *10: |%*i|", 10, di));
	printf(" (%d)\n", printf("Mfw *10: |%*i|", 10, di));
	printf(" (%d)\n", printf("Mfw *i: |%*i|", di, di));
	printf(" (%d)\n", printf("Mfw *i: |%*i|", di, di));
	printf(" (%d)\n", printf("Mfw **5: |%*.*i|", 5, 6, di));
	printf(" (%d)\n", printf("Mfw **5: |%*.*i|", 5, 6, di));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*i|", 1, di));
	printf(" (%d)\n", printf("Precis. .*1: |%.*i|", 1, di));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|", 5, di));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|", 5, di));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",5, di));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",5, di));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",      5, di));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",      5, di));
	printf(" (%d)\n", printf("Precis. .*10: |%.*i|", 10, di));
	printf(" (%d)\n", printf("Precis. .*10: |%.*i|", 10, di));
	printf(" (%d)\n", printf("Precis. .*i: |%.*i|", di, di));
	printf(" (%d)\n", printf("Precis. .*i: |%.*i|", di, di));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*i|", 0, di));
	printf(" (%d)\n", printf("P .*0: |%.*i|", 0, di));
	printf(" (%d)\n", printf("P .*01: |%.*i|", 01, di));
	printf(" (%d)\n", printf("P .*01: |%.*i|", 01, di));
	printf(" (%d)\n", printf("P .*05: |%.*i|", 05, di));
	printf(" (%d)\n", printf("P .*05: |%.*i|", 05, di));
	printf(" (%d)\n", printf("P .*010: |%.*i|", 010, di));
	printf(" (%d)\n", printf("P .*010: |%.*i|", 010, di));
	printf(" (%d)\n", printf("P .*000000000007: |%.*i|", 000000000007, di));
	printf(" (%d)\n", printf("P .*000000000007: |%.*i|", 000000000007, di));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4i|", 8, di));
	printf(" (%d)\n", printf("*8.4: |%*.4i|", 8, di));
	printf(" (%d)\n", printf("*4.8: |%*.8i|", 4, di));
	printf(" (%d)\n", printf("*4.8: |%*.8i|", 4, di));
	printf(" (%d)\n", printf("*8.8: |%*.8i|", 8, di));
	printf(" (%d)\n", printf("*8.8: |%*.8i|", 8, di));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*i|", 4, di));
	printf(" (%d)\n", printf("8.*4: |%8.*i|", 4, di));
	printf(" (%d)\n", printf("4.*8: |%4.*i|", 8, di));
	printf(" (%d)\n", printf("4.*8: |%4.*i|", 8, di));
	printf(" (%d)\n", printf("8.*8: |%8.*i|", 8, di));
	printf(" (%d)\n", printf("8.*8: |%8.*i|", 8, di));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*i|", 8, 4, di));
	printf(" (%d)\n", printf("*8.*4: |%*.*i|", 8, 4, di));
	printf(" (%d)\n", printf("*4.*8: |%*.*i|", 4, 8, di));
	printf(" (%d)\n", printf("*4.*8: |%*.*i|", 4, 8, di));
	printf(" (%d)\n", printf("*8.*8: |%*.*i|", 8, 8, di));
	printf(" (%d)\n", printf("*8.*8: |%*.*i|", 8, 8, di));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*i|", 010, 4, di));
	printf(" (%d)\n", printf("*010.*4: |%*.*i|", 010, 4, di));
	printf(" (%d)\n", printf(" *07.*4: |%*.*i|", 07, 4, di));
	printf(" (%d)\n", printf(" *07.*4: |%*.*i|", 07, 4, di));
	printf(" (%d)\n", printf("*4.*010: |%*.*i|", 4, 010, di));
	printf(" (%d)\n", printf("*4.*010: |%*.*i|", 4, 010, di));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*i|", 0x10, 4, di));
	printf(" (%d)\n", printf("*0x10.*4: |%*.*i|", 0x10, 4, di));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*i|", 0x7, 4, di));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*i|", 0x7, 4, di));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*i|", 4, 0x10, di));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*i|", 4, 0x10, di));
	printf("\n");



	//int octal;

	// octal = 010;
	// octal--;

	// printf("octal: %i\n", octal);

	// //this will print 7.

	// int octal_atoi;

	// octal_atoi = atoi("010");
	// octal_atoi--;

	// printf("octal: %i\n", octal_atoi);

	// //this will print 9.

	// int hexadec;

	// hexadec = 0x10;
	// hexadec--;

	// printf("hexadec: %i\n", hexadec);

	// //this will print 15.

	// int hexadec_atoi;

	// hexadec_atoi = atoi("0x10");
	// hexadec_atoi--;

	// printf("hexadec: %i\n", hexadec_atoi);

	// //this will print -1.

	printf(" (%d)\n", printf("*8: |%*i|", 8, di));
	printf(" (%d)\n", printf("*8: |%*i|", 8, di));
	printf(" (%d)\n", printf("0*8: |%0*i|", 8, di));
	printf(" (%d)\n", printf("0*8: |%0*i|", 8, di));
	printf(" (%d)\n", printf("00*8: |%00*i|", 8, di));
	printf(" (%d)\n", printf("00*8: |%00*i|", 8, di));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*i|", 8, di));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*i|", 8, di));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*i|", 0, di));
	printf(" (%d)\n", printf("-*0: |%-*i|", 0, di));
	printf(" (%d)\n", printf("-0*0: |%-0*i|", 0, di));
	printf(" (%d)\n", printf("-0*0: |%-0*i|", 0, di));
	printf(" (%d)\n", printf("-0*3: |%-0*i|", 3, di));
	printf(" (%d)\n", printf("-0*3: |%-0*i|", 3, di));
	printf(" (%d)\n", printf("*(-03): |%*i|", -03, di));
	printf(" (%d)\n", printf("*(-03): |%*i|", -03, di));
	printf(" (%d)\n", printf("*(-5): |%*i|", -5, di));
	printf(" (%d)\n", printf("*(-5): |%*i|", -5, di));
	printf(" (%d)\n", printf("*(5): |%*i|", 5, di));
	printf(" (%d)\n", printf("*(5): |%*i|", 5, di));
	printf(" (%d)\n", printf("-*(5): |%-*i|", 5, di));
	printf(" (%d)\n", printf("-*(5): |%-*i|", 5, di));
	printf(" (%d)\n", printf("-8.4: |%-8.4i|", di));
	printf(" (%d)\n", printf("-8.4: |%-8.4i|", di));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4i|", 8, di));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4i|", 8, di));
	printf(" (%d)\n", printf("*(-8).4: |%*.4i|", -8, di));
	printf(" (%d)\n", printf("*(-8).4: |%*.4i|", -8, di));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*i|", ((int)(-8.4)), di));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*i|", ((int)(-8.4)), di));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*i|", 4, di));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*i|", 4, di));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*i|", -4, di));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*i|", -4, di));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*i|", 0, di));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*i|", 0, di));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*i|", 1, di));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*i|", 1, di));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4i|", 0, di));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4i|", 0, di));
	printf(" (%d)\n", printf("*(0).4: |%*.4i|", 0, di));
	printf(" (%d)\n", printf("*(0).4: |%*.4i|", 0, di));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	printf("\n");

	printf(" (%d)\n", printf("Mfw *1: |%*i|", 1, 0));
	printf(" (%d)\n", printf("Mfw *1: |%*i|", 1, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*i|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*i|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*i|",5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*i|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*i|",        5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*i|",        5, 0));
	printf(" (%d)\n", printf("Mfw *10: |%*i|", 10, 0));
	printf(" (%d)\n", printf("Mfw *10: |%*i|", 10, 0));
	printf(" (%d)\n", printf("Mfw *i: |%*i|", 0, 0));
	printf(" (%d)\n", printf("Mfw *i: |%*i|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*i|", 1, 0));
	printf(" (%d)\n", printf("Precis. .*1: |%.*i|", 1, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|", 5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|", 5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",      5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*i|",      5, 0));
	printf(" (%d)\n", printf("Precis. .*10: |%.*i|", 10, 0));
	printf(" (%d)\n", printf("Precis. .*10: |%.*i|", 10, 0));
	printf(" (%d)\n", printf("Precis. .*i: |%.*i|", 0, 0));
	printf(" (%d)\n", printf("Precis. .*i: |%.*i|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*i|", 0, 0));
	printf(" (%d)\n", printf("P .*0: |%.*i|", 0, 0));
	printf(" (%d)\n", printf("P .*01: |%.*i|", 01, 0));
	printf(" (%d)\n", printf("P .*01: |%.*i|", 01, 0));
	printf(" (%d)\n", printf("P .*05: |%.*i|", 05, 0));
	printf(" (%d)\n", printf("P .*05: |%.*i|", 05, 0));
	printf(" (%d)\n", printf("P .*010: |%.*i|", 010, 0));
	printf(" (%d)\n", printf("P .*010: |%.*i|", 010, 0));
	printf(" (%d)\n", printf("P .*000000000007: |%.*i|", 000000000007, 0));
	printf(" (%d)\n", printf("P .*000000000007: |%.*i|", 000000000007, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4i|", 8, 0));
	printf(" (%d)\n", printf("*8.4: |%*.4i|", 8, 0));
	printf(" (%d)\n", printf("*4.8: |%*.8i|", 4, 0));
	printf(" (%d)\n", printf("*4.8: |%*.8i|", 4, 0));
	printf(" (%d)\n", printf("*8.8: |%*.8i|", 8, 0));
	printf(" (%d)\n", printf("*8.8: |%*.8i|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*i|", 4, 0));
	printf(" (%d)\n", printf("8.*4: |%8.*i|", 4, 0));
	printf(" (%d)\n", printf("4.*8: |%4.*i|", 8, 0));
	printf(" (%d)\n", printf("4.*8: |%4.*i|", 8, 0));
	printf(" (%d)\n", printf("8.*8: |%8.*i|", 8, 0));
	printf(" (%d)\n", printf("8.*8: |%8.*i|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*i|", 8, 4, 0));
	printf(" (%d)\n", printf("*8.*4: |%*.*i|", 8, 4, 0));
	printf(" (%d)\n", printf("*4.*8: |%*.*i|", 4, 8, 0));
	printf(" (%d)\n", printf("*4.*8: |%*.*i|", 4, 8, 0));
	printf(" (%d)\n", printf("*8.*8: |%*.*i|", 8, 8, 0));
	printf(" (%d)\n", printf("*8.*8: |%*.*i|", 8, 8, 0));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*i|", 010, 4, 0));
	printf(" (%d)\n", printf("*010.*4: |%*.*i|", 010, 4, 0));
	printf(" (%d)\n", printf(" *07.*4: |%*.*i|", 07, 4, 0));
	printf(" (%d)\n", printf(" *07.*4: |%*.*i|", 07, 4, 0));
	printf(" (%d)\n", printf("*4.*010: |%*.*i|", 4, 010, 0));
	printf(" (%d)\n", printf("*4.*010: |%*.*i|", 4, 010, 0));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*i|", 0x10, 4, 0));
	printf(" (%d)\n", printf("*0x10.*4: |%*.*i|", 0x10, 4, 0));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*i|", 0x7, 4, 0));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*i|", 0x7, 4, 0));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*i|", 4, 0x10, 0));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*i|", 4, 0x10, 0));
	printf("\n");



	//int octal;

	// octal = 010;
	// octal--;

	// printf("octal: %i\n", octal);

	// //this will print 7.

	// int octal_atoi;

	// octal_atoi = atoi("010");
	// octal_atoi--;

	// printf("octal: %i\n", octal_atoi);

	// //this will print 9.

	// int hexadec;

	// hexadec = 0x10;
	// hexadec--;

	// printf("hexadec: %i\n", hexadec);

	// //this will print 15.

	// int hexadec_atoi;

	// hexadec_atoi = atoi("0x10");
	// hexadec_atoi--;

	// printf("hexadec: %i\n", hexadec_atoi);

	// //this will print -1.

	printf(" (%d)\n", printf("*8: |%*i|", 8, 0));
	printf(" (%d)\n", printf("*8: |%*i|", 8, 0));
	printf(" (%d)\n", printf("0*8: |%0*i|", 8, 0));
	printf(" (%d)\n", printf("0*8: |%0*i|", 8, 0));
	printf(" (%d)\n", printf("00*8: |%00*i|", 8, 0));
	printf(" (%d)\n", printf("00*8: |%00*i|", 8, 0));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*i|", 8, 0));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*i|", 8, 0));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*i|", 0, 0));
	printf(" (%d)\n", printf("-*0: |%-*i|", 0, 0));
	printf(" (%d)\n", printf("-0*0: |%-0*i|", 0, 0));
	printf(" (%d)\n", printf("-0*0: |%-0*i|", 0, 0));
	printf(" (%d)\n", printf("-0*3: |%-0*i|", 3, 0));
	printf(" (%d)\n", printf("-0*3: |%-0*i|", 3, 0));
	printf(" (%d)\n", printf("*(-03): |%*i|", -03, 0));
	printf(" (%d)\n", printf("*(-03): |%*i|", -03, 0));
	printf(" (%d)\n", printf("*(-5): |%*i|", -5, 0));
	printf(" (%d)\n", printf("*(-5): |%*i|", -5, 0));
	printf(" (%d)\n", printf("*(5): |%*i|", 5, 0));
	printf(" (%d)\n", printf("*(5): |%*i|", 5, 0));
	printf(" (%d)\n", printf("-*(5): |%-*i|", 5, 0));
	printf(" (%d)\n", printf("-*(5): |%-*i|", 5, 0));
	printf(" (%d)\n", printf("-8.4: |%-8.4i|", 0));
	printf(" (%d)\n", printf("-8.4: |%-8.4i|", 0));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4i|", 8, 0));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4i|", 8, 0));
	printf(" (%d)\n", printf("*(-8).4: |%*.4i|", -8, 0));
	printf(" (%d)\n", printf("*(-8).4: |%*.4i|", -8, 0));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*i|", ((int)(-8.4)), 0));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*i|", ((int)(-8.4)), 0));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*i|", 4, 0));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*i|", 4, 0));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*i|", -4, 0));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*i|", -4, 0));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*i|", 0, 0));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*i|", 0, 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*i|", 1, 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*i|", 1, 0));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4i|", 0, 0));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4i|", 0, 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4i|", 0, 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4i|", 0, 0));


	
	printf("\n------------------------------------------------------------------------------------------------\n\n");
	printf(" (%d)\n", printf("Peer evaluation tests:"));
	printf(" (%d)\n", printf("Peer evaluation tests:"));
	
	printf(" (%d)\n", printf("empty string: |%s|", ""));
	printf(" (%d)\n", printf("empty string: |%s|", ""));
	printf(" (%d)\n", printf("null pointer: |%p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer: |%p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer .p: |%.p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer .p: |%.p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer -5.p: |%-5.p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer -5.p: |%-5.p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer 1.p: |%1.p|", ((void *)(0))));
	printf(" (%d)\n", printf("null pointer 1.p: |%1.p|", ((void *)(0))));

	printf(" (%d)\n", printf("S Mfw 10: |%10s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));

	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));

	printf(" (%d)\n", printf("S Mfw 010: |%010s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));

	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", "abcdefgh90"));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", "abcdefgh"));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));

	printf(" (%d)\n", printf("8.*(-5): |%8.*s|", -5, "abcdefgh9"));
	printf(" (%d)\n", printf("8.*(-5): |%8.*s|", -5, "abcdefgh9"));
	printf(" (%d)\n", printf("8.0: |%8.0s|", "abcdefgh9"));
	printf(" (%d)\n", printf("8.0: |%8.0s|", "abcdefgh9"));
	printf(" (%d)\n", printf("8.1: |%8.1s|", "abcdefgh9"));
	printf(" (%d)\n", printf("8.1: |%8.1s|", "abcdefgh9"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "abcdefgh9"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "abcdefgh9"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "abcdefgh9"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "abcdefgh9"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "abc"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "abc"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "abc"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "abc"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "abc4567890"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "abc4567890"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "abc4567890"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "abc4567890"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "0"));
	printf(" (%d)\n", printf("8.4: |%8.4s|", "0"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "0"));
	printf(" (%d)\n", printf("4.8: |%4.8s|", "0"));

	printf(" (%d)\n", printf("08.4: |%08.4s|", "abc45678"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "abc45678"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "abc45678"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "abc45678"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "abc"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "abc"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "abc"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "abc"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "abc4567890"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "abc4567890"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "abc4567890"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "abc4567890"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "0"));
	printf(" (%d)\n", printf("08.4: |%08.4s|", "0"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "0"));
	printf(" (%d)\n", printf("04.8: |%04.8s|", "0"));

	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "abc45678"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "abc45678"));
	printf(" (%d)\n", printf("-09.4: |%-09.4s|", "abc45678"));
	printf(" (%d)\n", printf("-09.4: |%-09.4s|", "abc45678"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "abc45678"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "abc45678"));
	printf(" (%d)\n", printf("-04.9: |%-04.9s|", "abc45678"));
	printf(" (%d)\n", printf("-04.9: |%-04.9s|", "abc45678"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "abc"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "abc"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "abc"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "abc"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "abc4567890"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "abc4567890"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "abc4567890"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "abc4567890"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "0"));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", "0"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "0"));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", "0"));


	printf(" (%d)\n", printf("*8.4: |%*.4s|", 8, "0abc45"));
	printf(" (%d)\n", printf("*8.4: |%*.4s|", 8, "0abc45"));
	printf(" (%d)\n", printf("*4.8: |%*.8s|", 4, "0abc45"));
	printf(" (%d)\n", printf("*4.8: |%*.8s|", 4, "0abc45"));
	printf(" (%d)\n", printf("*8.8: |%*.8s|", 8, "0abc45"));
	printf(" (%d)\n", printf("*8.8: |%*.8s|", 8, "0abc45"));

	printf(" (%d)\n", printf("*8.4: |%8.*s|", 4, "0abc45"));
	printf(" (%d)\n", printf("*8.4: |%8.*s|", 4, "0abc45"));
	printf(" (%d)\n", printf("*4.8: |%4.*s|", 8, "0abc45"));
	printf(" (%d)\n", printf("*4.8: |%4.*s|", 8, "0abc45"));
	printf(" (%d)\n", printf("*8.8: |%8.*s|", 8, "0abc45"));
	printf(" (%d)\n", printf("*8.8: |%8.*s|", 8, "0abc45"));

	printf(" (%d)\n", printf("*8.*4: |%*.*s|", 8, 4, "0abc45"));
	printf(" (%d)\n", printf("*8.*4: |%*.*s|", 8, 4, "0abc45"));
	printf(" (%d)\n", printf("*4.*8: |%*.*s|", 4, 8, "0abc45"));
	printf(" (%d)\n", printf("*4.*8: |%*.*s|", 4, 8, "0abc45"));
	printf(" (%d)\n", printf("*8.*8: |%*.*s|", 8, 8, "0abc45"));
	printf(" (%d)\n", printf("*8.*8: |%*.*s|", 8, 8, "0abc45"));




	printf(" (%d)\n", printf("*(-1).8: |%*.8s|", -1, "0abc"));
	printf(" (%d)\n", printf("*(-1).8: |%*.8s|", -1, "0abc"));
	printf(" (%d)\n", printf("8.(-1): |%8.*s|", -1, "0abc"));
	printf(" (%d)\n", printf("8.(-1): |%8.*s|", -1, "0abc"));
	printf(" (%d)\n", printf("*(-1).*(-1): |%*.*s|", -1, -1, "0abc"));
	printf(" (%d)\n", printf("*(-1).*(-1): |%*.*s|", -1, -1, "0abc"));
	printf(" (%d)\n", printf("*0.8: |%*.8s|", 0, "0abc"));
	printf(" (%d)\n", printf("*0.8: |%*.8s|", 0, "0abc"));
	printf(" (%d)\n", printf("8.*0: |%8.*s|", 0, "0abc"));
	printf(" (%d)\n", printf("8.*0: |%8.*s|", 0, "0abc"));
	printf(" (%d)\n", printf("*0.*0: |%*.*s|", 0, 0, "0abc"));
	printf(" (%d)\n", printf("*0.*0: |%*.*s|", 0, 0, "0abc"));
	printf(" (%d)\n", printf("*1.*0: |%*.*s|", 1, 0, "0abc"));
	printf(" (%d)\n", printf("*1.*0: |%*.*s|", 1, 0, "0abc"));
	printf(" (%d)\n", printf("*0.*1: |%*.*s|", 0, 1, "0abc"));
	printf(" (%d)\n", printf("*0.*1: |%*.*s|", 0, 1, "0abc"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");
	printf(" (%d)\n", printf("Mucking about with empty strings:"));
	printf(" (%d)\n", printf("Mucking about with empty strings:"));

	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));
	printf(" (%d)\n", printf("S Mfw 10: |%10s|", ""));

	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));
	printf(" (%d)\n", printf("S Mfw -10: |%-10s|", ""));

	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));
	printf(" (%d)\n", printf("S Mfw 010: |%010s|", ""));

	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));
	printf(" (%d)\n", printf("S Mfw -010: |%-010s|", ""));

	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("8.4: |%8.4s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));
	printf(" (%d)\n", printf("4.8: |%4.8s|", ""));

	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("08.4: |%08.4s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));
	printf(" (%d)\n", printf("04.8: |%04.8s|", ""));

	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-09.4: |%-09.4s|", ""));
	printf(" (%d)\n", printf("-09.4: |%-09.4s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-04.9: |%-04.9s|", ""));
	printf(" (%d)\n", printf("-04.9: |%-04.9s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-08.4: |%-08.4s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));
	printf(" (%d)\n", printf("-04.8: |%-04.8s|", ""));


	printf(" (%d)\n", printf("*8.4: |%*.4s|", 8, ""));
	printf(" (%d)\n", printf("*8.4: |%*.4s|", 8, ""));
	printf(" (%d)\n", printf("*4.8: |%*.8s|", 4, ""));
	printf(" (%d)\n", printf("*4.8: |%*.8s|", 4, ""));
	printf(" (%d)\n", printf("*8.8: |%*.8s|", 8, ""));
	printf(" (%d)\n", printf("*8.8: |%*.8s|", 8, ""));

	printf(" (%d)\n", printf("*8.4: |%8.*s|", 4, ""));
	printf(" (%d)\n", printf("*8.4: |%8.*s|", 4, ""));
	printf(" (%d)\n", printf("*4.8: |%4.*s|", 8, ""));
	printf(" (%d)\n", printf("*4.8: |%4.*s|", 8, ""));
	printf(" (%d)\n", printf("*8.8: |%8.*s|", 8, ""));
	printf(" (%d)\n", printf("*8.8: |%8.*s|", 8, ""));

	printf(" (%d)\n", printf("*8.*4: |%*.*s|", 8, 4, ""));
	printf(" (%d)\n", printf("*8.*4: |%*.*s|", 8, 4, ""));
	printf(" (%d)\n", printf("*4.*8: |%*.*s|", 4, 8, ""));
	printf(" (%d)\n", printf("*4.*8: |%*.*s|", 4, 8, ""));
	printf(" (%d)\n", printf("*8.*8: |%*.*s|", 8, 8, ""));
	printf(" (%d)\n", printf("*8.*8: |%*.*s|", 8, 8, ""));




	printf(" (%d)\n", printf("*(-1).8: |%*.8s|", -1, ""));
	printf(" (%d)\n", printf("*(-1).8: |%*.8s|", -1, ""));
	printf(" (%d)\n", printf("8.(-1): |%8.*s|", -1, ""));
	printf(" (%d)\n", printf("8.(-1): |%8.*s|", -1, ""));
	printf(" (%d)\n", printf("*(-1).*(-1): |%*.*s|", -1, -1, ""));
	printf(" (%d)\n", printf("*(-1).*(-1): |%*.*s|", -1, -1, ""));
	printf(" (%d)\n", printf("*0.8: |%*.8s|", 0, ""));
	printf(" (%d)\n", printf("*0.8: |%*.8s|", 0, ""));
	printf(" (%d)\n", printf("8.*0: |%8.*s|", 0, ""));
	printf(" (%d)\n", printf("8.*0: |%8.*s|", 0, ""));
	printf(" (%d)\n", printf("*0.*0: |%*.*s|", 0, 0, ""));
	printf(" (%d)\n", printf("*0.*0: |%*.*s|", 0, 0, ""));
	printf(" (%d)\n", printf("*1.*0: |%*.*s|", 1, 0, ""));
	printf(" (%d)\n", printf("*1.*0: |%*.*s|", 1, 0, ""));
	printf(" (%d)\n", printf("*0.*1: |%*.*s|", 0, 1, ""));
	printf(" (%d)\n", printf("*0.*1: |%*.*s|", 0, 1, ""));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Negative ints are a pain:"));
	printf(" (%d)\n", printf("Negative ints are a pain:"));
	printf("\n");

	int negative_int = -1994;


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", negative_int));
	printf("\n");

	negative_int = -2147483648;

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", negative_int));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8i|", negative_int));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", negative_int));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5i|", negative_int));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	printf("\n");

	printf(" (%d)\n", printf("8.: |%8.i|", 0));
	printf(" (%d)\n", printf("8.: |%8.i|", 0));
	printf(" (%d)\n", printf("8.: |%8.i|", 42));
	printf(" (%d)\n", printf("8.: |%8.i|", 42));
	printf(" (%d)\n", printf("8.: |%8.s|", "test"));
	printf(" (%d)\n", printf("8.: |%8.s|", "test"));
	printf(" (%d)\n", printf("08.*(-4): |%08.*i|", -4, 42));
	printf(" (%d)\n", printf("08.*(-4): |%08.*i|", -4, 42));
	printf(" (%d)\n", printf("(string) 8.*(-5): |%8.*s|", -5, "test"));
	printf(" (%d)\n", printf("(string) 8.*(-5): |%8.*s|", -5, "test"));
	printf(" (%d)\n", printf("Literally no conversions in this one"));
	printf(" (%d)\n", printf("Literally no conversions in this one"));
	printf("\n");

	int	val = -1;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	printf(" (%d)\n", printf("Ya basic: |%p|", val));


	printf(" (%d)\n", printf("My compliments in hexadecimal: %X %X %X", 4011, 49374, 47806));	





	

	if(broken)
	{
	printf("This is an incomplete    printf conversion: %-0*.*", 13, 7);
	printf("\n");
	printf("This is an incomplete printf conversion: %-0*.*", 13, 7);
	printf("\n");

	printf("This is a bogus    printf conversion: %-0*.*b", 13, 7);
	printf("\n");
	printf("This is a bogus printf conversion: %-0*.*b", 13, 7);
	printf("\n");

	printf("This is a bogus    printf conversion with double precision: %-0*..*b", 13, 7);
	printf("\n");
	printf("This is a bogus printf conversion with double precision: %-0*..*b", 13, 7);
	printf("\n");
	}
	return (0);
}
