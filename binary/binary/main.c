//
//  main.c
//  binary
//
//  Created by Rex Tsao on 17/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
void to_binary(unsigned long n);

int main(int argc, const char * argv[]) {
    unsigned long number;
    printf("Enter an integer (q to quit): \n");
    while (scanf("%lu", &number) == 1) {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done.\n");
    return 0;
}

void to_binary(unsigned long n) {
    int r;
    r = n % 2;
    if (n >= 2) {
        to_binary(n / 2);
    }
    
    // if r is 0, value of expression ('0' + r) means '0', while r is 1, value of this expression is '1'.
    putchar('0' + r);
    
    return;
}
