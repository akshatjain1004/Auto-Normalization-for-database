#ifndef NORMALIZER_H
#define NORMALIZER_H
#include <bits/stdc++.h>

#include "functionalDependency.h"

using namespace std;

class AutoNormalizer {
   public:
    int numAttr;
    int numFds;
    vector<FD> Fds;
    /*
    Define any data type you need here
    Look at the strucure 'FD'.
    */
    AutoNormalizer(int n, int k, vector<FD> _Fds) {
        numAttr = n;
        numFds = k;
        Fds = _Fds;
    }
    void start() {
        /*
        start your code from here
        */
    }
};

#endif