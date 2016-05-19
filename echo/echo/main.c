//
//  main.c
//  echo
//
//  Created by Rex Tsao on 15/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    
    while((ch = getchar()) != '#')
        putchar(ch);
    return 0;
}
