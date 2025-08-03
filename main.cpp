#include <iostream>
#include <math.h>
#include <iomanip>
#include "get_the_sum.h"
#include "after_the_dot.h"
#include "part_of.h"
#include <vector>
#include <thread>
#include <bits/stdc++.h>
#include <limits>
#include <cfloat>
#include <cmath>
#include "eql_digits_cnt.h"
#include "bee_cls.h"
#include "check_sqrti.h"
#include "sqti_cls.h"
#include "vcc_part_one.h"
using namespace std;

    long double mynmb;
    long double sqrti;
    long double cdis[1000];int cs=0;
    int preci;
    long double bee_tmpf;
    int st_th;
    int v_log=-1;
    int auto_v=0;
    int bee_x_stp=0;
    int v_bee_log=-1;
    int sxli=0;

eql_digits_cnt *eqdg=new eql_digits_cnt();
int main(int argc,char** argv)
{
    cout<<"voyeristic behaviours and others have fun \n";
    cout<<"ur number ,ur precision , ur sleep time , ur log ,ur automation 0 no 1 auto , ur bee auto 0 for no log 1 for log \n";
    cout<<"the approximation while loops times to run if -1 infinite loop will occur until other equations gets equal \n";
    mynmb=stold(argv[1]);
    preci=stoi(argv[2]);
    st_th=stoi(argv[3]);
    v_log=stoi(argv[4]);
    auto_v=stoi(argv[5]);
    v_bee_log=stoi(argv[6]);
    sxli=stoi(argv[7]);
    cout<<"with main number without precision " << mynmb <<"\n";
    cout<<"with main number "<<std::setprecision(preci) << mynmb <<"\n";
    if(v_log==0){eqdg->fcnt(0,mynmb,preci,1,0);}
    if(v_log==1){eqdg->fcnt(0,mynmb,preci,1,1);}
    cout<<eqdg->mnarcnt<<"\n";
    cout<<" @ CDIS : with main number "<<std::setprecision(preci) << mynmb <<"\n";
    get_the_sum *gti=new get_the_sum();
    cdis[cs]=gti->get_da_number(mynmb,1,preci);
    cout<<"Main cdi " << cdis[cs] <<"\n";
    if(cdis[cs]>9){
       while(cdis[cs]>9){
            cs+=1;
            cdis[cs]=gti->get_da_number(cdis[cs-1],1,preci);
            cout<<"Secondary cdi " << cdis[cs] <<"\n";
            if(cdis[cs]<=9){
                cout<<"Exiting Secondary cdi " << cdis[cs] <<"\n";
                break;
            }
       }
    }
    sqrti=sqrt(mynmb);
    sqti_cls *sqcls=new sqti_cls();
    cout<<"with sqrt of math " <<std::setprecision(preci)<< sqrti <<"\n";
    cout<<"\n";
    cout<<"9 25 |34 16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,34,16,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"9 |25| 34 |16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,25,16,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"9 26 |35 17| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,35,17,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"9 |26| 35 |17| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,26,17,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"10 25 |35 15| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,35,15,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"10 |25| 35 |15| " <<std::setprecision(preci)<< sqrti <<"  and main " << std::setprecision(preci)<<mynmb <<"\n";
    sqcls->sqti(mynmb,preci,25,15,v_log,cs,st_th,cdis);
    cout<<"\n";
    cout<<"10 26 |36 16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,36,16,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"10 |26| 36 |16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqcls->sqti(mynmb,preci,26,16,v_log,cs,st_th,cdis);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    cout<<"\n";
    if(v_log==1){
         sqcls->forward_show_lvec(preci);
    }
    cout<<"\n";
    cout<<"---------order of near approximation numbers--------\n";
    cout<<"|----------bigger value is the nearest-------------|\n";
    sqcls->forward_fnl_weirdo(v_log,auto_v,st_th);
    cout<<"----------------------------------------------------\n";
    long double lt_main;
    long double lt;
    cout<<"\n";
    if(auto_v==1){
                  lt_main=sqcls->get_appro_auto();
                  cout<<"auto value is "<<lt_main <<"\n";
                  std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                 }
    if(auto_v==0){
                  cout<<"enter a number from above \n";
                  cin>>lt_main;
                  }
    cout<<"lenght of " <<std::setprecision(preci)<< lt_main <<" " ;
    lt=gti->get_da_number(lt_main,2,preci);
    int k=gti->gt_leng;
    cout<<std::setprecision(preci)<< k <<"\n";
    lt=gti->get_da_number(mynmb,2,preci);
    int l=gti->gt_leng;
    cout<<"lenght of " <<std::setprecision(preci) << mynmb <<  " is " << std::setprecision(preci) << l <<"\n";
    int psif=1;
    int ps_ask;
    if(auto_v==0){
                  cout<<"default 4 loops enter 4 or more [4 is 3] \n";
                  cout<<"suggested value : " << k+1 <<"\n";
                  cin>>ps_ask;
                 }
    if(auto_v==1){
                  ps_ask=k+1;
                  cout<<"moving with ps_ask " << ps_ask <<"\n";
                  std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                 }
    vcc_part_one *vcpo=new vcc_part_one();
    vcpo->fill_vcc(mynmb,lt_main,preci,v_log,st_th,ps_ask,psif);
    cout<<"\n";
    cout<<"\n";
    cout<<"Approximated with value : "<< lt_main <<"\n";
    vcpo->show_vcc(lt_main,mynmb,preci,v_log,st_th,sxli);
    bee_cls *bee = new bee_cls();
    cout<<"\n";
    cout<<"\n";
    cout<<"------------------------Bee-----------------------------\n";
    for(;;){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(auto_v==0){
            cout<<"enter one of the approximated number from above \n";
            cin>>bee_tmpf;
            cout<<"enter log level 0 or 1\n";
            cin>>v_bee_log;
            cout<<"entering with "<< std::setprecision(preci)<<bee_tmpf <<" and log of bee " << v_bee_log <<"\n";
            bee->bee_man(mynmb,bee_tmpf,preci,v_bee_log);
            bee->bee_show(preci);
            cout<<"enter 1 to exit \n";
            cin>>bee_x_stp;
        }
        if(auto_v==1){
            bee_x_stp=1;
           for(auto it=0;it<=vcpo->for_the_bee.size()-1;it++){
                std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                cout<<"\n";
                cout<<"-------------------Calculation Bee--------------------------------\n";
                bee->bee_man(mynmb,vcpo->for_the_bee[it],preci,v_bee_log);
                bee->bee_show(preci);
                bee->~bee_cls();
                if(bee_x_stp!=1){cout<<"-------------------------------------------------\n";}
                //if(bee->rtr==1){break;}
           }
        }
        if(bee_x_stp==1){break;}
        if(bee_x_stp!=1){
           cout<<"-------------------------------------------------\n";
        }
    }
    return 0;
}
