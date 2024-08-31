#include <stdio.h>
#include <stdlib.h>
#include "random.h"


//make a function that when called returns a random char 

char randchar(){
    int randomNumber = (rand() % 26 );
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    return letters[randomNumber];
    
}