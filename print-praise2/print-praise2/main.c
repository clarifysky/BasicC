//
//  main.c
//  print-praise2
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define PRAISE "What a super marvelous name!"

int main(int argc, const char * argv[]) {
    
    char name[40];
    
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells. \n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    
    return 0;
}
