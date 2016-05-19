//
//  main.c
//  sum_arr2
//
//  Created by Rex Tsao on 18/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#define SIZE 10
int sump(int *start, int *end);

int main(int argc, const char * argv[]) {
    
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}

int sump(int *start, int *end) {
    int total = 0;
    
    while(start < end) {
        total += *start;
        start++;
    }
    return total;
}
