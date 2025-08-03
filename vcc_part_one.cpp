#include "vcc_part_one.h"
#include "eql_digits_cnt.h"

vcc_part_one::vcc_part_one(){}//ctor
vcc_part_one::~vcc_part_one(){}//dtor
vcc_part_one::vcc_part_one(const vcc_part_one& other){}//copy ctor
vcc_part_one& vcc_part_one::operator=(const vcc_part_one& rhs)// handle self assignment//assignment operator
{if (this == &rhs) return *this; return *this;}

eql_digits_cnt *eqdgq=new eql_digits_cnt();
int vcc_part_one::show_vcc(long double entered,long double mynmb,int preci,int v_log,int st_th,int sxli){
  eqdgq->fcnt(0,mynmb,preci,1,0);
  bee_tmpf=0;
  xli=0;
 cout<<"----------------- v_cc vector reports -------- \n";
  xlk=0; afr=0; tmp_min=0; tmp_vl=0;
  tmp_xlk=0;tmp_eq=0; pwrd=0; ent=0;
  psifia_for_auto=0;
  stable_sort(v_cc.begin(),v_cc.end());
  cout<<"u enter as approximation " <<std::setprecision(preci)<< entered <<" with main number to find the power " <<std::setprecision(preci)<< mynmb <<" with psifia " << eqdgq->mnarcnt <<"\n";
  for_the_bee.push_back(entered);
  xlk=entered*entered;
  cout<<"as of the entered \n";
  if(mynmb>xlk){afr=mynmb-xlk;}
  if(mynmb<xlk){afr=xlk-mynmb;}
  if(v_log==0){eqdgq->fcnt(0,xlk,preci,0,0);}
  if(v_log==1){eqdgq->fcnt(0,xlk,preci,0,1);}
  cout<< entered << " ^2 ::== " <<std::setprecision(preci)<< xlk <<" ";
  cout<<"              me idia psifia " <<std::setprecision(preci)<< eqdgq->f_cnt << " ";
  cout<<"              me diafora "<<std::setprecision(preci)<< afr <<"\n";
  tmp_min=afr;
  tmp_vl=entered;
  tmp_eq=eqdgq->f_cnt;
  for(auto ito=0;ito<=v_cc.size()-1;ito+=1)
  {
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     xlk=v_cc[ito]*v_cc[ito];
     if(v_log==0){eqdgq->fcnt(0,xlk,preci,0,0);}
     if(v_log==1){eqdgq->fcnt(0,xlk,preci,0,1);}
     if(psifia_for_auto>0){
                            if ((eqdgq->f_cnt)>psifia_for_auto) {
                                 psifia_for_auto=eqdgq->f_cnt;
                                 pwrd=v_cc[ito];
                            }
                          }
     if(psifia_for_auto==0){
                                psifia_for_auto=eqdgq->f_cnt;
                                pwrd=v_cc[ito];
                           }
     if(mynmb>xlk){afr=mynmb-xlk;}
     if(mynmb<xlk){afr=xlk-mynmb;}
     cout<<v_cc[ito]<<" ^2 ::== " <<std::setprecision(preci)<< xlk <<" ";
     cout<<"           me idia psifia " <<std::setprecision(preci)<< eqdgq->f_cnt << " ";
     cout<<"           me diafora "<<std::setprecision(preci)<< afr <<"\n";
     if(afr<tmp_min && afr>=0){tmp_min=afr;tmp_vl=v_cc[ito];tmp_xlk=xlk;tmp_eq=eqdgq->f_cnt;}
  }
  xlk=tmp_vl*tmp_vl;
  cout<<"\n";
  cout<<"\n";
  cout<<"-------------------------Approximation Result Set-----------------------------------------------------\n";
  if(mynmb<=xlk){
  cout<<"\n";
  cout<<"possible approximation < ::== " <<std::setprecision(preci)<< tmp_vl << " ^2 " <<std::setprecision(preci)<< xlk << " ";
  cout<<"              me idia psifia " <<std::setprecision(preci)<< tmp_eq << " ";
  cout<<"              me diafora "<<std::setprecision(preci)<< tmp_min <<"\n";
  for_the_bee.push_back(tmp_vl);
  cout<<"\n";
  }
  if(xlk>=mynmb){
  cout<<"\n";
  cout<<"possible approximation > ::== " <<std::setprecision(preci)<< tmp_vl << " ^2 " <<std::setprecision(preci)<< xlk << " ";
  cout<<"              me idia psifia " <<std::setprecision(preci)<< tmp_eq << " ";
  cout<<"              me diafora "<<std::setprecision(preci)<< tmp_min <<"\n";
  for_the_bee.push_back(tmp_vl);
  cout<<"\n";
  }
  if(mynmb>=xlk){
  cout<<"\n";
  cout<<"possible approximation > ::== " <<std::setprecision(preci)<< tmp_vl << " ^2 " << std::setprecision(preci)<<xlk << " ";
  cout<<"            me idia psifia " <<std::setprecision(preci)<< tmp_eq << " ";
  cout<<"            me diafora "<<std::setprecision(preci)<< tmp_min <<"\n";
  for_the_bee.push_back(tmp_vl);
  cout<<"\n";
  }
  //bee_tmpf=tmp_vl;
  xli=0;
  while(xlk<=mynmb){
     cout<<"\n";
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     tmp_vl=tmp_vl+1;
     xlk=tmp_vl*tmp_vl;
     if(v_log==0){eqdgq->fcnt(0,xlk,preci,0,0);}
     if(v_log==1){eqdgq->fcnt(0,xlk,preci,0,1);}
     if(mynmb>xlk){afr=mynmb-xlk;}
     if(mynmb<xlk){afr=xlk-mynmb;}
     if(mynmb==xlk){afr=0;}
     cout<<"possible approximation of addition ::== " << std::setprecision(preci)<<tmp_vl <<" with ^2  " << std::setprecision(preci)<<xlk <<" ";
     cout<<"            me idia psifia " <<std::setprecision(preci)<< eqdgq->f_cnt << " ";
     cout<<"            me diafora " <<std::setprecision(preci)<< afr <<"\n";
     for_the_bee.push_back(tmp_vl);
     if(xlk>mynmb){ent+=1; bee_tmpf=tmp_vl;
        cout<<"will pass value of "<< bee_tmpf <<"\n"; break;}
     if(xlk==mynmb){ent+=1; bee_tmpf=tmp_vl;
        cout<<"will pass value of "<< bee_tmpf <<"\n"; break;}
     xli+=1;
     if(xli==sxli){break;}
  }
  xli=0;
  if(ent==0){
  cout<<"----removing using main number " <<std::setprecision(preci)<< mynmb <<"\n";
  while(xlk>mynmb){
     cout<<"\n";
     std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
     tmp_vl=tmp_vl-1;
     xlk=tmp_vl*tmp_vl;
     if(v_log==0){eqdgq->fcnt(0,xlk,preci,0,0);}
     if(v_log==1){eqdgq->fcnt(0,xlk,preci,0,1);}
     if(xlk<mynmb){afr=mynmb-xlk;}
     if(xlk>mynmb){afr=xlk-mynmb;}
     if(mynmb==xlk){afr=0;}
     if(isinf(afr)){afr=0;}
     for_the_bee.push_back(tmp_vl);
     cout<<"possible approximation of minus ::== " <<std::setprecision(preci)<< tmp_vl <<" with ^2  " <<std::setprecision(preci)<< xlk <<" ";
     cout<<"            me idia psifia " <<std::setprecision(preci)<< eqdgq->f_cnt << " ";
     cout<<"            me diafora " <<std::setprecision(preci)<< afr <<"\n" ;
     if(xlk<=mynmb){
        bee_tmpf=tmp_vl;
        cout<<"will pass value of "<< bee_tmpf <<"\n";
        break;
        }
        xli+=1;
        if(xli==sxli){break;}
  }
  }
  cout<<"\n";

 return 0;
}


