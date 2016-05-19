//
//  main.c
//  echo-eof
//
//  Created by Rex Tsao on 15/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ch;
    // EOF: End Of File. It representes the end of one file.
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}
