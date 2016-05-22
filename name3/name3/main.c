//
//  main.c
//  name3
//
//  Created by Rex Tsao on 21/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#define MAX 81
int main(int argc, const char * argv[]) {
    char name[MAX];
    char *ptr;
    
    
    printf("Hi, what's your name?\n");
    ptr = fgets(name, MAX, stdin);
    
    // fgets will retain the '\n' character.
    printf("%s? Ah! %s!\n", name, ptr);
    return 0;
}
