#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* LOCAL CONSTANTS */
int r; //initial seed

/* LOCAL FUNCTIONS */
int d (int);


/* MAIN */
int main() 
{ 
    srand(time(NULL));
    int r = rand();
    printf("%d\n", r);    

    printf("%s\n", "roll me");
    return 0;
}

/* FUNCTION DEFINITIONS */

/* ROLL DICE
    @todo: improve seeding */

int d(int sides)
{
    return sides;
}
