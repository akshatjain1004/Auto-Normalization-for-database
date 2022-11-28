#ifndef INPUT_PARSER_H
#define INPUT_PARSER_H
#include <bits/stdc++.h>

#include "functionalDependency.h"

using namespace std;

class InputParser {
   public:
    int numAttr;
    int numFds;
    vector<FD> Fds;
    InputParser(){};
    void start() {
        cin >> numAttr;
        cin >> numFds;
        Fds.resize(numFds);
        string s;
        getline(cin, s);
        for (int i = 0; i < numFds; i++) Fds[i] = getFunctionalDependency();
        for (int i = 0; i < numFds; i++) Fds[i].print();
    }
    FD getFunctionalDependency() {
        FD cur;
        string s;
        getline(cin, s);
        stringstream ss(s);
        bool ok = true;
        while (ss >> s) {
            if (s == "->") {
                ok = false;
                continue;
            }
            if (ok)
                cur.LHS.push_back(stoi(s));
            else
                cur.RHS.push_back(stoi(s));
        }

        return cur;
    }
};

#endif