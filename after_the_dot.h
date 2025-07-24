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
        long double gen_after_dot(long double mnmb);
    protected:

    private:
};

#endif // AFTER_THE_DOT_H
