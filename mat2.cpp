#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "mat2.hpp"

mat2::mat2 (double a, double b, double c, double d)
{
        m[0] = a;
        m[1] = b;
        m[2] = c;
        m[3] = d;
}

mat2
mat2::operator+(const mat2& B)
const
{
        mat2 A;

        A.m[0] = m[0] + B.m[0];
        A.m[1] = m[1] + B.m[1];
        A.m[2] = m[2] + B.m[2];
        A.m[3] = m[3] + B.m[3];

        return A;
}

mat2
mat2::operator-(const mat2& B)
const
{
        mat2 A;

        A.m[0] = m[0] - B.m[0];
        A.m[1] = m[1] - B.m[1];
        A.m[2] = m[2] - B.m[2];
        A.m[3] = m[3] - B.m[3];

       return A;
}

mat2
mat2::operator*(const mat2& B)
const
{
        mat2 A;

        A.m[0] = m[0]*B.m[0] + m[1]*B.m[2];
        A.m[1] = m[0]*B.m[1] + m[1]*B.m[3];
        A.m[2] = m[2]*B.m[0] + m[3]*B.m[2];
        A.m[3] = m[2]*B.m[1] + m[3]*B.m[3];

        return A;
}

mat2
mat2::operator*(double number)
const
{
        mat2 A;

        A.m[0] = number*m[0];
        A.m[1] = number*m[1];
        A.m[2] = number*m[2];
        A.m[3] = number*m[3];
        
        return A;
}

mat2
mat2::operator/(double number)
const
{
        mat2 A;

        return A*(1/number);
}

vec2
mat2::operator*(const vec2& q)
const
{
        return vec2(m[0]*q.x + m[1]*q.y, m[2]*q.x + m[3]*q.y);
}

mat2
mat2::T()
const
{
        mat2 A;
        
        A.m[0] = m[0];
        A.m[1] = m[2];
        A.m[2] = m[1];
        A.m[3] = m[3];

        return A;
}

mat2
mat2::inv()
const
{

        if(this->det() != 0) 
        {
        double mult = 1/det();
        mat2 A;

        A.m[0] = mult*m[3];
        A.m[1] = -mult*m[1];
        A.m[2] = -mult*m[2];
        A.m[3] = mult*m[0];     
  
        return A;
        }
        else 
            return mat2(FP_NAN,FP_NAN,FP_NAN,FP_NAN);
}
                
double
mat2::det()
const
{
        return m[0]*m[3] - m[1]*m[2];
}

mat2
mat2::toRotate(double ang)
{
        mat2 A;

        A.m[0] = cos(ang);
        A.m[1] = -sin(ang);
        A.m[2] = sin(ang);
        A.m[3] = cos(ang);

        return A;
}

mat2
operator* (double number, mat2 A)
{
       return A*number;
} 



