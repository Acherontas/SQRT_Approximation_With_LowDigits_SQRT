#ifndef GET_THE_SUM_H
#define GET_THE_SUM_H
#include <string.h>
#include <string>
#include <math.h>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;


class get_the_sum
{
    public:
        get_the_sum();
        virtual ~get_the_sum();
        get_the_sum(const get_the_sum& other);
        get_the_sum& operator=(const get_the_sum& other);
        int gt_leng=0;
        long double get_da_number(long double nmbi,int st,int prc);


    protected:

    private:
};

#endif // GET_THE_SUM_H
