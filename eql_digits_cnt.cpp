#include "eql_digits_cnt.h"

eql_digits_cnt::eql_digits_cnt()
{
    //ctor
}

eql_digits_cnt::~eql_digits_cnt()
{
    //dtor
}

eql_digits_cnt::eql_digits_cnt(const eql_digits_cnt& other)
{
    //copy ctor
}

eql_digits_cnt& eql_digits_cnt::operator=(const eql_digits_cnt& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int eql_digits_cnt::fcnt(long double mn,long double da_number,int prc,int logic)
{
    char ck;
    int lk;
    stringstream mnp;
    mnp<<std::setprecision(prc)<<da_number;
    string slk;
    slk.clear();
    slk+=mnp.str();
    int brk=0;
    this->f_cnt=0;
    for(int i=0;i<=slk.size()-1;i++){
      ck=slk.at(i);
      lk=stoi(&ck);
      if(logic==1){
        this->mn_ar[mnarcnt]=lk;
        this->mnarcnt+=1;
      }
      if(logic==0)
      {
       if(lk==this->mn_ar[i]){
             this->f_cnt+=1;
       }
       if(lk!=this->mn_ar[i]){
         brk+=1;
       }
      }
      if(brk==1){break;}
    }
    return 0;
}
