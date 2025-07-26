#include "part_of.h"

part_of::part_of()
{
    //ctor
}

part_of::~part_of()
{
    //dtor
}

part_of::part_of(const part_of& other)
{
    //copy ctor
}

part_of& part_of::operator=(const part_of& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


long double part_of::get_the_part(long double nbm,int till,int prc){
     string sk;
     sk.clear();
     this->rvt.clear();
     stringstream ms;
     ms<<std::setprecision(prc)<<nbm;
     sk+=ms.str();
     char ck; int lk;
     int all_pos;
     int tmp_till;
     tmp_till=till;
     int pd;
     if(till==-1){tmp_till=sk.size()-1;}
     //cout<<"using " << sk << " with " << tmp_till <<"\n";
     for(int i=0;i<=tmp_till;i++){
          ck=sk.at(i);
          if(ck!='.'){
                        lk=stoi(&ck);
                        this->rvt+=to_string(lk);
                     }

          if(till!=-1){
                if(ck=='.'){break;}
          }
          if(till==-1){
              if(ck=='.'){pd=all_pos;}
          }
        all_pos+=1;
     }
     this->rtv=stold(this->rvt);
     this->qrt=sqrt(this->rtv);
     this->all_length=all_pos;
     this->dot_pos=pd;
}
