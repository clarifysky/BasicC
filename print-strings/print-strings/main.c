//
//  main.c
//  print-strings
//
//  Created by Rex Tsao on 11/5/2016.
//  Copyright © 2016 rexcao.net. All rights reserved.
//

#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(int argc, const char * argv[]) {
    
    // For string, a in %a.bs means the width of characters, b means how many characters should be shown.
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n", BLURB);
    return 0;
}
