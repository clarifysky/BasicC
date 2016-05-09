//
//  main.c
//  print-escape
//
//  Created by Rex Tsao on 9/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee! \n");
    return 0;
}
