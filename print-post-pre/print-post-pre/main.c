//
//  main.c
//  print-post-pre
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 1,  b = 1;
    int aplus, plusb;
    
    aplus = a++;    // assign first, then operation.
    plusb = ++b;    // operation first, then assign.
    printf("a aplus b plusb \n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);
    return 0;
}
