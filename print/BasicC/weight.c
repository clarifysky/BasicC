//
//  weight.c
//  BasicC
//
//  Created by Rex Tsao on 7/4/2016.
//  Copyright © 2016 breadth.com. All rights reserved.
//

#include "weight.h"

void weight(void) {
    float weight, value;
    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:\n");
    
    // Accepet input from user.
    scanf("%f", &weight);
    value = 770 * weight * 14.5833;
    
    // Use %n.f to control how many bits you need to show. n indicates the number of bits.
    printf("Your weight in rhodium is worth $%.2f.\n", value);
    printf("You are easily worth that! If rhodium prices drop, \n");
    printf("eat more to maintain your value.\n");
}