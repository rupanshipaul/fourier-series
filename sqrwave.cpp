#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
// Function to calculate the fourier series approximation of a square wave
double squareWaveFourier(double x,int numTerms)
{
    double sum = 0.0;
    for(int n = 1;n<= numTerms; ++n){
        double coeff = (n % 2 == 0) ? 0.0 : 4.0 / (n * PI);
        sum += coeff * sin(n * x);
    }
    return sum;
 }
 int main(){
    int numTerms;
    double x;
    cout<<"Enter the number of terms for the Fourier series approximation: ";
    cin>>x;
    double squareWaveValue = squareWaveFourier(x, numTerms);
    cout<< "Approximated value of the square wave at x = "<<x<<" using "<<numTerms<<" terms: "<<squareWaveValue<<endl;
    return 0;
 }