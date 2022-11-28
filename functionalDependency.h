#ifndef FD_H
#define FD_H

#include <bits/stdc++.h>
using namespace std;
struct FD {
    vector<int> LHS;
    vector<int> RHS;
    FD() {}
    FD(vector<int> a, vector<int> b) {
        LHS = a;
        RHS = b;
    }
    void print() {
        for (int x : LHS) cout << x << " ";
        cout << "-> ";
        for (int x : RHS) cout << x << " ";
        cout << "\n";
    }
};
#endif