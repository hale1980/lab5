#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// hello
int main(int argc, char ** argv) {

    srand( time(NULL) );
    unsigned int i, count, total_points;
    double x,y,z,PI;

    total_points = atoi(argv[1]);

    count = 0;
    for(i = 0; i < total_points; ++i) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        z = x * x + y * y;
        if( z <= 1 ) count++;
    }

    PI = 4.0 * (double) count / total_points ;

    return(0);
}

