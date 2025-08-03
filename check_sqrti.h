#ifndef CHECK_SQRTI_H
#define CHECK_SQRTI_H

#include <vector>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

class check_sqrti
{
    public:
        check_sqrti();
        virtual ~check_sqrti();
        check_sqrti(const check_sqrti& other);
        check_sqrti& operator=(const check_sqrti& other);
        vector<long double> xl;
        vector<long double> lx;
        vector<long double> xpl;
        vector<long double> fnl_weirdo;
        vector<string> lvec;
        string vecl;
        long double fractpart,intpart;
        long double ckxlip;
        long double ckep,ckdd,ckddd,ckddf;
        long double cksh,ckshep,ckshdd;
        long double appro_auto;
        long double x_dv;
        long double dif;
        int      check_sqrt(
                            long double mani,
                            long double ep,
                            long double dd,
                            long double st,
                            long double sh,
                            long double shep,
                            long double shdd,
                            long double ddd,
                            long double ddf,
                            int v_log,
                            int preci
                            );
        int show_xl(long double mynmb,int preci,int v_log,int st_th);
        int show_xpl(long double mynmb,int preci,int lg_lv,int st_th);
        int show_fnl_weirdo(int l_v,int auto_v,int st_th);
    protected:

    private:
};

#endif // CHECK_SQRTI_H
