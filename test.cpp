#include "histogram.h"
#include <iostream>
#include <cassert>
void
test_positive() {
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}

void
test_otr() {
    double min = 0;
    double max = 0;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
}

void
test_odinak(){
    double min = 0;
    double max = 0;
    find_minmax({3,3,3}, min, max);
    assert(min == 3);
    assert(max == 3);
}


void
test_one(){
 double min = 0;
    double max = 0;
    find_minmax({2}, min, max);
    assert(min == 2);
    assert(max == 2);

}

void
test_pustou(){

    double min = 0;
    double max = 0;
    find_minmax( {}, min, max);
    assert(min == 0);
    assert(max == 0);

}


int
main() {
    test_positive();
    test_otr();
    test_odinak();
    test_one();
    test_pustou();
}
