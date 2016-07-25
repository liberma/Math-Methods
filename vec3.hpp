#ifndef vec3_HPP
# define vec3_HPP
#include <stdlib.h>

class vec3
{
public:
        double x;
        double y;
        double z;

public:
        vec3(double a = 0, double b = 0, double c = 0);

        vec3 operator+(const vec3& q) const;
        vec3 operator-(const vec3& q) const;
        vec3 operator*(double number) const;
        vec3 operator/(double number) const;
        vec3 operator-() const;
        double operator*(const vec3& q) const;
        double& operator[](size_t number);
        double operator[](size_t number) const;
        static vec3 cross(const vec3& p, const vec3& q);
        double length() const;
        double length2() const;
};

vec3 operator*(double number, vec3 v);

#endif

