#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

/* object prototypes */
class Character {
public:
    Character() {
	m_str = 0;
	m_dex = 0;
	m_int = 0;
	m_wis = 0;
	m_con = 0;
	m_com = 0;
	m_cha = 0;
	cout << "Your stats are\n";
	cout << " STR " << m_str << "  |  ";
	cout << "DEX " << m_dex << "  |  ";
	cout << "INT " << m_int << "  |  ";
	cout << "WIS " << m_wis << "  |  ";
	cout << "CON " << m_con << "  |  ";
	cout << "COM " << m_com << "  |  ";
	cout << "CHA " << m_cha << "  |  \n";
    }
private:
    int m_str;
    int m_dex;
    int m_int;
    int m_wis;
    int m_con;
    int m_com;
    int m_cha;
};

class PlayerCharacter : public Character
{
public:
    PlayerCharacter(const string& str) : Character(){
	nname = str;
	cout << "GENERATE NEW CHARACTER? (Y/N)\n";
    }
private:
    string nname;
};


/* LOCAL CONSTANTS */
int rndseed = 0;
char WHEREAMI[] = "CHARACTER CREATION";
char s[30];

/* LOCAL FUNCTIONS */
int rolld(int sides);
void cleaninput(char* input);
void printplayerlocation(char* location);
void queryplayer();

/* MAIN */
int main() 
{ 
    srand(time(NULL));
    rndseed = rand();

    printplayerlocation(WHEREAMI); 

    cout << "Let's roll up a new character. Enter a short name." << "\n";
    cin >> s;
    cleaninput(s);
    PlayerCharacter myPC(s);

    //queryplayer();

return 0;
}

/* FUNCTION DEFINITIONS */

/* CHECK FOR BAD CHARACTERS FROM USER INPUT */
void cleaninput(char* input)
{
    cout << "Your name will be: " << input << "\n";
}

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
