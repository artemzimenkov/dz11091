#include <iostream>
#include "Easy.h"

using namespace std;

int itc_str(int a, int b, int c){
    int p, s;
    if (a + b > c && a + c > b && b + c > a ){
        p = (a + b + c) / 2;
        s = itc_sqrt((int)p * (p - a) * (p - b) * (p - c));
        return s;
}
    else {
        return -1;
    }
}

