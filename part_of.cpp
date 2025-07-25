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


long double part_of::get_the_part(long double nbm,int till){
     string sk;
     sk.clear();
     this->rvt.clear();
     sk+=to_string(nbm);
     char ck; int lk;
     for(int i=0;i<=till;i++){
          ck=sk.at(i);
          if(ck!='.'){
                        lk=stoi(&ck);
                        this->rvt+=to_string(lk);
                     }
          if(ck=='.'){break;}
     }
     this->rtv=stold(this->rvt);
     this->qrt=sqrt(this->rtv);
}
