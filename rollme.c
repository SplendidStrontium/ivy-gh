#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "d.h"

int main()
{
    srand(time(NULL));
    int r = rand();
    printf("%d\n", r);    

    printf("%s\n", "roll me");
    return 0;
}
