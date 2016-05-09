//
//  main.c
//  print-sizeof
//
//  Created by Rex Tsao on 9/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // C99 has provided a %zd descriptor for type size.
    // As of some compiler required %lu to replace %u, C99 provide %zd descriptor to solve this problem..
    printf("Type int has a size of %zd bytes. \n", sizeof(int));
    printf("Type char has a size of %zd bytes. \n", sizeof(char));
    printf("Type long has a size of %zd bytes. \n", sizeof(long));
    printf("Type double has a size of %zd bytes. \n", sizeof(double));
    
    return 0;
}
