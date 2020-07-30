#include <stdio.h>

/*This is a main method*/

int main (int argc, char *argv[])
  {	
   //Here we're assigning a value to the integer variable "distance"
    int distance = 100;
    char fName[] = "Gomolemo";
    int age = 26;
    char bookTitle[] = "Learn C The HARD Way";
    char author[] = "Zed Shaw";
    char dream[] = "Fullstack Software Developer";
    
    
    /*This is a print function that outputs a string of characters 
    along with the value of distance*/
    
    printf ("You are %d miles away.\n", distance);
    printf ("Hi, My Name is %s , and I am %d Years old!\n", fName, age);
    printf ("I\'m currently learning %s by %s , and for the first time in my life... "
    , bookTitle, author);
    printf("I finally feel like I\'m on the rght track!\n");
    printf ("My Dream of becoming a %s is finally on the way!\n",  dream);
    printf("I AM GRATEFUL.\n");
    
    return 0;
  
  }

