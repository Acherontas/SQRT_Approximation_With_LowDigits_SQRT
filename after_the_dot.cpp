#include "after_the_dot.h"

after_the_dot::after_the_dot(){}//ctor
after_the_dot::~after_the_dot(){}//dtor
after_the_dot::after_the_dot(const after_the_dot& other){}//copy ctor
// handle self assignment//assignment operator
after_the_dot& after_the_dot::operator=(const after_the_dot& rhs)
{if (this == &rhs) return *this; return *this;}

long double after_the_dot::gen_after_dot(long double mnmb){
    ml.clear();
    ml+=to_string(mnmb);
    lr=-1;
    ps=0;
    nl.clear();
    tzi=0;
    mv=0;
    endmv=2;
    stofz=0;
    posi=0;
    for(int i=0;i<=ml.size()-1;i++){
       cr=ml.at(i);
       if(mv==endmv){break;}
       if(ps==1){
                    lr=stoi(&cr);
                   // cout<<cr << " with " << lr <<" ";
                    if(lr==0 && stofz==0 && posi==0){
                       // cout<<"found a zero \n";
                        endmv=3;
                        stofz=1;
                    }
                    nl+=to_string(lr);
                    mv+=1;
                    posi=1;
                }
        if(cr=='.'){
                    ps=1;
                  }

    }
   lde=0;
   lde=stoll(nl);
   //if(stofz==1){lde=lde*10;}
   //cout<<"returning from get_after_dot with main " << ml  <<" and value " << lde <<"\n";
   return lde;
}
