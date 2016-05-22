//
//  main.c
//  name1
//
//  Created by Rex Tsao on 21/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#define MAX 81
int main(int argc, const char * argv[]) {
    char name[MAX]; // Allocate memory space.
    printf("Hi, what's your name?\n");
    gets(name); // Read strings into array name.
    printf("Nice name, %s.\n", name);
    return 0;
}
