#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "vec3.hpp"


vec3::vec3 (double a, double b, double c)
{
        x = a;
        y = b;
        z = c;
}

vec3
vec3::operator+(const vec3& q) 
const
{
        vec3 C;

        C.x = this->x + q.x;
        C.y = this->y + q.y;
        C.z = this->z + q.z;

        return C;
}

vec3
vec3::operator-(const vec3& q)
const
{
        vec3 C;

        C.x = this->x - q.x;
        C.y = this->y - q.y;
        C.z = this->z - q.z;

        return C;
}

vec3
vec3::operator*(double number)
const
{
        vec3 C;

        C.x = this->x*number;
        C.y = this->y*number;
        C.z = this->z*number;

        return C;
}

double
vec3::operator*(const vec3& q)
const
{
       return (this->x * q.x + this->y * q.y + this->z * q.z);
}

vec3
vec3::cross(const vec3& p, const vec3& q)
{
        vec3 C;

        C.x = p.y*q.z - p.z*q.y;
        C.y = p.z*q.x - p.x*q.z;
        C.z = p.x*q.y - p.y*q.x;

        return C;
}

vec3
vec3::operator/(double number)
const
{
    vec3 C;
    
    C.x = this->x/number;
    C.y = this->y/number;
    C.z = this->z/number;
    
    return C;
}

vec3
vec3::operator-()
const
{
        return vec3(-this->x, -this->y, -this->z);
}

double
vec3::length()
const
{
        return sqrt(this->length2());
}

double
vec3::length2()
const
{
       return (*this)*(*this);
}

double& 
vec3::operator[](size_t number)
{
        if(number == 0)
                return this->x;
        if(number == 1)
                return this->y;
        if(number == 2)
                return this->z;
        else {   
                printf("Error");
                exit(1);
                return x;   
        }
}

double  
vec3::operator[](size_t number)
const
{
        if(number == 0)
                return this->x;
        if(number == 1)
                return this->y;
        if(number == 2)
                return this->z;
        else {   
                printf("Error");
                exit(1);
                return x;   
        }
}

vec3
operator*(double number, vec3 v)
{
        return v*number;
}


