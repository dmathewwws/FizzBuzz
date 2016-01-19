//
//  main.c
//  FizzBuzz
//
//  Created by Jake Zeal on 1/19/16.
//  Copyright © 2016 Jake Zeal. All rights reserved.
//


#include <stdio.h>

int main() {
    
    for (int x = 1; x <= 100; x++) {
        if (x % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (x % 3 == 0) {
            printf("Fizz\n");
        } else if (x % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", x);
        }
    }
    return 0;
}
