#include <stdio.h>


void main(int argc, char *argv[]) {
    setreuid(0, 0);
    system(argv[1]);
}
