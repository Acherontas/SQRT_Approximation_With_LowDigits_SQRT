#ifndef BEE_CLS_H
#define BEE_CLS_H
#include <string>
#include <math.h>
#include <iomanip>
#include <thread>
#include <iostream>
#include "eql_digits_cnt.h"
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class bee_cls
{
    public:
        bee_cls();
        virtual ~bee_cls();
        bee_cls(const bee_cls& other);
        bee_cls& operator=(const bee_cls& other);
        vector<long double> da_pwrs;
        vector<long double> da_rsts;
        vector<long double> dfr;
        vector<long double> da_dr;
        long double drf;
        vector<int> da_psifia;
        int rtr=0;
        int bee_man(long double fr,long double sc,int rts,int logl);
        void bee_show(int lxpre);

    protected:

    private:
};

#endif // BEE_CLS_H
