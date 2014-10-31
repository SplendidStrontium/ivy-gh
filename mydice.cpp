#include <stdlib.h>
#include <time.h>

namespace rng_die {

int rolld(int sides) {
    srand(time(NULL));
    int rolled = (rand() % sides);
    return rolled+1; }

}
