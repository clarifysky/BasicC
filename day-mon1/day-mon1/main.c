//
//  main.c
//  day-mon1
//
//  Created by Rex Tsao on 18/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#define MONTHS 12

int main(int argc, const char * argv[]) {
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // sizeof calculate the byte size of an object. So sizeof days / sizeof days[0] means the number of months.
    for (int index = 0; index < sizeof days / sizeof days[0]; index++) {
        printf("Month %d has %d days.\n", index + 1, days[index]);
    }
    return 0;
}
