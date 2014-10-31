#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

/* object prototypes */
class PlayerCharacter
{
public:
    PlayerCharacter();
    int strength;
    int dexterity;
    int intellect;
    int wisdom;
    int constitution;
    int charisma;
};

PlayerCharacter::PlayerCharacter()
{
    int strength = 0;
    int dexterity = 0;
    int intellect = 0;
    int wisdom = 0;
    int constitution = 0;
    int charisma = 0;
}

/* LOCAL CONSTANTS */
int rndseed = 0;
char WHEREAMI[] = "CHARACTER CREATION";
char playerinput[30];
char s[30];

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
    cout << s << "\n";
}
/* PRINT PLAYER LOCATION
*/
void printplayerlocation(char* location)
{
    cout << "You are now at " << location << "\n";
}

/* ROLL A #-SIDED DIE */
int rolld(int sides)
{
    srand(time(NULL)); 
    int rolled = (rand() % sides);
return rolled+1;
}
