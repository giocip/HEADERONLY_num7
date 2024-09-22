//test_num7_eligibility.cpp
#include "num7.h"
#include <time.h>
using namespace num7;

int main() {
    clock_t tic = clock(), toc = tic;

    tic = clock();

    test_num7();

    toc = clock();

    printf("\n--------------------\n");
    printf("ET: %.6fs", (double)(toc - tic) / CLOCKS_PER_SEC);
    time_t now = time(NULL);
    char* s_now = ctime(&now);
    printf("\n%s*** PROGRAM OVER ***\n", s_now);

    return 0;
}
