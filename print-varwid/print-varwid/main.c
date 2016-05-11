//
//  main.c
//  print-varwid
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    
    printf("What field width?\n");
    scanf("%d", &width);
    printf("The number is: %*d: \n", width, number);
    printf("Now enter a width and a precision: \n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    return 0;
}
