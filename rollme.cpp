#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

/* LOCAL CONSTANTS */
int rndseed = 0;
stringstream playerinput;

/* LOCAL FUNCTIONS */
int rolld(int sides);


/* MAIN */
int main() 
{ 
    srand(time(NULL));
    rndseed = rand();
    printf("%d\n", rndseed);    

    printf("%s\n", "roll a d4");

    int firstroll = rolld(4);
    printf("%d\n", firstroll);

    cout << "enter d4 or d20 to roll a die";
    cout << "\n";

return 0;
}

/* FUNCTION DEFINITIONS */

/* ROLL A #-SIDED DIE */
int rolld(int sides)
{
    srand(time(NULL)); 
    int rolled = (rand() % sides);
return rolled+1;
}
