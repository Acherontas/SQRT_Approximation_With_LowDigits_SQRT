#ifndef VCC_PART_ONE_H
#define VCC_PART_ONE_H
#include <vector>
#include <thread>
#include "part_of.h"
#include <bits/stdc++.h>

class vcc_part_one
{
    public:
        vcc_part_one();
        virtual ~vcc_part_one();
        vcc_part_one(const vcc_part_one& other);
        vcc_part_one& operator=(const vcc_part_one& other);
        long double baqr;
        long double abqr;
        long double ab,ba;
        long double ldb;
        int by_one;
        long double adb;
        int ad,pd,lap;
        long double t_ten=10;
        long double t_rst;
        long double fractpart,intpart;
        long double frc,intprt;
        long double bee_tmpf;
        int xstp;
        int xli=0;
        long double rst_f;
        int mad,mpd,mlap;
        int lshow=0;int xbrk=0;int rts=0;
        vector<long double> v_cc;
        vector<long double> for_the_bee;
        int fill_vcc(long double mynmb,long double lt_main,int preci,int v_log,int st_th,int ps_ask,int psif);
        long double xlk;
        long double afr;
        long double tmp_min;
        long double tmp_vl;
        long double tmp_xlk;
        int tmp_eq;
        long double pwrd;
        int ent=0;
        int psifia_for_auto=0;
        int show_vcc(long double entered,long double mynmb,int preci,int v_log,int st_th,int sxli);
    protected:

    private:
};

#endif // VCC_PART_ONE_H
