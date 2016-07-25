#ifndef rvec4_HPP
# define rvec4_HPP
#include <stdlib.h>

class rvec4
{
public:
        double t;
        double x;
        double y;
        double z;

public:
        rvec4(double a = 0, double b = 0, double c = 0, double d = 0);

        rvec4 operator+(const rvec4& q) const;
        rvec4 operator-(const rvec4& q) const;
        rvec4 operator*(double number) const;
        rvec4 operator/(double number) const;
        rvec4 operator-() const;
        double operator*(const rvec4& q) const;
        double& operator[](size_t number);
        double operator[](size_t number) const;
        double length2() const;
};

rvec4 operator*(double number, rvec4 v);

#endif


