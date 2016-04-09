//
//  jinzhi.c
//  BasicC
//
//  Created by Rex Tsao on 7/4/2016.
//  Copyright © 2016 breadth.com. All rights reserved.
//

#include "jinzhi.h"

void numberJinzhi(void) {
    printf("Input a number used to show:\n");
    int x;
    scanf("%d", &x);
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
}