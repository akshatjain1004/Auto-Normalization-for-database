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
        auto dm= dependancyMatrix();
        for(int i=0;i< dm.size();i++){
            for(int j=0;j<dm[0].size();j++){
                cout<<dm[i][j]<<" ";
            }
            cout<<'\n';
        }
        /*
        start your code from here
        */
    //    cout<<typeid(Fds[0].LHS).name();
    }
    vector<vector<int>> dependancyMatrix(){
        int num=0;
        vector<vector<int>> dm(numFds,vector<int>(numAttr,0));
        for(auto x: Fds){
            auto left= x.LHS;
            auto right= x.RHS;
            for(auto y: left){
                dm[num][y]=2;
            }
            for(auto y: right){
                dm[num][y]=1;
            }
            num++;
        }
        return dm;
    }

};

#endif