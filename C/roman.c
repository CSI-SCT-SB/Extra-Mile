#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void num_to_char(char **num, int bit, int n)
{
    int i;
    char low, mid, high;
    char *p = *num;

    switch (n) {
    case 2:
        low = 'C';
        mid = 'D';
        high = 'M';
    break;
    case 1:
        low = 'X';
        mid = 'L';
        high = 'C';
    break;
    case 0:
        low = 'I';
        mid = 'V';
        high = 'X';
    break;
    }

    if (bit > 0) {
        switch (bit) {
        case 1:
        case 2:
        case 3:
            for (i = 0; i < bit; i++) {
                *p++ = low;
            }
            break;
        case 4:
            *p++ = low;
            *p++ = mid;
            break;
        case 5:
            *p++ = mid;
            break;
        case 6:
        case 7:
        case 8:
            *p++ = mid;
            for (i = 5; i < bit; i++) {
                *p++ = low;
            }
            break;
        case 9:
            *p++ = low;
            *p++ = high;
            break;
        }
    }

    *num = p;
}

static char roman_numeral[64];

static char *int_to_roman(int num)
{
    char *p = &roman_numeral[0];
    int thousand_bit_num = num / 1000;
    int hundred_bit_num = (num % 1000) / 100;
    int ten_bit_num = (num % 100) / 10;
    int one_bit_num = num % 10;
    int i;

    memset(roman_numeral, 0, sizeof(roman_numeral));

    if (thousand_bit_num > 0) {
        if (thousand_bit_num < 4) {
            for (i = 0; i < thousand_bit_num; i++) {
                *p++ = 'M';
            }
        }
    }

    num_to_char(&p, hundred_bit_num, 2);
    num_to_char(&p, ten_bit_num, 1);
    num_to_char(&p, one_bit_num, 0);

    return roman_numeral;
}

int main(void)
 {
     int n;
    printf("Enter a number:");
    scanf("%d",&n);
	printf("Original integer: %d", n);
    printf("\nRoman number of the said integer: %s", int_to_roman(n));
    return 0;
}
