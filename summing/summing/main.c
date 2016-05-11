//
//  main.c
//  summing
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    long num;
    long sum = 0L;
    int status;
    
    printf("Please enter an integer to be summed. (");
    printf("q to quit): ");
    status = scanf("%ld", &num);    // Only when you input an integer, status will be 1, otherwise, status will be 0.
    
    while (status == 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld\n", sum);
    return 0;
}
