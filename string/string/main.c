//
//  main.c
//  string
//
//  Created by Rex Tsao on 9/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define DENSITY 62.4    // density of people (pounds/cubic inch)

int main(int argc, const char * argv[]) {
    float weight, volume;
    int size;
    unsigned long letters;
    char name[40];  // name is an array with 40 characters.
    
    printf("Hi! What's your first name? \n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds? \n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    
    printf("Well, %s, your volume is %2.2f cubic feet. \n", name, volume);
    printf("Also, your first name has %lu letters. \n", letters);
    printf("and we have %d bytes to store it in .\n", size);
    return 0;
}
