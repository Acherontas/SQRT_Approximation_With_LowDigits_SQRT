#include <iostream>
#include <math.h>
#include <iomanip>
#include "get_the_sum.h"
#include "after_the_dot.h"
#include "part_of.h"
#include <vector>
#include <thread>
#include <bits/stdc++.h>
using namespace std;

    long double mynmb;
    long double rsto[100];int rt=0;long double afair;long double sqrti;
    long double cdis[1000];int cs=0;
    int preci;
    long double fractpart,intpart;
    long double epi_dio;
    long double dia_dio;
    long double section_temp;
    long double section_h;
    long double section_h_epi_dio;
    long double section_h_dia_dio;
    long double dia_dio_dio;
    long double dia_dio_four;
    vector<long double> xl;
    vector<long double> lx;
    vector<long double> xpl;
    vector<long double> fnl_weirdo;
    vector<string> lvec;
    string vecl;
    long double dif;
    long double xlip;
    int st_th;
    int v_log=-1;
    long double ckxlip;
    long double ckep,ckdd,ckddd,ckddf;
    long double cksh,ckshep,ckshdd;
    long double x_dv;

void check_sqrt(long double mani,long double ep,long double dd,long double st,long double sh,long double shep,long double shdd,long double ddd,long double ddf)
{
    fractpart=modf(ep,&intpart);
    ckxlip=intpart*intpart;
    fractpart=modf(dd,&intpart);
    ckep=intpart*intpart;
    fractpart=modf(st,&intpart);
    ckdd=intpart*intpart;
    fractpart=modf(sh,&intpart);
    ckddd=intpart*intpart;
    fractpart=modf(shep,&intpart);
    ckddf=intpart*intpart;
    fractpart=modf(shdd,&intpart);
    cksh=intpart*intpart;
    fractpart=modf(ddd,&intpart);
    ckshep=intpart*intpart;
    fractpart=modf(ddf,&intpart);
    ckshdd=intpart*intpart;
    if(ckxlip<=mani){xl.push_back(ckxlip);lx.push_back(ep);}
    if(ckxlip>mani){
        while(ckxlip>mani){
             ep=ep/10;
             fractpart=modf(ep,&intpart);
             ckxlip=intpart*intpart;
             if(ckxlip<=mani){xl.push_back(ckxlip);lx.push_back(ep);break;}
        }
    }
    if(ckep<=mani){xl.push_back(ckep);lx.push_back(dd);}
    if(ckep>mani){
        while(ckep>mani){
             dd=dd/10;
             fractpart=modf(dd,&intpart);
             ckep=intpart*intpart;
             if(ckep<=mani){xl.push_back(ckep);lx.push_back(dd);break;}
        }
    }
    if(ckdd<=mani){xl.push_back(ckdd);lx.push_back(st);}
    if(ckdd>mani){
       while(ckdd>mani){
             st=st/10;
             fractpart=modf(st,&intpart);
             ckdd=intpart*intpart;
             if(ckdd<=mani){xl.push_back(ckdd);lx.push_back(st);break;}
        }
    }
    if(ckddd<=mani){xl.push_back(ckddd);lx.push_back(sh);}
    if(ckddd>mani){
       while(ckddd>mani){
             sh=sh/10;
             fractpart=modf(sh,&intpart);
             ckddd=intpart*intpart;
             if(ckddd<=mani){xl.push_back(ckddd);lx.push_back(sh);break;}
        }
    }
    if(ckddf<=mani){xl.push_back(ckddf);lx.push_back(shep);}
    if(ckddf>mani){
      while(ckddf>mani){
             shep=shep/10;
             fractpart=modf(shep,&intpart);
             ckddf=intpart*intpart;
             if(ckddf<=mani){xl.push_back(ckddf);lx.push_back(shep);break;}
        }
    }
    if(cksh<=mani){xl.push_back(cksh);lx.push_back(shdd);}
    if(cksh>mani){
        while(cksh>mani){
             shdd=shdd/10;
             fractpart=modf(shdd,&intpart);
             cksh=intpart*intpart;
             if(cksh<=mani){xl.push_back(cksh);lx.push_back(shdd);break;}
        }
    }
    if(ckshep<=mani){xl.push_back(ckshep);lx.push_back(ddd);}
    if(ckshep>mani){
      while(ckshep>mani){
             ddd=dd/10;
             fractpart=modf(ddd,&intpart);
             ckshep=intpart*intpart;
             if(ckshep<=mani){xl.push_back(ckshep);lx.push_back(dd);break;}
        }
    }
    if(ckshdd<=mani){xl.push_back(ckshdd);lx.push_back(ddf);}
    if(ckshdd>mani){
       while(ckshdd>mani){
             ddf=ddf/10;
             fractpart=modf(ddf,&intpart);
             ckshdd=intpart*intpart;
             if(ckshdd<=mani){xl.push_back(ckshdd);lx.push_back(ddf);break;}
        }
    }
}

