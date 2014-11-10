#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dist/json/json.h"
#include "mydice.h"
#include "myIO.h"
using namespace std;

/* object prototypes */
struct CUR_CON { 
    int lastroll;
    int isDead;
    char* interface; 
  
    enum e_io {
	io_STAT=0   };
};

class Character {
public:
    Character() {
    }
private:
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

/* LOCAL CONSTANTS */
int myroll = 0;
int rndseed = 0;
char WHEREAMI[] = "CHARACTER CREATION";
char s[30];

/* LOCAL FUNCTIONS */
void printplayerlocation(char* location);

/* MAIN */
int main(int argc, char **argv) 
{ 
    srand(time(NULL));
    rndseed = rand();
    CUR_CON session;
    printplayerlocation(WHEREAMI); 
    /* ROLL A DIE 
    myroll = rng_die::rolld(4);
    cout << myroll << endl;
    cout << "Pick your stat: ";
    using namespace computress;
	int listencode = 0;
	listen(listencode);
    */
     //cin >> s;
    //queryplayer();
    using namespace std;
    ifstream fin;
    char c;

    fin.open("data/letest.json", ios::in);

    if (fin.fail())
    {
	cout << "unable to open" << endl;
	exit(1);
    }

    while (!fin.fail() && !fin.eof())
    {
	cout << c;
	fin.get(c);
    }
    fin.close();

return 0;
}

/* PRINT PLAYER LOCATION
*/
void printplayerlocation(char* location)
{
    cout << "You are now at " << location << "\n";
}
