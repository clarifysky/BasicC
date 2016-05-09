//
//  Sample1.c
//  BasicC
//
//  Created by Rex Tsao on 6/4/2016.
//  Copyright © 2016 breadth.com. All rights reserved.
//

#include "main.h"
#include "weight.h"
#include "jinzhi.h"

int main (void) {
//    age();
//    weight();
    numberJinzhi();
    
    return 0;
}

void butler(void) {
    printf("You rang, sir?\n");
}

void age(void) {
    char name;
    int age;
    printf("What is your name?\n");
    scanf("%c", &name);
    printf("How old are you?\n");
    scanf("%d", &age);
    int days = ageToDays(age);
    printf("%c, you've lived for %d days!\n", name, days);
}

int ageToDays(int age) {
    return age * 365;
}