#include <stdio.h>
#include <math.h>
//double  __cdecl pow(double, double);

double c_area (double r) {
    return pow(r, 2) * 3.1416;
}

int main () {
   double v;
   v=2.4 * c_area( 3.24 ) / 3.0;
   printf("v=%f\n",v);
   return 0;
}
