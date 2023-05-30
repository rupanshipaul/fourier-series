#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Define the period of the square wave
const double T = 2*M_PI;
// Function to calculate the fourier coefficient 
double fourierCoefficient(int n)
{
    if (n ==0 ) {
        return 0.5;
    }
    else if (n % 2 ==0){
      return 0;
    }
    else {
        return(1.0 / n) * sin(n*T/2) ;
    }
}
int main()
{
    // Number of fourier coefficient to calculate
    const int numCoefficients = 10;
    //Calculate and display the fourier coefficients
    for (int i = 0; i < numCoefficients ; ++i){
        double coefficient = fourierCoefficient(i);
        cout<<"Coefficient "<<i<<":"<< coefficient <<endl;
    }
return 0;
}

