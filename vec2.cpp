#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "vec2.hpp"


vec2::vec2 (double a, double b)
{
        x = a;
        y = b;
}

vec2
vec2::operator+(const vec2& q) 
const
{
        vec2 C;

        C.x = this->x + q.x;
        C.y = this->y + q.y;

        return C;
}

vec2
vec2::operator-(const vec2& q)
const
{
        vec2 C;

        C.x = this->x - q.x;
        C.y = this->y - q.y;

        return C;
}

vec2
vec2::operator*(double number)
const
{
        vec2 C;

        C.x = this->x*number;
        C.y = this->y*number;

        return C;
}

double
vec2::operator*(const vec2& q)
const
{
       return (this->x * q.x + this->y * q.y);
}

vec2
vec2::operator/(double number)
const
{
    vec2 C;
    
    C.x = this->x/number;
    C.y = this->y/number;
    
    return C;
}

vec2
vec2::operator-()
const
{
        return vec2(-this->x, -this->y);
}

double
vec2::length()
const
{
        return sqrt(this->length2());
}

double
vec2::length2()
const
{
       return (*this)*(*this);
}

double& 
vec2::operator[](size_t number)
{
        if(number == 0)
                return this->x;
        if(number == 1)
                return this->y;
        else {   
                printf("Error");
                exit(1);
                return x;   
        }
}

double  
vec2::operator[](size_t number)
const
{
        if(number == 0)
                return this->x;
        if(number == 1)
                return this->y;
        else {   
                printf("Error");
                exit(1);
                return x;   
        }
}

vec2
operator*(double number, vec2 v)
{
        return v*number;
}



