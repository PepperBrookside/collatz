#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int n;
int counter;

int main(int argc, char *argv[])
{
    // ensure proper command line arguments
    if (argc != 2)
    {
        printf("Please enter type one integer next to the file name.\n");
        printf("Example: ./colliatz 7\n");
        return 1;
    }
    
    //establish the variable for the given integer
    n = atoi(argv[1]);
    
    // declare our measurement variable.
    counter = 0;
    
    while(n > 1){
        if (n == 10 || n == 64){
            n = 1;
            counter += 6;
        } else if (n % 2 == 0){
            n = n / 2;
            counter += 1;
        } else {
            n = (n * 3) + 1;
            counter += 1;
        }
    }
    
    printf("It takes %d steps to reach 1 using the collatz conjecture.\n", counter);
    return 0;
}