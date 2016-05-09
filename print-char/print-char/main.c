//
//  main.c
//  print-char
//
//  Created by Rex Tsao on 9/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d. \n", ch, ch);
    return 0;
}