void show_xl(){
  int xli=0;
  for(auto it=0;it<=xl.size()-1;it++)
  {
    dif=mynmb-xl[it];
    if(v_log==1){
            x_dv=lx[it]*lx[it];
            cout<<  " of " <<std::setprecision(preci)<< lx[it] << " ^2 ::== " <<std::setprecision(preci)<< x_dv << " as intpart " <<std::setprecision(preci)<< xl[it] <<"  diafora " <<std::setprecision(preci) << dif << " from " << std::setprecision(preci) << mynmb <<"\n";
                }
    xpl.push_back(dif);
    //xli+=1;
    //if(xli%2==0){cout<<"\n";}
  }
}

void show_fnl_weirdo(){
    cout<<"\n";
    stable_sort(fnl_weirdo.begin(),fnl_weirdo.end());
    for(auto i=fnl_weirdo.size()-1;i>0;i--){
      cout<<" " << fnl_weirdo[i] << " " ;
    }
   cout<<"\n";
}

void show_xpl(){
  int olp=0;
  stable_sort(xpl.begin(),xpl.end());
  long double mlp;
  for(auto i=0;i<=xpl.size()-1;i++){
     //cout<<xpl[i] <<" ";
     if(xpl[0]+xl[i]==mynmb){
                x_dv=lx[i]*lx[i];
                vecl.clear();
                if(v_log==1){cout<<  " of " <<std::setprecision(preci)<< lx[i] << " ^2 ::== " <<std::setprecision(preci)<< x_dv << " as intpart " <<std::                setprecision(preci)<< xl[i] <<"  diafora " <<std::setprecision(preci) << xpl[0] << " from " << std::setprecision(preci) <<                mynmb <<"\n";
                }
                //cout<<"da value " << std::setprecision(preci)<<lx[i] <<" ^2 " << xl[i] <<" diafora " << xpl[0] <<"\n";
                vecl+=" ";
                vecl+=to_string(lx[i]);
                vecl+=" ^2 ::== ";
                vecl+=to_string(x_dv);
                vecl+=" as intpart ";
                vecl+=to_string(xl[i]);
                vecl+=" diafora ";
                vecl+=to_string(xpl[0]);
                vecl+=" from ";
                vecl+=to_string(mynmb);
                vecl+=" ";
                lvec.push_back(vecl);
                fractpart=modf(lx[i],&intpart);
                fnl_weirdo.push_back(intpart);
                }
     olp+=1;
  }
 cout<<"\n";
}


