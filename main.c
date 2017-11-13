//
//  main.c
//  New Values

// %d - Interger
// %c - Character
//  %f - float
//  %s - strings

// scanf("control sting",&variable);// & -address

// ASCII

//
//  Created by Eun Jae Lee on 13/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    int a = 0,b = 0;

    
    printf("Enter two number to add: \n");
    
    scanf("%d %d", &a,&b);

    int c = a+b;
    
    printf("Total is: %d\n",c);
    
   // return 0;
}
