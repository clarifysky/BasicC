//
//  Sample1.c
//  BasicC
//
//  Created by Rex Tsao on 6/4/2016.
//  Copyright © 2016 breadth.com. All rights reserved.
//

#include "Sample1.1.h"

void butler(void);  // ISO/ANSI C prototype of function.
int main (void) {
    int dogs;
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)! \n", dogs);
    
    butler();
    return 0;
}

void butler(void) {
    printf("You rang, sir?\n");
}