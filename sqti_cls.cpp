#include "sqti_cls.h"
#include "after_the_dot.h"
#include "check_sqrti.h"
sqti_cls::sqti_cls(){}//ctor
sqti_cls::~sqti_cls(){}//dtor
sqti_cls::sqti_cls(const sqti_cls& other){}//copy ctor
// handle self assignment //assignment operator
sqti_cls& sqti_cls::operator=(const sqti_cls& rhs){if (this == &rhs) return *this; return *this;}

after_the_dot *aft=new after_the_dot();
check_sqrti *chsq=new check_sqrti();



long double sqti_cls::get_appro_auto(){
    return chsq->appro_auto;
}

int sqti_cls::forward_show_lvec(int preci){
     for(int i=0;i<=chsq->lvec.size()-1;i++){
         cout<<std::setprecision(preci)<<chsq->lvec[i] <<"\n";
     }
}

int sqti_cls::forward_fnl_weirdo(int vl,int auto_v,int st_th){
   chsq->show_fnl_weirdo(vl,auto_v,st_th);
   return 0;
}
int sqti_cls::sqti(long double mnm,int preci,int one,int two,int v_log,int cs,int st_th,long double cdis[1000]){

    cout<<"-------------------------------------------------------------------------\n";
    rt=0;
    rsto[rt]=(long double)mnm/(long double)one;
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
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
    chsq->check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four,v_log,preci);
    rt+=1;
   if(v_log==1){ cout<<"CDIS Start \n";}
    for(int i=1;i<=cs;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        rsto[rt]=(long double)rsto[rt-1]/(long double)cdis[i];
        //da try
        fractpart=modf(rsto[rt],&intpart);
        epi_dio=intpart*2;
        dia_dio=intpart/2;
        section_temp=aft->gen_after_dot(rsto[rt]);
        section_h=(long double)intpart/(long double)section_temp;
        if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
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
        chsq->check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four,v_log,preci);
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
    if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
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
    chsq->check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four,v_log,preci);
    rt+=1;
    rsto[rt]=(long double)rsto[rt-1]/(long double)cdis[0];
    //da try
    fractpart=modf(rsto[rt],&intpart);
    epi_dio=intpart*2;
    dia_dio=intpart/2;
    section_temp=aft->gen_after_dot(rsto[rt]);
    section_h=(long double)intpart/(long double)section_temp;
    if(v_log==1){
                 cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                 cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
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
    chsq->check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four,v_log,preci);
    //for(int i=0;i<=rt-1;i++){
    //  cout<< " @i "<< i << " " << std::setprecision(preci)<<rsto[i] <<"\n";
    //}
    //cout<<"\n";
    if(v_log==1){cout<<"removals \n";cout<<"reporing rt " << rt <<"\n";}
    std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
    for(int i=0;i<=rt-1;i++){
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(rsto[i]>rsto[rt]){
                            afair=rsto[i]-rsto[rt];
                            //da try
                            fractpart=modf(afair,&intpart);
                            epi_dio=intpart*2;
                            dia_dio=intpart/2;
                            section_temp=aft->gen_after_dot(afair);
                            section_h=(long double)intpart/(long double)section_temp;
                            if(v_log==1){
                                        cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                                        cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
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
       chsq->check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four,v_log,preci);
        }
        if(rsto[i]<rsto[rt]){
                            afair=rsto[rt]-rsto[i];
                            //da try
                            fractpart=modf(afair,&intpart);
                            epi_dio=intpart*2;
                            dia_dio=intpart/2;
                            section_temp=aft->gen_after_dot(afair);
                            section_h=(long double)intpart/(long double)section_temp;
                            if(v_log==1){
                                        cout<<"section_temp "<<std::setprecision(preci)<<section_temp<<"\n";
                                        cout<<"section h " << std::setprecision(preci)<<section_h<<"\n";}
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
    chsq->check_sqrt(mnm,epi_dio,dia_dio,section_temp,section_h,section_h_epi_dio,section_h_dia_dio,dia_dio_dio,dia_dio_four,v_log,preci);
        }
    }
    if(v_log==1){cout<<"ending sqti reporting the results \n";}
    chsq->show_xl(mnm,preci,v_log,st_th);
    chsq->show_xpl(mnm,preci,v_log,st_th);
    chsq->xl.clear();
    chsq->lx.clear();
    chsq->xpl.clear();
    cout<<"-------------------------------------------------------------------------\n";
   return 0;
}


