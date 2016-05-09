//
//  main.c
//  print-practise
//
//  Created by Rex Tsao on 9/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include "main.h"

int main(int argc, const char * argv[]) {
//    turnASCIIToCharacter();
//    showFloatOrZhishu();
//    ageToSeconds();
    memberInWater();
    return 0;
}

void turnASCIIToCharacter(void) {
    short a;
    printf("Enter a ASCII code: ");
    scanf("%hd", &a);
    char tmp = a;
    printf("the character you provide is \"%c\" \n", tmp);
}

void showFloatOrZhishu(void) {
    float a;
    printf("Enter your float number: ");
    scanf("%f", &a);
    printf("The input is %.6f or %e\n", a, a);
}

void ageToSeconds(void) {
    float secondsOneYear = 3.156 * 107;
    short age;
    printf("Enter your age: ");
    scanf("%hd", &age);
    printf("Your age is about %.9f\n", age * secondsOneYear);
}

void memberInWater() {
    short kuatuo;
    long double massOne = 3.0e-23;
    long gram = 950;
    printf("Enter kuatuo of water: ");
    scanf("%hd", &kuatuo);
    long double memebers = kuatuo * gram / massOne;
    printf("These water contains %.23Lf members. \n", memebers);
}
