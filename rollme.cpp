#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

/* LOCAL CONSTANTS */
int rndseed = 0;
char WHEREAMI[] = "CHARACTERCREATION";
string s;
stringstream playerinput;

/* LOCAL FUNCTIONS */
int rolld(int sides);
void printplayerlocation(char* location);
void queryplayer();

/* MAIN */
int main() 
{ 
    srand(time(NULL));
    rndseed = rand();

    printplayerlocation(WHEREAMI); 
    printf("%s\n", "roll a d4");

    int firstroll = rolld(4);
    printf("%d\n", firstroll);

    cout << "enter d4 or d20 to roll a die" << "\n";
    queryplayer();

return 0;
}

/* FUNCTION DEFINITIONS */

/* PRINT OPTIONS TO PLAYER 
    @TODO: make this vary 
*/
void queryplayer()
{
    printf("%s\n", "1: d4");
    printf("%s\n", "2: d20");
    cin >> s;
    cout << s;
}
/* PRINT PLAYER LOCATION
*/
void printplayerlocation(char* location)
{
    printf("%s\n", location);
}

/* ROLL A #-SIDED DIE */
int rolld(int sides)
{
    srand(time(NULL)); 
    int rolled = (rand() % sides);
return rolled+1;
}
