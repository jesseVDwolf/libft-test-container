/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/12 05:52:29 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int		printf(const char *format, ...)
// {
// 	return 0;
// }


int		main(void)
{
	char	val = 'a';
	val = '%';
	// val = 'c';
	// val = '$';
    val = (char)-42;

	int broken = 0;
	int	bonus = 0;

	printf(" (%d)\n", printf("Handling minimum field width"));
	printf(" (%d)\n", printf("Handling minimum field width"));

	printf(" (%d)\n", printf("(0) Mfw 0: |%0c|", 0));
	printf(" (%d)\n", printf("(0) Mfw 0: |%0c|", 0));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1c|", 0));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1c|", 0));
	printf(" (%d)\n", printf("Mfw 0: |%0c|", val));
	printf(" (%d)\n", printf("Mfw 0: |%0c|", val));
	printf(" (%d)\n", printf("Mfw 1: |%1c|", val));
	printf(" (%d)\n", printf("Mfw 1: |%1c|", val));
	printf(" (%d)\n", printf("Mfw 2: |%2c|", val));
	printf(" (%d)\n", printf("Mfw 2: |%2c|", val));
	printf(" (%d)\n", printf("Mfw 3: |%3c|", val));
	printf(" (%d)\n", printf("Mfw 3: |%3c|", val));
	printf(" (%d)\n", printf("Mfw 4: |%4c|", val));
	printf(" (%d)\n", printf("Mfw 4: |%4c|", val));
	printf(" (%d)\n", printf("Mfw 5: |%5c|", val));
	printf(" (%d)\n", printf("Mfw 5: |%5c|", val));
	printf(" (%d)\n", printf("Mfw 10: |%10c|", val));
	printf(" (%d)\n", printf("Mfw 10: |%10c|", val));
	printf(" (%d)\n", printf("Mfw 15: |%15c|", val));
	printf(" (%d)\n", printf("Mfw 15: |%15c|", val));
	printf(" (%d)\n", printf("Mfw 42: |%42c|", val));
	printf(" (%d)\n", printf("Mfw 42: |%42c|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision"));
	printf(" (%d)\n", printf("Handling precision"));

	printf(" (%d)\n", printf("(0) Precis. 0: |%.0c|", 0));
	printf(" (%d)\n", printf("(0) Precis. 0: |%.0c|", 0));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1c|", 0));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1c|", 0));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2c|", 0));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2c|", 0));
	printf(" (%d)\n", printf("Precis. 0: |%.0c|", val));
	printf(" (%d)\n", printf("Precis. 0: |%.0c|", val));
	printf(" (%d)\n", printf("Precis. 1: |%.1c|", val));
	printf(" (%d)\n", printf("Precis. 1: |%.1c|", val));
	printf(" (%d)\n", printf("Precis. 2: |%.2c|", val));
	printf(" (%d)\n", printf("Precis. 2: |%.2c|", val));
	printf(" (%d)\n", printf("Precis. 3: |%.3c|", val));
	printf(" (%d)\n", printf("Precis. 3: |%.3c|", val));
	printf(" (%d)\n", printf("Precis. 4: |%.4c|", val));
	printf(" (%d)\n", printf("Precis. 4: |%.4c|", val));
	printf(" (%d)\n", printf("Precis. 5: |%.5c|", val));
	printf(" (%d)\n", printf("Precis. 5: |%.5c|", val));
	printf(" (%d)\n", printf("Precis. 10: |%.10c|", val));
	printf(" (%d)\n", printf("Precis. 10: |%.10c|", val));
	printf(" (%d)\n", printf("Precis. 15: |%.15c|", val));
	printf(" (%d)\n", printf("Precis. 15: |%.15c|", val));
	printf(" (%d)\n", printf("Precis. 42: |%.42c|", val));
	printf(" (%d)\n", printf("Precis. 42: |%.42c|", val));

	printf(" (%d)\n", printf("(0) P .00: |%.00c|", 0));
	printf(" (%d)\n", printf("(0) P .00: |%.00c|", 0));
	printf(" (%d)\n", printf("(0) P .01: |%.01c|", 0));
	printf(" (%d)\n", printf("(0) P .01: |%.01c|", 0));	
	printf(" (%d)\n", printf("P .00: |%.00c|", val));
	printf(" (%d)\n", printf("P .00: |%.00c|", val));	
	printf(" (%d)\n", printf("P .01: |%.01c|", val));
	printf(" (%d)\n", printf("P .01: |%.01c|", val));
	printf(" (%d)\n", printf("P .02: |%.02c|", val));
	printf(" (%d)\n", printf("P .02: |%.02c|", val));
	printf(" (%d)\n", printf("P .03: |%.03c|", val));
	printf(" (%d)\n", printf("P .03: |%.03c|", val));
	printf(" (%d)\n", printf("P .04: |%.04c|", val));
	printf(" (%d)\n", printf("P .04: |%.04c|", val));
	printf(" (%d)\n", printf("P .05: |%.05c|", val));
	printf(" (%d)\n", printf("P .05: |%.05c|", val));
	printf(" (%d)\n", printf("P .010: |%.010c|", val));
	printf(" (%d)\n", printf("P .010: |%.010c|", val));
	printf(" (%d)\n", printf("P .015: |%.015c|", val));
	printf(" (%d)\n", printf("P .015: |%.015c|", val));
	printf(" (%d)\n", printf("P .042: |%.042c|", val));
	printf(" (%d)\n", printf("P .042: |%.042c|", val));

	printf(" (%d)\n", printf("P .007: |%.007c|", val));
	printf(" (%d)\n", printf("P .007: |%.007c|", val));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007c|", val));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007c|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width"));
	printf(" (%d)\n", printf("Handling precision & minimum field width"));

	printf(" (%d)\n", printf("(0) 0.0: |%0.0c|", 0));
	printf(" (%d)\n", printf("(0) 0.0: |%0.0c|", 0));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0c|", 0));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0c|", 0));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0c|", 10));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0c|", 10));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1c|", 0));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1c|", 0));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1c|", 0));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1c|", 0));
	printf(" (%d)\n", printf("0.0: |%0.0c|", val));
	printf(" (%d)\n", printf("0.0: |%0.0c|", val));
	printf(" (%d)\n", printf("1.1: |%1.1c|", val));
	printf(" (%d)\n", printf("1.1: |%1.1c|", val));
	printf(" (%d)\n", printf("2.2: |%2.2c|", val));
	printf(" (%d)\n", printf("2.2: |%2.2c|", val));
	printf(" (%d)\n", printf("3.2: |%3.2c|", val));
	printf(" (%d)\n", printf("3.2: |%3.2c|", val));
	printf(" (%d)\n", printf("2.3: |%2.3c|", val));
	printf(" (%d)\n", printf("2.3: |%2.3c|", val));
	printf(" (%d)\n", printf("8.4: |%8.4c|", val));
	printf(" (%d)\n", printf("8.4: |%8.4c|", val));
	printf(" (%d)\n", printf("4.8: |%4.8c|", val));
	printf(" (%d)\n", printf("4.8: |%4.8c|", val));
	printf(" (%d)\n", printf("8.8: |%8.8c|", val));
	printf(" (%d)\n", printf("8.8: |%8.8c|", val));
	printf(" (%d)\n", printf("8.2: |%8.2c|", val));
	printf(" (%d)\n", printf("8.2: |%8.2c|", val));
	printf(" (%d)\n", printf("2.8: |%2.8c|", val));
	printf(" (%d)\n", printf("2.8: |%2.8c|", val));
	printf(" (%d)\n", printf("8.1: |%8.1c|", val));
	printf(" (%d)\n", printf("8.1: |%8.1c|", val));
	printf(" (%d)\n", printf("1.8: |%1.8c|", val));
	printf(" (%d)\n", printf("1.8: |%1.8c|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 00.0: |%00.0c|", 0));
	printf(" (%d)\n", printf("(0) 00.0: |%00.0c|", 0));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0c|", 0));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0c|", 0));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1c|", 0));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1c|", 0));
	printf(" (%d)\n", printf("01.1: |%01.1c|", val));
	printf(" (%d)\n", printf("01.1: |%01.1c|", val));
	printf(" (%d)\n", printf("02.2: |%02.2c|", val));
	printf(" (%d)\n", printf("02.2: |%02.2c|", val));
	printf(" (%d)\n", printf("03.2: |%03.2c|", val));
	printf(" (%d)\n", printf("03.2: |%03.2c|", val));
	printf(" (%d)\n", printf("02.3: |%02.3c|", val));
	printf(" (%d)\n", printf("02.3: |%02.3c|", val));
	printf(" (%d)\n", printf("08.4: |%08.4c|", val));
	printf(" (%d)\n", printf("08.4: |%08.4c|", val));
	printf(" (%d)\n", printf("04.8: |%04.8c|", val));
	printf(" (%d)\n", printf("04.8: |%04.8c|", val));
	printf(" (%d)\n", printf("08.8: |%08.8c|", val));
	printf(" (%d)\n", printf("08.8: |%08.8c|", val));
	printf(" (%d)\n", printf("08.2: |%08.2c|", val));
	printf(" (%d)\n", printf("08.2: |%08.2c|", val));
	printf(" (%d)\n", printf("02.8: |%02.8c|", val));
	printf(" (%d)\n", printf("02.8: |%02.8c|", val));
	printf(" (%d)\n", printf("08.1: |%08.1c|", val));
	printf(" (%d)\n", printf("08.1: |%08.1c|", val));
	printf(" (%d)\n", printf("01.8: |%01.8c|", val));
	printf(" (%d)\n", printf("01.8: |%01.8c|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 0: |%0c|", 0));
	printf(" (%d)\n", printf("(0) 0: |%0c|", 0));
	printf(" (%d)\n", printf("(0) 00: |%00c|", 0));
	printf(" (%d)\n", printf("(0) 00: |%00c|", 0));
	printf(" (%d)\n", printf("(0) 01: |%01c|", 0));
	printf(" (%d)\n", printf("(0) 01: |%01c|", 0));
	printf(" (%d)\n", printf("(0) 02: |%02c|", 0));
	printf(" (%d)\n", printf("(0) 02: |%02c|", 0));
	printf(" (%d)\n", printf("0: |%0c|", val));
	printf(" (%d)\n", printf("0: |%0c|", val));
	printf(" (%d)\n", printf("00: |%00c|", val));
	printf(" (%d)\n", printf("00: |%00c|", val));
	printf(" (%d)\n", printf("01: |%01c|", val));
	printf(" (%d)\n", printf("01: |%01c|", val));
	printf(" (%d)\n", printf("02: |%02c|", val));
	printf(" (%d)\n", printf("02: |%02c|", val));
	printf(" (%d)\n", printf("03: |%03c|", val));
	printf(" (%d)\n", printf("03: |%03c|", val));
	printf(" (%d)\n", printf("08: |%08c|", val));
	printf(" (%d)\n", printf("08: |%08c|", val));
	printf(" (%d)\n", printf("000000000008: |%000000000008c|", val));
	printf(" (%d)\n", printf("000000000008: |%000000000008c|", val));
	printf(" (%d)\n", printf("010: |%010c|", val));
	printf(" (%d)\n", printf("010: |%010c|", val));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010c|", val));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010c|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));

	printf(" (%d)\n", printf("(0) -0: |%-0c|", 0));
	printf(" (%d)\n", printf("(0) -0: |%-0c|", 0));
	printf(" (%d)\n", printf("(0) -00: |%-00c|", 0));
	printf(" (%d)\n", printf("(0) -00: |%-00c|", 0));
	printf(" (%d)\n", printf("(0) -01: |%-01c|", 0));
	printf(" (%d)\n", printf("(0) -01: |%-01c|", 0));
	printf(" (%d)\n", printf("(0) -02: |%-02c|", 0));
	printf(" (%d)\n", printf("(0) -02: |%-02c|", 0));

	printf(" (%d)\n", printf("-0: |%-0c|", val));
	printf(" (%d)\n", printf("-0: |%-0c|", val));
	printf(" (%d)\n", printf("-00: |%-00c|", val));
	printf(" (%d)\n", printf("-00: |%-00c|", val));
	printf(" (%d)\n", printf("-01: |%-01c|", val));
	printf(" (%d)\n", printf("-01: |%-01c|", val));
	printf(" (%d)\n", printf("-02: |%-02c|", val));
	printf(" (%d)\n", printf("-02: |%-02c|", val));
	printf(" (%d)\n", printf("-03: |%-03c|", val));
	printf(" (%d)\n", printf("-03: |%-03c|", val));
	printf(" (%d)\n", printf("-08: |%-08c|", val));
	printf(" (%d)\n", printf("-08: |%-08c|", val));
	printf(" (%d)\n", printf("0-8: |%0-8c|", val));
	printf(" (%d)\n", printf("0-8: |%0-8c|", val));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008c|", val));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008c|", val));
	printf(" (%d)\n", printf("-010: |%-010c|", val));
	printf(" (%d)\n", printf("-010: |%-010c|", val));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010c|", val));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010c|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	printf(" (%d)\n", printf("Handling minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) Mfw -0: |%-0c|", 0));
	printf(" (%d)\n", printf("(0) Mfw -0: |%-0c|", 0));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1c|", 0));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1c|", 0));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2c|", 0));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2c|", 0));
	
	printf(" (%d)\n", printf("Mfw -0: |%-0c|", val));
	printf(" (%d)\n", printf("Mfw -0: |%-0c|", val));
	printf(" (%d)\n", printf("Mfw -1: |%-1c|", val));
	printf(" (%d)\n", printf("Mfw -1: |%-1c|", val));
	printf(" (%d)\n", printf("Mfw -2: |%-2c|", val));
	printf(" (%d)\n", printf("Mfw -2: |%-2c|", val));
	printf(" (%d)\n", printf("Mfw -3: |%-3c|", val));
	printf(" (%d)\n", printf("Mfw -3: |%-3c|", val));
	printf(" (%d)\n", printf("Mfw -4: |%-4c|", val));
	printf(" (%d)\n", printf("Mfw -4: |%-4c|", val));
	printf(" (%d)\n", printf("Mfw -5: |%-5c|", val));
	printf(" (%d)\n", printf("Mfw -5: |%-5c|", val));
	printf(" (%d)\n", printf("Mfw -10: |%-10c|", val));
	printf(" (%d)\n", printf("Mfw -10: |%-10c|", val));
	printf(" (%d)\n", printf("Mfw --10: |%--10c|", val));
	printf(" (%d)\n", printf("Mfw --10: |%--10c|", val));
	printf(" (%d)\n", printf("Mfw ---10: |%---10c|", val));
	printf(" (%d)\n", printf("Mfw ---10: |%---10c|", val));
	printf(" (%d)\n", printf("Mfw -15: |%-15c|", val));
	printf(" (%d)\n", printf("Mfw -15: |%-15c|", val));
	printf(" (%d)\n", printf("Mfw -42: |%-42c|", val));
	printf(" (%d)\n", printf("Mfw -42: |%-42c|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) -0.0: |%-0.0c|", 0));
	printf(" (%d)\n", printf("(0) -0.0: |%-0.0c|", 0));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1c|", 0));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1c|", 0));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0c|", 0));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0c|", 0));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1c|", 0));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1c|", 0));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2c|", 0));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2c|", 0));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0c|", 0));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0c|", 0));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2c|", 0));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2c|", 0));


	printf(" (%d)\n", printf("-0.0: |%-0.0c|", 5));
	printf(" (%d)\n", printf("-0.0: |%-0.0c|", 5));
	printf(" (%d)\n", printf("-0.1: |%-0.1c|", 5));
	printf(" (%d)\n", printf("-0.1: |%-0.1c|", 5));
	printf(" (%d)\n", printf("-1.0: |%-1.0c|", 5));
	printf(" (%d)\n", printf("-1.0: |%-1.0c|", 5));
	printf(" (%d)\n", printf("-1.1: |%-1.1c|", 5));
	printf(" (%d)\n", printf("-1.1: |%-1.1c|", 5));
	printf(" (%d)\n", printf("-0.2: |%-0.2c|", 5));
	printf(" (%d)\n", printf("-0.2: |%-0.2c|", 5));
	printf(" (%d)\n", printf("-2.0: |%-2.0c|", 5));
	printf(" (%d)\n", printf("-2.0: |%-2.0c|", 5));
	printf(" (%d)\n", printf("-2.2: |%-2.2c|", 5));
	printf(" (%d)\n", printf("-2.2: |%-2.2c|", 5));


	printf(" (%d)\n", printf("-1.1: |%-1.1c|", val));
	printf(" (%d)\n", printf("-1.1: |%-1.1c|", val));
	printf(" (%d)\n", printf("-2.2: |%-2.2c|", val));
	printf(" (%d)\n", printf("-2.2: |%-2.2c|", val));
	printf(" (%d)\n", printf("-3.2: |%-3.2c|", val));
	printf(" (%d)\n", printf("-3.2: |%-3.2c|", val));
	printf(" (%d)\n", printf("-2.3: |%-2.3c|", val));
	printf(" (%d)\n", printf("-2.3: |%-2.3c|", val));
	printf(" (%d)\n", printf("-8.4: |%-8.4c|", val));
	printf(" (%d)\n", printf("-8.4: |%-8.4c|", val));
	printf(" (%d)\n", printf("-4.8: |%-4.8c|", val));
	printf(" (%d)\n", printf("-4.8: |%-4.8c|", val));
	printf(" (%d)\n", printf("-8.8: |%-8.8c|", val));
	printf(" (%d)\n", printf("-8.8: |%-8.8c|", val));
	printf(" (%d)\n", printf("-8.2: |%-8.2c|", val));
	printf(" (%d)\n", printf("-8.2: |%-8.2c|", val));
	printf(" (%d)\n", printf("-2.8: |%-2.8c|", val));
	printf(" (%d)\n", printf("-2.8: |%-2.8c|", val));
	printf(" (%d)\n", printf("-8.1: |%-8.1c|", val));
	printf(" (%d)\n", printf("-8.1: |%-8.1c|", val));
	printf(" (%d)\n", printf("-1.8: |%-1.8c|", val));
	printf(" (%d)\n", printf("-1.8: |%-1.8c|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards"));
	printf(" (%d)\n", printf("Handling wildcards"));

	printf(" (%d)\n", printf("Mfw *1: |%*c|", 1, val));
	printf(" (%d)\n", printf("Mfw *1: |%*c|", 1, val));
	printf(" (%d)\n", printf("Mfw *5: |%*c|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*c|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*c|",5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*c|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*c|",        5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*c|",        5, val));
	printf(" (%d)\n", printf("Mfw *10: |%*c|", 10, val));
	printf(" (%d)\n", printf("Mfw *10: |%*c|", 10, val));
	// printf(" (%d)\n", printf("Mfw *i: |%*c|", val, val));
	// printf(" (%d)\n", printf("Mfw *i: |%*c|", val, val));
	printf(" (%d)\n", printf("Mfw **5: |%*.*c|", 5, 6, val));
	printf(" (%d)\n", printf("Mfw **5: |%*.*c|", 5, 6, val));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*c|", 1, val));
	printf(" (%d)\n", printf("Precis. .*1: |%.*c|", 1, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|", 5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|", 5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",      5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",      5, val));
	printf(" (%d)\n", printf("Precis. .*10: |%.*c|", 10, val));
	printf(" (%d)\n", printf("Precis. .*10: |%.*c|", 10, val));
	// printf(" (%d)\n", printf("Precis. .*i: |%.*c|", val, val));
	// printf(" (%d)\n", printf("Precis. .*i: |%.*c|", val, val));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*c|", 0, val));
	printf(" (%d)\n", printf("P .*0: |%.*c|", 0, val));
	printf(" (%d)\n", printf("P .*01: |%.*c|", 01, val));
	printf(" (%d)\n", printf("P .*01: |%.*c|", 01, val));
	printf(" (%d)\n", printf("P .*05: |%.*c|", 05, val));
	printf(" (%d)\n", printf("P .*05: |%.*c|", 05, val));
	printf(" (%d)\n", printf("P .*010: |%.*c|", 010, val));
	printf(" (%d)\n", printf("P .*010: |%.*c|", 010, val));
	printf(" (%d)\n", printf("P .*000000000007: |%.*c|", 000000000007, val));
	printf(" (%d)\n", printf("P .*000000000007: |%.*c|", 000000000007, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4c|", 8, val));
	printf(" (%d)\n", printf("*8.4: |%*.4c|", 8, val));
	printf(" (%d)\n", printf("*4.8: |%*.8c|", 4, val));
	printf(" (%d)\n", printf("*4.8: |%*.8c|", 4, val));
	printf(" (%d)\n", printf("*8.8: |%*.8c|", 8, val));
	printf(" (%d)\n", printf("*8.8: |%*.8c|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*c|", 4, val));
	printf(" (%d)\n", printf("8.*4: |%8.*c|", 4, val));
	printf(" (%d)\n", printf("4.*8: |%4.*c|", 8, val));
	printf(" (%d)\n", printf("4.*8: |%4.*c|", 8, val));
	printf(" (%d)\n", printf("8.*8: |%8.*c|", 8, val));
	printf(" (%d)\n", printf("8.*8: |%8.*c|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*c|", 8, 4, val));
	printf(" (%d)\n", printf("*8.*4: |%*.*c|", 8, 4, val));
	printf(" (%d)\n", printf("*4.*8: |%*.*c|", 4, 8, val));
	printf(" (%d)\n", printf("*4.*8: |%*.*c|", 4, 8, val));
	printf(" (%d)\n", printf("*8.*8: |%*.*c|", 8, 8, val));
	printf(" (%d)\n", printf("*8.*8: |%*.*c|", 8, 8, val));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*c|", 010, 4, val));
	printf(" (%d)\n", printf("*010.*4: |%*.*c|", 010, 4, val));
	printf(" (%d)\n", printf(" *07.*4: |%*.*c|", 07, 4, val));
	printf(" (%d)\n", printf(" *07.*4: |%*.*c|", 07, 4, val));
	printf(" (%d)\n", printf("*4.*010: |%*.*c|", 4, 010, val));
	printf(" (%d)\n", printf("*4.*010: |%*.*c|", 4, 010, val));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*c|", 0x10, 4, val));
	printf(" (%d)\n", printf("*0x10.*4: |%*.*c|", 0x10, 4, val));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*c|", 0x7, 4, val));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*c|", 0x7, 4, val));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*c|", 4, 0x10, val));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*c|", 4, 0x10, val));
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

	printf(" (%d)\n", printf("*8: |%*c|", 8, val));
	printf(" (%d)\n", printf("*8: |%*c|", 8, val));
	printf(" (%d)\n", printf("0*8: |%0*c|", 8, val));
	printf(" (%d)\n", printf("0*8: |%0*c|", 8, val));
	printf(" (%d)\n", printf("00*8: |%00*c|", 8, val));
	printf(" (%d)\n", printf("00*8: |%00*c|", 8, val));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*c|", 8, val));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*c|", 8, val));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*c|", 0, val));
	printf(" (%d)\n", printf("-*0: |%-*c|", 0, val));
	printf(" (%d)\n", printf("-0*0: |%-0*c|", 0, val));
	printf(" (%d)\n", printf("-0*0: |%-0*c|", 0, val));
	printf(" (%d)\n", printf("-0*3: |%-0*c|", 3, val));
	printf(" (%d)\n", printf("-0*3: |%-0*c|", 3, val));
	printf(" (%d)\n", printf("*(-03): |%*c|", -03, val));
	printf(" (%d)\n", printf("*(-03): |%*c|", -03, val));
	printf(" (%d)\n", printf("*(-5): |%*c|", -5, val));
	printf(" (%d)\n", printf("*(-5): |%*c|", -5, val));
	printf(" (%d)\n", printf("*(5): |%*c|", 5, val));
	printf(" (%d)\n", printf("*(5): |%*c|", 5, val));
	printf(" (%d)\n", printf("-*(5): |%-*c|", 5, val));
	printf(" (%d)\n", printf("-*(5): |%-*c|", 5, val));
	printf(" (%d)\n", printf("-8.4: |%-8.4c|", val));
	printf(" (%d)\n", printf("-8.4: |%-8.4c|", val));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4c|", 8, val));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4c|", 8, val));
	printf(" (%d)\n", printf("*(-8).4: |%*.4c|", -8, val));
	printf(" (%d)\n", printf("*(-8).4: |%*.4c|", -8, val));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*c|", ((int)(-8.4)), val));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*c|", ((int)(-8.4)), val));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*c|", 4, val));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*c|", 4, val));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*c|", -4, val));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*c|", -4, val));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*c|", 0, val));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*c|", 0, val));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*c|", 1, val));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*c|", 1, val));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4c|", 0, val));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4c|", 0, val));
	printf(" (%d)\n", printf("*(0).4: |%*.4c|", 0, val));
	printf(" (%d)\n", printf("*(0).4: |%*.4c|", 0, val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	printf("\n");

	printf(" (%d)\n", printf("Mfw *1: |%*c|", 1, 0));
	printf(" (%d)\n", printf("Mfw *1: |%*c|", 1, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*c|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*c|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*c|",5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*c|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*c|",        5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*c|",        5, 0));
	printf(" (%d)\n", printf("Mfw *10: |%*c|", 10, 0));
	printf(" (%d)\n", printf("Mfw *10: |%*c|", 10, 0));
	printf(" (%d)\n", printf("Mfw *i: |%*c|", 0, 0));
	printf(" (%d)\n", printf("Mfw *i: |%*c|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*c|", 1, 0));
	printf(" (%d)\n", printf("Precis. .*1: |%.*c|", 1, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|", 5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|", 5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",      5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*c|",      5, 0));
	printf(" (%d)\n", printf("Precis. .*10: |%.*c|", 10, 0));
	printf(" (%d)\n", printf("Precis. .*10: |%.*c|", 10, 0));
	printf(" (%d)\n", printf("Precis. .*i: |%.*c|", 0, 0));
	printf(" (%d)\n", printf("Precis. .*i: |%.*c|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*c|", 0, 0));
	printf(" (%d)\n", printf("P .*0: |%.*c|", 0, 0));
	printf(" (%d)\n", printf("P .*01: |%.*c|", 01, 0));
	printf(" (%d)\n", printf("P .*01: |%.*c|", 01, 0));
	printf(" (%d)\n", printf("P .*05: |%.*c|", 05, 0));
	printf(" (%d)\n", printf("P .*05: |%.*c|", 05, 0));
	printf(" (%d)\n", printf("P .*010: |%.*c|", 010, 0));
	printf(" (%d)\n", printf("P .*010: |%.*c|", 010, 0));
	printf(" (%d)\n", printf("P .*000000000007: |%.*c|", 000000000007, 0));
	printf(" (%d)\n", printf("P .*000000000007: |%.*c|", 000000000007, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4c|", 8, 0));
	printf(" (%d)\n", printf("*8.4: |%*.4c|", 8, 0));
	printf(" (%d)\n", printf("*4.8: |%*.8c|", 4, 0));
	printf(" (%d)\n", printf("*4.8: |%*.8c|", 4, 0));
	printf(" (%d)\n", printf("*8.8: |%*.8c|", 8, 0));
	printf(" (%d)\n", printf("*8.8: |%*.8c|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*c|", 4, 0));
	printf(" (%d)\n", printf("8.*4: |%8.*c|", 4, 0));
	printf(" (%d)\n", printf("4.*8: |%4.*c|", 8, 0));
	printf(" (%d)\n", printf("4.*8: |%4.*c|", 8, 0));
	printf(" (%d)\n", printf("8.*8: |%8.*c|", 8, 0));
	printf(" (%d)\n", printf("8.*8: |%8.*c|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*c|", 8, 4, 0));
	printf(" (%d)\n", printf("*8.*4: |%*.*c|", 8, 4, 0));
	printf(" (%d)\n", printf("*4.*8: |%*.*c|", 4, 8, 0));
	printf(" (%d)\n", printf("*4.*8: |%*.*c|", 4, 8, 0));
	printf(" (%d)\n", printf("*8.*8: |%*.*c|", 8, 8, 0));
	printf(" (%d)\n", printf("*8.*8: |%*.*c|", 8, 8, 0));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*c|", 010, 4, 0));
	printf(" (%d)\n", printf("*010.*4: |%*.*c|", 010, 4, 0));
	printf(" (%d)\n", printf(" *07.*4: |%*.*c|", 07, 4, 0));
	printf(" (%d)\n", printf(" *07.*4: |%*.*c|", 07, 4, 0));
	printf(" (%d)\n", printf("*4.*010: |%*.*c|", 4, 010, 0));
	printf(" (%d)\n", printf("*4.*010: |%*.*c|", 4, 010, 0));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*c|", 0x10, 4, 0));
	printf(" (%d)\n", printf("*0x10.*4: |%*.*c|", 0x10, 4, 0));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*c|", 0x7, 4, 0));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*c|", 0x7, 4, 0));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*c|", 4, 0x10, 0));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*c|", 4, 0x10, 0));
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

	printf(" (%d)\n", printf("*8: |%*c|", 8, 0));
	printf(" (%d)\n", printf("*8: |%*c|", 8, 0));
	printf(" (%d)\n", printf("0*8: |%0*c|", 8, 0));
	printf(" (%d)\n", printf("0*8: |%0*c|", 8, 0));
	printf(" (%d)\n", printf("00*8: |%00*c|", 8, 0));
	printf(" (%d)\n", printf("00*8: |%00*c|", 8, 0));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*c|", 8, 0));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*c|", 8, 0));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*c|", 0, 0));
	printf(" (%d)\n", printf("-*0: |%-*c|", 0, 0));
	printf(" (%d)\n", printf("-0*0: |%-0*c|", 0, 0));
	printf(" (%d)\n", printf("-0*0: |%-0*c|", 0, 0));
	printf(" (%d)\n", printf("-0*3: |%-0*c|", 3, 0));
	printf(" (%d)\n", printf("-0*3: |%-0*c|", 3, 0));
	printf(" (%d)\n", printf("*(-03): |%*c|", -03, 0));
	printf(" (%d)\n", printf("*(-03): |%*c|", -03, 0));
	printf(" (%d)\n", printf("*(-5): |%*c|", -5, 0));
	printf(" (%d)\n", printf("*(-5): |%*c|", -5, 0));
	printf(" (%d)\n", printf("*(5): |%*c|", 5, 0));
	printf(" (%d)\n", printf("*(5): |%*c|", 5, 0));
	printf(" (%d)\n", printf("-*(5): |%-*c|", 5, 0));
	printf(" (%d)\n", printf("-*(5): |%-*c|", 5, 0));
	printf(" (%d)\n", printf("-8.4: |%-8.4c|", 0));
	printf(" (%d)\n", printf("-8.4: |%-8.4c|", 0));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4c|", 8, 0));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4c|", 8, 0));
	printf(" (%d)\n", printf("*(-8).4: |%*.4c|", -8, 0));
	printf(" (%d)\n", printf("*(-8).4: |%*.4c|", -8, 0));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*c|", ((int)(-8.4)), 0));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*c|", ((int)(-8.4)), 0));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*c|", 4, 0));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*c|", 4, 0));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*c|", -4, 0));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*c|", -4, 0));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*c|", 0, 0));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*c|", 0, 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*c|", 1, 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*c|", 1, 0));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4c|", 0, 0));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4c|", 0, 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4c|", 0, 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4c|", 0, 0));


	printf("\n------------------------------------------------------------------------------------------------\n\n");
	
	

	printf(" (%d)\n", printf("Negative ints are a pain:"));
	printf(" (%d)\n", printf("Negative ints are a pain:"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5c|", val));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10c|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5c|", val));
	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5c|", val));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	printf("\n");

	printf(" (%d)\n", printf("8.: |%8.c|", 0));
	printf(" (%d)\n", printf("8.: |%8.c|", 0));
	printf(" (%d)\n", printf("8.: |%8.c|", 42));
	printf(" (%d)\n", printf("8.: |%8.c|", 42));
	printf(" (%d)\n", printf("08.*(-4): |%08.*c|", -4, 42));
	printf(" (%d)\n", printf("08.*(-4): |%08.*c|", -4, 42));
	printf("\n");

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17c|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20c|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17c|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20c|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17c|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20c|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18c|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15c|", val));
	printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15c|", val));
	printf("\n");



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
