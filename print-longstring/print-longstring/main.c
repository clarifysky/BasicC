//
//  main.c
//  print-longstring
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");
    // You can pass the parameter which be devided by white space character to printf,
    // in this case, printf will output them in one line, as they are one string.
    printf("Here's the newest way to print a " "long string\n");
    
    return 0;
}
