#include <iostream>
#include <cmath>
using namespace std;


float fOfx(float x)
{
    float value = pow(x,3)- (8*pow(x,2)) + (17*x) - 10;
    return value;
}

float findRoot(float xl, float xu)
{
    float xr, fxl;
    if(fOfx(xl)*fOfx(xu)<0)
    {
        while(fOfx(xr)!=0)
        {
            xr = (xl+xu)/2;
            if(fOfx(xr)*fOfx(xl)<0)
            {
                xu = xr;
            }
            else if(fOfx(xr)*fOfx(xl)>0)
            {
                xl = xr;
            }
        }
    }
    return xr;
}

int main()
{
    float xl, xu, xr;
    cin >> xl >> xu;
    xr = findRoot(xl,xu);
    cout << xr;

    return 0;
}
