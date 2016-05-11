//
//  main.c
//  print-pound
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

void pound(int n);
int main(int argc, const char * argv[]) {
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound((int)f);
    return 0;
}

void pound(int n) {
    while (n-- > 0) {
        printf("#");
    }
    printf("\n");
}
