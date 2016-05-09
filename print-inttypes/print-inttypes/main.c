//
//  main.c
//  print-inttypes
//
//  Created by Rex Tsao on 9/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#include <inttypes.h>

int main(int argc, const char * argv[]) {
    int16_t me16;   // me16 is a 16 bits with singed variable.
    
    me16 = 4593;
    printf("First, assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, let's not make any assumptions. \n");
    printf("Insted, use a \"macro\" from inttypes.h: ");
    printf("me16 = %" PRId16 "\n", me16);
    return 0;
}
