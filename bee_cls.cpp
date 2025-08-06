#include "bee_cls.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

        vector<string> all_s;
        string sal;
        long double drf;
        vector<int> da_psifia;
        int rtr=0;
bee_cls::bee_cls(){}//ctor
bee_cls::~bee_cls(){}//dtor
bee_cls::bee_cls(const bee_cls& other){}//copy ctor
bee_cls& bee_cls::operator=(const bee_cls& rhs)// handle self assignment//assignment operator
{if (this == &rhs) return *this; return *this;}

int bee_cls::bee_show(int lxpre){
 cout<<"--------------------------------------\n";
 cout<<"Psifia,Power,Result of Power,Diafora from Main,Diairesi from Main\n";
 cout<<"--------------------------------------\n";
 for(auto ip=0;ip<=all_s.size()-1;ip++){
    std::this_thread::sleep_for(std::chrono::milliseconds(lxpre));
    cout<<std::setprecision(lxpre)<<all_s[ip] << " \n";
 }
 cout<<"--------------------------------------\n";
    sal.clear();
    all_s.clear();
    rtr=0;
    drf=0;
 return 0;
}

int bee_cls::bee_man(long double fr,long double sc,int rts,int logl){
    rtr=0;lxpre=-1; first=0,second=0,rst=0; f_dit=0;xp=-1;lk=0;
    drf=0;fr_f=0,int_f=0,fr_s=0,int_s=0,fr_rs=0,int_rsl=0; get_dfr=0;
    newd=0,new_int_t=-1,nr_lw=0;myfunc=-1,xpp=1,stop=-1,status=-1,lx=1,tmp_lk=-1,tms=0,go_down=0;
    da_rst=0,da_sq_rst=0,fr_da=0,int_da=0;recheck_them=0; frck=0,intck=0; ddddr=0;
    insr=0;st=0;fbd=0;
    cout<<"first number second number is the qube one dimension and third the precision \n";
    eql_digits_cnt *b_d=new eql_digits_cnt();
    first=fr;
    second=sc;
    lxpre=rts;
    if(logl==0){b_d->fcnt(0,first,lxpre,1,0);}
    if(logl==1){b_d->fcnt(0,first,lxpre,1,1);}
    f_dit=b_d->mnarcnt;
    cout<<"Main Number " <<std::setprecision(lxpre)<<first << " has number of digits " << f_dit <<"\n";
    cout<<"Using Power of " <<std::setprecision(lxpre)<<second << "\n";
    rst=(long double)first/(long double)second;
    fr_f=modfl(first,&int_f);
    fr_s=modfl(second,&int_s);
    fr_rs=modfl(rst,&int_rsl);
    cout<<"\n";
    cout<<"first " << std::setprecision(lxpre) << int_f << " \n";
    cout<<"     doted " <<std::setprecision(lxpre) << fr_f << "\n";
    cout<<"     makes " <<std::setprecision(lxpre)<< first<<"\n";
    cout<<"\n";
    cout<<"second " << std::setprecision(lxpre) <<int_s << " \n";
    cout<<"     doted " <<std::setprecision(lxpre) << fr_s << " \n";
    cout<<"     makes " <<std::setprecision(lxpre) << second <<"\n";
    cout<<"\n";
    cout<<"result " <<std::setprecision(lxpre) << int_rsl << " \n";
    cout<<"     doted " <<std::setprecision(lxpre) << fr_rs << " \n";
    cout<<"     makes " <<std::setprecision(lxpre) << rst <<"\n";
    if(int_s>int_rsl){get_dfr=int_s-int_rsl;}
    if(int_s<int_rsl){get_dfr=int_rsl-int_s;}
    cout<<"\n";
    if(get_dfr==1){cout<<"u can easily almost retrieve the dots digits \n";}
    //getting the last digit of the int_rsl
    string last_digit;
    last_digit.clear();
    last_digit+=to_string(int_rsl);
    for(int i=0;i<=last_digit.size()-1;i++){
            if(last_digit.at(i)!=*"."){xp+=1;}
            if(last_digit.at(i)==*"."){
            mk=last_digit.at(i-1);
            lk=stoi(&mk);
            break;}
            }
            xp+=1;
    std::this_thread::sleep_for(std::chrono::milliseconds(lxpre));
    cout<<"\n";
    cout<<"for the integer string " <<std::setprecision(lxpre)  << last_digit << "\n";
    cout<<"the numbers are " <<std::setprecision(lxpre) << xp <<"\n";
    cout<<"the retrievable integer digit is " <<std::setprecision(lxpre) << lk <<"\n";
    cout<<"\n";
    //lowering
    new_int_t=lk;
    newd=new_int_t+fr_rs;
    cout<<"entering with number of " <<std::setprecision(lxpre) <<newd <<"\n";
    string int_string;string mn_string;
    mn_string.clear();
    stringstream sl_rst;
    sl_rst<<std::setprecision(lxpre)<<newd;
    mn_string+=sl_rst.str();
    //mn_string+=to_string(newd);
    tmp_lk=lk;
    //sometimes the value of power of the second is bigger than the first so we use the second-1;
    //so we recheck
    recheck_them=second*second;
    frck=modfl(recheck_them,&intck);
    cout<<"recheck values of " <<std::setprecision(lxpre)<< second << " and result of " <<std::setprecision(lxpre)<< recheck_them << " with intpart " <<std::setprecision(lxpre)<< intck <<"\n";
    cout<<"\n";
    if(intck>first){
      //if the second power is bigger than the actual first power we lower it;
      if(logl==1){cout<<"recheck power " <<std::setprecision(lxpre)<< second << " of result " << std::setprecision(lxpre)<<recheck_them <<"\n";}
      if(logl==1){cout<<"lowering second to value of " <<std::setprecision(lxpre)<< second <<"\n"; cout<<"\n";}
      second=second-1;
    }
    for(;;){
        drf=0;da_rst=0;da_sq_rst=0;
        std::this_thread::sleep_for(std::chrono::milliseconds(lxpre));
        if(logl==1){cout<<"     ----> using " <<std::setprecision(lxpre) << newd ;
                       //cout<<" with string " << mn_string;
                   }
        nr_lw=(long double)newd/(long double)2;
        tms+=1;
        if(logl==1){cout<<" rst is " <<std::setprecision(lxpre)<< nr_lw <<"\n";}
        da_rst=-1;
        frck=modfl(nr_lw,&intck);
        if(logl==1){cout <<"     ----> using " <<std::setprecision(lxpre)<< nr_lw <<" with intpart " <<std::setprecision(lxpre)<< intck <<" and fract " <<std::setprecision(lxpre)<< frck <<"\n";}
        da_rst=second+frck;
        da_sq_rst=da_rst*da_rst;
        fr_da=modfl(da_sq_rst,&int_da);
        if(logl==1){cout<<"trying to retrieve digits \n";b_d->fcnt(0,int_da,lxpre,0,1);}
        if(logl==0){b_d->fcnt(0,int_da,lxpre,0,0);}
        fbd=b_d->f_cnt;
        if(logl==1){cout<<"digits retrieved "<< fbd <<"\n";}
        if(insr>0 && st==1){
            if(insr>fbd){
                drf=0;
                if(da_sq_rst<first){drf=first-da_sq_rst;
                                    }
                if(da_sq_rst>first){drf=da_sq_rst-first;
                                    }
                ddddr=(long double)first/(long double)da_sq_rst;
                insr=fbd;
                sal.clear();
                sal+=to_string(fbd);
                sal+=" PWR: ";
                stringstream mla;
                mla<<std::setprecision(lxpre)<<da_rst;
                sal+=mla.str();
                sal+=" | ";
                sal+=to_string(da_sq_rst);
                sal+=" ";
                sal+=to_string(drf);
                sal+=" ";
                sal+=to_string(ddddr);
                all_s.push_back(sal);
            }
        }
        if(insr==0 && st==0){
                            drf=0;
                            if(da_sq_rst<first){drf=first-da_sq_rst;
                                                }
                            if(da_sq_rst>first){drf=da_sq_rst-first;
                                                }
                            ddddr=(long double)first/(long double)da_sq_rst;
                            insr=fbd;
                            st=1;
                            sal.clear();
                            sal+=to_string(fbd);
                            sal+=" PWR tw ";
                            stringstream mla;
                            mla<<std::setprecision(lxpre)<<da_rst;
                            sal+=mla.str();
                            //sal+=to_string(da_rst);
                            sal+=" ";
                            sal+=to_string(da_sq_rst);
                            sal+=" ";
                            sal+=to_string(drf);
                            sal+=" ";
                            sal+=to_string(ddddr);
                            all_s.push_back(sal);
                            }
        if(logl==1){
          cout<<"                     with combination da_rst " <<std::setprecision(lxpre)<< da_rst << " sq of rst " <<std::setprecision(lxpre)<< da_sq_rst << "\n";
          cout<<"                     with intpart " << std::setprecision(lxpre)<<int_da << " and other part " <<std::setprecision(lxpre)<<fr_da <<"\n";
        }
        if(int_da==first){
        cout<<"\n";
        cout<<"     ----> using " <<std::setprecision(lxpre)<< newd << " \n";
        cout<<"     ----> with rst " <<std::setprecision(lxpre)<< nr_lw <<" \n";
        cout<<"     ----> the times i run " <<std::setprecision(lxpre)<< tms <<"\n";
        cout<<"     ----> i just go down :" <<std::setprecision(lxpre)<< go_down <<"\n";
        cout<<"     ------------------- found  @--------------------------- \n";
        cout<<"     for number " <<std::setprecision(lxpre) << first <<"  \n";
        cout<<"     power result is  " <<std::setprecision(lxpre) <<da_rst << "\n";
        cout<<"     with result of the power * power  " <<std::setprecision(lxpre)<< da_sq_rst <<"\n";
        cout<<"\n";
                            sal.clear();
                            sal+="**FOUND** ";
                            sal+="using ";
                            sal+=to_string(newd);
                            sal+=" ";
                            sal+=to_string(nr_lw);
                            sal+=" /i run times: ";
                            sal+=to_string(tms);
                            sal+=" i just go down: ";
                            sal+=to_string(go_down);
                            sal+=" / for ur number ";
                            sal+=to_string(first);
                            sal+="  |power result is ";
                            stringstream da_fnl;
                            da_fnl<<std::setprecision(lxpre)<<da_rst;
                            sal+=da_fnl.str();
                            //sal+=to_string(da_rst);
                            sal+="  | ";
                            sal+=to_string(da_sq_rst);
                            all_s.push_back(sal);


        rtr=1;
        }
        int_string.clear();
        int_string+=to_string(nr_lw);
        if(logl==1){
          cout<<"                     the int string is " <<std::setprecision(lxpre)<< int_string <<"\n";
          cout<<"\n";}
        if(lx==2){lx=1;}
        if(mn_string.at(0)=='0' && int_string.at(2)=='0' && new_int_t==0){
           stop=1;
        }
        if(mn_string.at(0)!='0' && int_string.at(2)=='0'){
            go_down+=1;
            if(logl==1){cout<<"from new int t  of " <<std::setprecision(lxpre)<< new_int_t <<" ---> ";}
          new_int_t=tmp_lk-1;
          newd=new_int_t+fr_rs;
          mn_string.clear();
          mn_string+=to_string(newd);
          int_string.clear();
          nr_lw=-1;
          if(logl==1){cout<<std::setprecision(lxpre)<< new_int_t << " with " <<std::setprecision(lxpre)<< newd <<"\n";}
          lx=2;
          if(tmp_lk>=0){tmp_lk=tmp_lk-1;}
        }
        if(lx==1){newd=nr_lw;}
        if(stop==1){break;}
        if(rtr==1){break;}
     }
//bee_show(lxpre);
     return 0;
}
