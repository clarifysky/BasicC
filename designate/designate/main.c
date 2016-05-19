//
//  main.c
//  designate
//
//  Created by Rex Tsao on 18/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#define MONTHS 12
int main(int argc, const char * argv[]) {
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    for (i = 0; i <  MONTHS; i++) {
        printf("%2d %d\n", i + 1, days[i]);
    }
    return 0;
}
