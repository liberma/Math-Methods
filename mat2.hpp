#ifndef mat2_HPP
# define mat2_HPP
#include <stdlib.h>
#include "vec2.hpp"

class mat2
{
public:
        double m[4];

public:
        mat2(double m00 = 0, double m01 = 0, double m10 = 0, double m11 = 0);

        mat2 operator+(const mat2& B) const;
        mat2 operator-(const mat2& B) const;
        mat2 operator*(const mat2& B) const;
        mat2 operator*(double number) const;
        mat2 operator/(double number) const;
        vec2 operator*(const vec2& q) const;
        mat2 T() const;
        mat2 inv() const;
        static mat2 toRotate(double ang);
        double det() const;
};

mat2 operator*(double number, mat2 A);

#endif
 




