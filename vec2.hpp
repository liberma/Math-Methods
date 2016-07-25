#ifndef vec2_HPP
# define vec2_HPP
#include <stdlib.h>

class vec2
{
public:
        double x;
        double y;

public:
        vec2(double a = 0, double b = 0);

        vec2 operator+(const vec2& q) const;
        vec2 operator-(const vec2& q) const;
        vec2 operator*(double number) const;
        vec2 operator/(double number) const;
        vec2 operator-() const;
        double operator*(const vec2& q) const;
        double& operator[](size_t number);
        double operator[](size_t number) const;
        double length() const;
        double length2() const;
};

vec2 operator*(double number, vec2 v);

#endif