int sqti(long double mnm,int one,int two){
    after_the_dot *aft=new after_the_dot();
    cout<<"-------------------------------------------------------------------------\n";
    rt=0;
    rsto[rt]=(long double)mnm/(long double)one;
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    section_h_epi_dio=section_h*2;
    section_h_dia_dio=(long double)section_h/(long double)2;
    dia_dio_dio=(long double)dia_dio/2;
    dia_dio_four=(long double)dia_dio/4;
    if(v_log==1){
    cout<<std::setprecision(preci) << mnm << " / " << std::setprecision(preci) << one << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
    rt+=1;
   if(v_log==1){ cout<<"CDIS Start \n";}
    for(int i=1;i<=cs;i++){
        rsto[rt]=(long double)rsto[rt-1]/(long double)cdis[i];
        //da try
        fractpart=modf(rsto[rt],&intpart);
        epi_dio=intpart*2;
        dia_dio=intpart/2;
        section_temp=aft->gen_after_dot(rsto[rt]);
        section_h=(long double)intpart/(long double)section_temp;
        section_h_epi_dio=section_h*2;
        section_h_dia_dio=(long double)section_h/(long double)2;
        dia_dio_dio=(long double)dia_dio/2;
        dia_dio_four=(long double)dia_dio/4;
        if(v_log==1){
        cout<<std::setprecision(preci) << rsto[rt-1] << " / " << std::setprecision(preci) << cdis[i] << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";}
        check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
        rt+=1;
        if(i>cs){break;}
    }
    if(v_log==1){cout<<"CDIS End \n";}
    rsto[rt]=(long double)mnm/(long double)two;
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    section_h_epi_dio=section_h*2;
    section_h_dia_dio=(long double)section_h/(long double)2;
    dia_dio_dio=(long double)dia_dio/2;
    dia_dio_four=(long double)dia_dio/4;
    if(v_log==1){
    cout<<std::setprecision(preci) << mnm << " / " << std::setprecision(preci) << two << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
    rt+=1;
    rsto[rt]=(long double)rsto[rt-1]/(long double)cdis[0];
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    section_h_epi_dio=section_h*2;
    section_h_dia_dio=(long double)section_h/(long double)2;
    dia_dio_dio=(long double)dia_dio/2;
    dia_dio_four=(long double)dia_dio/4;
    if(v_log==1){
    cout<<std::setprecision(preci) << rsto[rt-1] << " / " << std::setprecision(preci) << cdis[0] << " ::== " << std::setprecision(preci) <<rsto[rt] << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
    //for(int i=0;i<=rt-1;i++){
    //  cout<< " @i "<< i << " " << std::setprecision(preci)<<rsto[i] <<"\n";
    //}
    //cout<<"\n";
    if(v_log==1){cout<<"removals \n";}
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    for(int i=0;i<=rt-1;i++){
        if(rsto[i]>rsto[rt]){
                            afair=rsto[i]-rsto[rt];
                            //da try
                            fractpart=modf(afair,&intpart);
                            epi_dio=intpart*2;
                            dia_dio=intpart/2;
                            section_temp=aft->gen_after_dot(afair);
                            section_h=(long double)intpart/(long double)section_temp;
                            section_h_epi_dio=section_h*2;
                            section_h_dia_dio=(long double)section_h/(long double)2;
                            dia_dio_dio=(long double)dia_dio/2;
                            dia_dio_four=(long double)dia_dio/4;
                            if(v_log==1){
                            cout<<std::setprecision(preci) << rsto[i] << " - " << std::setprecision(preci) << rsto[rt] << " ::== " << std::setprecision(preci) <<afair << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
       check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
        }
        if(rsto[i]<rsto[rt]){
                            afair=rsto[rt]-rsto[i];
                            //da try
                            fractpart=modf(afair,&intpart);
                            epi_dio=intpart*2;
                            dia_dio=intpart/2;
                            section_temp=aft->gen_after_dot(afair);
                            section_h=(long double)intpart/(long double)section_temp;
                            section_h_epi_dio=section_h*2;
                            section_h_dia_dio=(long double)section_h/(long double)2;
                            dia_dio_dio=(long double)dia_dio/2;
                            dia_dio_four=(long double)dia_dio/4;
                            if(v_log==1){
                            cout<<std::setprecision(preci) << rsto[rt] << " - " << std::setprecision(preci) << rsto[i] << " ::== " << std::setprecision(preci) <<afair << "\n";
                            cout<< "            ----->  | *2 " << std::setprecision(preci) << epi_dio << "\n";
                            cout<< "            ----->  /2 " << std::setprecision(preci) << dia_dio <<"\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_dio << "\n";
                            cout<< "                 --> " <<std::setprecision(preci)<<dia_dio_four << "\n";
                            cout<< "            ----->  section " << std::setprecision(preci)<<section_h <<"\n";
                            cout<< "                 --> of section *2 " << std::setprecision(preci)<<section_h_epi_dio <<"\n";
                            cout<< "                 --> of section /2 " << std::setprecision(preci)<<section_h_dia_dio <<"\n";
                            cout<<"\n";
                            }
    check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four);
        }
    }
    show_xl();
    show_xpl();
    xl.clear();
    lx.clear();
    xpl.clear();
    cout<<"-------------------------------------------------------------------------\n";
   return 0;
}

int main(int argc,char** argv)
{
    cout<<"voyeristic behaviours and others have fun \n";
    cout<<"ur number ,ur precision , ur sleep time , ur log  \n";
    mynmb=stold(argv[1]);
    preci=stoi(argv[2]);
    st_th=stoi(argv[3]);
    v_log=stoi(argv[4]);
    int ar_one[4]={9,25,34,16};
    int ar_two[4]={9,26,35,17};
    int ar_three[4]={10,25,35,15};
    int ar_four[4]={10,26,36,16};
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
    cout<<"with sqrt of math " <<std::setprecision(preci)<< sqrti <<"\n";
    cout<<"\n";
    cout<<"9 25 |34 16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,34,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"9 |25| 34 |16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,25,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"9 26 |35 17| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,35,17);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"9 |26| 35 |17| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,26,17);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"10 25 |35 15| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,35,15);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"10 |25| 35 |15| " <<std::setprecision(preci)<< sqrti <<"  and main " << std::setprecision(preci)<<mynmb <<"\n";
    sqti(mynmb,25,15);
    cout<<"\n";
    rt=0;
    cout<<"10 26 |36 16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,36,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"10 |26| 36 |16| " <<std::setprecision(preci)<< sqrti <<"  and main " <<std::setprecision(preci)<< mynmb <<"\n";
    sqti(mynmb,26,16);
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    cout<<"\n";
    rt=0;
    cout<<"\n";
    if(v_log==1){
        for(int m=0;m<=lvec.size()-1;m++){
                cout<<std::setprecision(preci)<<lvec[m] <<"\n";
        }
    }
    cout<<"\n";
    cout<<"---------order of near approximation numbers--------\n";
    cout<<"|----------bigger value is the nearest-------------|\n";
    show_fnl_weirdo();
    cout<<"----------------------------------------------------\n";
    long double lt_main;
    long double lt;
    cout<<"\n";
    cout<<"enter a number from above \n";
    cin>>lt_main;
    cout<<"lenght of " <<std::setprecision(preci)<< lt_main <<" " ;
    lt=gti->get_da_number(lt_main,2,preci);
    int k=gti->gt_leng;
    cout<<std::setprecision(preci)<< k <<"\n";
    lt=gti->get_da_number(mynmb,2,preci);
    int l=gti->gt_leng;
    cout<<"lenght of " <<std::setprecision(preci) << mynmb <<  " is " << std::setprecision(preci) << l <<"\n";
    part_of *prt=new part_of();
    long double abqr;
    int psif=1;
    int ps_ask;
    cout<<"default 4 loops enter 4 or more [4 is 3] \n";
    cout<<"suggested value : " << k+1 <<"\n";
    cin>>ps_ask;
    for(;;){
        cout<<"-------------------------------------------------------\n";
        cout<<"times " << psif <<" ";
        prt->get_the_part(lt_main,psif-1,preci);
        abqr=prt->qrt;
        part_of *ptr=new part_of();
        long double baqr;
        ptr->get_the_part(mynmb,psif-1,preci);
        baqr=ptr->qrt;
        cout<<std::setprecision(preci)<<ptr->rtv << " " <<std::setprecision(preci)<< prt->rtv <<"\n";
        cout<<"main " <<std::setprecision(preci)<< baqr << " second " <<std::setprecision(preci)<< abqr <<"\n";
        long double ab,ba;
        ab=baqr*baqr;
        ba=abqr*abqr;
        cout<<"main " <<std::setprecision(preci)<< ab << " second " <<std::setprecision(preci)<< ba <<"\n";
        long double ldb;
        ldb=(long double)baqr/(long double)ba;
        int by_one;
        cout<<"times of " <<std::setprecision(preci)<< ldb <<"\n";
        cout<<"new times of " <<std::setprecision(preci)<< ldb <<"\n";
        long double adb;
        adb=lt_main*ldb;
        cout<<"using " << std::setprecision(preci)<<lt_main << " * " << std::setprecision(preci)<<ldb <<"\n";
        cout<<std::setprecision(preci)<<adb<<" ";
        ptr->get_the_part(adb,3,preci);
        int ad=ptr->all_length;
        int pd=ptr->dot_pos;
        int lap=(ad-1)-pd;
        cout<<" with length of " << ad-1 <<" and dot length "<< pd <<" will move " << lap <<"\n" ;
        long double t_ten=10;
        long double t_rst;
        cout<<"\n";
        cout<<"    -----------------> " << std::setprecision(preci)<<adb<<"\n";
        for(int i=0;i<=lap;i++){
            t_rst=adb*t_ten;
            cout<<"    -----------------> " << std::setprecision(preci)<<t_rst<<"\n";
            t_ten=t_ten*10;
        }
        cout<<"\n";
        psif+=1;
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(psif==ps_ask){break;}
        cout<<"-------------------------------------------------------\n";
    }
    return 0;
}
