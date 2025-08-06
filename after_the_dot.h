#ifndef AFTER_THE_DOT_H
#define AFTER_THE_DOT_H
#include <string.h>
#include <iostream>
using namespace std;

class after_the_dot
{
    public:
        after_the_dot();
        virtual ~after_the_dot();
        after_the_dot(const after_the_dot& other);
        after_the_dot& operator=(const after_the_dot& other);
        string ml;
        string nl;
        char cr;
        int lr=-1;
        int ps=0;
        int tzi=0;
        int mv=0;
        int endmv=2;
        int stofz=0;
        int posi=0;
        long double lde;
        long double gen_after_dot(long double mnmb);
    protected:

    private:
};

#endif // AFTER_THE_DOT_H
