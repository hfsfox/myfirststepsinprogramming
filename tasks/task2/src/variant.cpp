#include <iostream>
#include <math.h>

#include "Task.h"

int N, K, result;

/*auto
var24()
{
    double result, x, y;
    std::cout << "  " << std::endl;
    result = x - pow(10, sin(x))+cos(x-y);
    return result;
}*/

auto
var27()
{
    double result, x,y,z,a,b,c,d,f;
    result = (cos(x)*cos(x)/(sin(x))) -x*y*z +((a*x+b*pow(x,2)+c)/(d*pow(x,3)-f));
    return result;
}

auto
var30()
{
    double result, v0, t, a;
    result = (v0*t)+((a*pow(t,2))/2);
    return result;
}

auto
var33()
{
    double m, g, alpha, result;
    result = 3*m*g*cos(alpha);
    return result;
}

auto
var36()
{
    double result,lambda, m1, m2, r;
    /*if(r2)
    {

    }*/
    result = ((m1*m2)*lambda)/ pow(r,2);
    return result;
}

int
main(int argc, char **argv)
{
    N=0;
    K =10;
    std::cin >> N;
   result = ((N*3+K*2)%50)+1;
   std::cout << result << std::endl;
   // }
    //double r;
    //r = task::var24();
   std::cout << "24" << std::endl;
   std::cout << task::var24() << std::endl;
   /*std::cout << "27" << std::endl;
   std::cout << task::var27() << std::endl;
   std::cout << "30" << std::endl;
   std::cout << task::var30() << std::endl;
   std::cout << "33" << std::endl;
   std::cout << task::var33() << std::endl;
   std::cout << "36" << std::endl;
   std::cout << task::var36() << std::endl;*/
   return 0;
}
