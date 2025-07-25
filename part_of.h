#ifndef PART_OF_H
#define PART_OF_H
#include <string>
#include <math.h>
using namespace std;

class part_of
{
    public:
        part_of();
        virtual ~part_of();
        part_of(const part_of& other);
        part_of& operator=(const part_of& other);
        long double rtv;
        string rvt;
        long double qrt;
        long double get_the_part(long double nbm,int till);

    protected:

    private:
};

#endif // PART_OF_H
