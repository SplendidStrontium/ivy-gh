#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "mydice.h"
using namespace std;
namespace computress
{  // void listenforSTATNAME
    enum e_stat {
	Strength=91,
	Dexterity,
	Intellect,
	Wisdom,
	Constitution,
	Comeliness,
	Charisma };

}

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
	cout << "Rolling for exceptional stat: roll a d4.\n";
	//cout << "15 + " << rolld(4) << "[d4] = " << 
    }
private:
    string nname;
};

/* DATA STRUCTURES */
enum e_bool {
	yes=0,
	no=1
};

/* LOCAL CONSTANTS */
int rndseed = 0;
char WHEREAMI[] = "CHARACTER CREATION";
char s[30];

/* LOCAL FUNCTIONS */
void printplayerlocation(char* location);

/* MAIN */
int main() 
{ 
    srand(time(NULL));
    rndseed = rand();
    printplayerlocation(WHEREAMI); 

    cout << "Dolly\'s stats:\n";
    PlayerCharacter myPC(s);
    cout << rng_die::rolld(4) << "\n";
    cout << "Pick your stat: ";
    cin >> s;
    //queryplayer();

return 0;
}

/* FUNCTION DEFINITIONS */

/* PRINT PLAYER LOCATION
*/
void printplayerlocation(char* location)
{
    cout << "You are now at " << location << "\n";
}
