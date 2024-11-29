#include <iostream>
#include <math.h>

#include "Task.h"

namespace task{

double
var24()
{
    double result, x, y;
    x = 0;
    y = 0;
    std::cout << " x - pow(10, sin(x))+cos(x-y) " << std::endl;
    std::cout << " set x " << std::endl;
    std::cin >> x;
    std::cout << " set y " << std::endl;
    std::cin >> y;
    result = x - pow(10, sin(x))+cos(x-y);
    return result;
}

double
var27()
{
    double result, x,y,z,a,b,c,d,f;
    x = 0;
    y = 0;
    z = 0;
    a = b;

    result = (cos(x)*cos(x)/(sin(x))) -x*y*z +((a*x+b*pow(x,2)+c)/(d*pow(x,3)-f));
    return result;
}

double
var30()
{
    double result, v0, t, a;
    result = (v0*t)+((a*pow(t,2))/2);
    return result;
}

double
var33()
{
    double m, g, alpha, result;
    result = 3*m*g*cos(alpha);
    return result;
}

double
var36()
{
    double result,lambda, m1, m2, r;
    /*if(r2)
    {

    }*/
    result = ((m1*m2)*lambda)/ pow(r,2);
    return result;
}


}; //namespce task
