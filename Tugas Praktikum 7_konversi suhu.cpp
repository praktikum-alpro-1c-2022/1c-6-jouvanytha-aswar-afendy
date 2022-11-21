#include <iostream>

using namespace std;
double c (double );
float c (float );
int c (int );

int main()
{
  cout << "===================================" << endl;
  cout << "Konversi Suhu Fahrenheit ke Celcius" << endl;
  cout << "===================================" << endl;
  cout << endl;


  cout << "207,40 derajat Fahrenheit = " << c (207.40) << " derajat celcius";
  cout << endl;
  cout << "170,30 derajat Fahrenheit = " << c (170.30) << " derajat celcius";
  cout << endl;
  cout << "60 derajat Fahrenheit     = " << c (60) << " derajat celcius";
  cout << endl;

  return 0;
}
double c (double f){
    double c;
    c = (f - 32.0) * (5.0/9.0);
    return c;
}
float c (float f){
    float c;
    c = (f - 32.0) * (5.0/9.0);
    return c;
}
int c (int f){
    int c;
    c = (f - 32.0) * (5.0/9.0);
    return c;
}
