#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "rvec4.hpp"


rvec4::rvec4 (double a, double b, double c, double d)
{
        t = a;
        x = b;
        y = c;
        z = d;
}

rvec4
rvec4::operator+(const rvec4& q) 
const
{
        rvec4 C;

        C.t = this->t + q.t;
        C.x = this->x + q.x;
        C.y = this->y + q.y;
        C.z = this->z + q.z;

        return C;
}

rvec4
rvec4::operator-(const rvec4& q)
const
{
        rvec4 C;

        C.t = this->t - q.t;
        C.x = this->x - q.x;
        C.y = this->y - q.y;
        C.z = this->z - q.z;

        return C;
}

rvec4
rvec4::operator*(double number)
const
{
        rvec4 C;

        C.t = this->t*number;
        C.x = this->x*number;
        C.y = this->y*number;
        C.z = this->z*number;

        return C;
}

double
rvec4::operator*(const rvec4& q)
const
{
       return (this->t * q.t - (this->x * q.x + this->y * q.y + this->z * q.z));
}

rvec4
rvec4::operator/(double number)
const
{
    rvec4 C;
    
    C.t = this->t/number;
    C.x = this->x/number;
    C.y = this->y/number;
    C.z = this->z/number;
    
    return C;
}

rvec4
rvec4::operator-()
const
{
        return rvec4(-this->t, -this->x, -this->y, -this->z);
}


double
rvec4::length2()
const
{
       return (*this)*(*this);
}

double& 
rvec4::operator[](size_t number)
{
        if(number == 0)
                return this->t;
        if(number == 1)
                return this->x;
        if(number == 2)
                return this->y;
        if(number == 3)
                return this->z;
        else {   
                printf("Error");
                exit(1);
                return x;   
        }
}

double  
rvec4::operator[](size_t number)
const
{
        if(number == 0)
                return this->t;
        if(number == 1)
                return this->x;
        if(number == 2)
                return this->y;
        if(number == 3)
                return this->z;
        else {   
                printf("Error");
                exit(1);
                return x;   
        }
}

rvec4
operator*(double number, rvec4 v)
{
        return v*number;
}



