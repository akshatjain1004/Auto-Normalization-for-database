#include <bits/stdc++.h>

#include "autoNormalizer.h"
#include "inputParser.h"

int main() {
    InputParser IP;
    IP.start();

    AutoNormalizer AN(IP.numAttr, IP.numFds, IP.Fds);
    AN.start();
    
    return 0;
}

using namespace std;