part_of *ptr=new part_of();
part_of *prt=new part_of();
int vcc_part_one::fill_vcc(long double mynmb,long double lt_main,int preci,int v_log,int st_th,int ps_ask,int psif){
    psif=1;
    for(;;){
    abqr=0,baqr=0,ab=0,ba=0;ldb=0;by_one=0;adb=0;ad=0;
    pd=0;lap=0;t_ten=10;t_rst=0;rst_f=0;frc=0,intprt=0;
    xstp=0;mad=0;mpd=0;mlap=0;
    lshow=0;xbrk=0;rts=0;
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        cout<<"-------------------------------------------------------\n";
        cout<<"times " << psif <<" ";
        prt->get_the_part(lt_main,psif-1,preci);
        abqr=prt->qrt;
        ptr->get_the_part(mynmb,psif-1,preci);
        baqr=ptr->qrt;
        cout<<std::setprecision(preci)<<ptr->rtv << " " <<std::setprecision(preci)<< prt->rtv <<"\n";
        cout<<"main " <<std::setprecision(preci)<< baqr << " second " <<std::setprecision(preci)<< abqr <<"\n";
        ab=baqr*baqr;
        ba=abqr*abqr;
        cout<<"main " <<std::setprecision(preci)<< ab << " second " <<std::setprecision(preci)<< ba <<"\n";
        ldb=(long double)baqr/(long double)ba;
        if(v_log==1){cout<<"times of " <<std::setprecision(preci)<< ldb <<"\n";}
        cout<<"new times of " <<std::setprecision(preci)<< ldb <<"\n";
        adb=lt_main*ldb;
        cout<<"using " << std::setprecision(preci)<<lt_main << " * " << std::setprecision(preci)<<ldb <<"\n";
        cout<<std::setprecision(preci)<<adb<<" ";
        ptr->get_the_part(adb,-1,preci);
        ad=ptr->all_length;
        pd=ptr->dot_pos;
        lap=(ad-1)-pd;
        cout<<" with length of " << ad-1 <<" and dot length "<< pd <<" will move " << lap <<"\n" ;
        if(lap>10){cout<<"lap for tens is more than ten will lower it \n";lap=10;}
        cout<<"\n";
        rst_f=adb*adb;
        fractpart=modf(mynmb,&intpart);
        cout<<" trying to reach the main number " << std::setprecision(preci)<<mynmb <<" ";
        ptr->get_the_part(intpart,-1,preci);
        mad=ptr->all_length; //main doesnt have a dot
        mpd=ptr->dot_pos;
        mlap=(ad-1)-pd;
        cout<<" main number intpart lenght " << mad << " \n"; // dot length " << mpd << " after dot " << mlap <<"\n";
        if(v_log==1){cout<<" fract " <<std::setprecision(preci)<<fractpart << " int " << std::setprecision(preci)<<intpart<<"\n";
        cout<<"    -----------------> " << std::setprecision(preci)<<adb<<" ^2 ::== " <<std::setprecision(preci)<< rst_f <<"\n";}
        frc=modf(rst_f,&intprt);
        if(v_log==1){cout<<" temp fract "<< std::setprecision(preci)<< frc << " temp int " << std::setprecision(preci)<<intprt<<"\n";}
        if(rst_f==mynmb)
        {
          cout<<"power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
          xstp=1;
        }
        if(intpart==intprt)
        {
          cout<<"closest power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
          xstp=2;
        }
        cout<<"before loop xstp is " << xstp <<"entering tens with lap of value " << lap <<"\n";
        lshow=0;xbrk=0;rts=0;
        if(xstp==0){
            for(;;){ //int i=0;i<=lap;i++
                std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
                lshow=0;
                t_rst=adb*t_ten;
                rst_f=t_rst*t_rst;
                if(v_log==1){cout<<"using t_rst as "<<t_rst <<"\n";
                cout<<"using for fract " << rst_f <<"\n";}
                frc=modfl(rst_f,&intprt);
                if(rts!=3){
                    if(v_log==1){cout<<"getting the part of " << rst_f <<" :: ";}
                    ptr->get_the_part(intprt,-1,preci);
                    ad=ptr->all_length; //the lenght of intpart of current floatted possibly number
                    pd=ptr->dot_pos;
                    if(v_log==1){cout<<"ad " << ad << " and mad " << mad <<"\n";}
                    rts=ad-mad;
                }
                if(ad>mad){cout<<"have to exit bigger lenght with ad "<< ad <<" and mad "<< mad <<"\n";xbrk=1;}
                if(ad==mad || ad-mad==1 ||  mad-ad==1 || mad==ad)
                //ad-mad==2 || ad-mad==3 || || mad-ad==2 || mad-ad==3
                {
                   cout<<"i push_back a near value of ";
                   frc=modfl(t_rst,&intprt);
                   v_cc.push_back(intprt);
                   cout<<std::setprecision(preci)<<intprt <<"\n";
                   cout<<"stopping with ad " << ad << " and mad of "<< mad <<"\n";
                   lshow=0;
                   xbrk=1;
                }
                else{
                   lshow=1;
                }
                if(v_log==1 || v_log==2){
                cout<<"    -----------------> " << std::setprecision(preci)<<t_rst<<" ^2 ::== " << std::setprecision(preci)<<rst_f<<"\n";
                }
                if(rst_f==mynmb)
                {
                    cout<<"power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
                    cout<<"temp fract "<< std::setprecision(preci)<< frc << " temp int " << std::setprecision(preci)<<intprt<<"\n";
                    xstp=1;
                }
                if(intpart==intprt)
                {
                    cout<<"closest power of 2 for "<< std::setprecision(preci)<<mynmb << " is " << std::setprecision(preci)<<rst_f <<"\n";
                    xstp=2;
                }
                t_ten=t_ten*10;
                if(v_log==1){cout<<"t_ten increased \n";}
                if(xstp!=0){
                            cout<<"breaking with xstp of value " << xstp <<"\n";
                            break;
                           }
                if(xbrk==1){
                            cout<<"breaking with xbrk of value "<< xbrk <<"\n";
                            break;
                            }
            }
        }
        cout<<"\n";
        psif+=1;
        if(v_log==1){cout<<"increasing the digits " << psif <<"\n";}
        std::this_thread::sleep_for(std::chrono::milliseconds(st_th));
        if(psif==ps_ask){break;}
        cout<<"-------------------------------------------------------\n";
    }
   return 0;
}
