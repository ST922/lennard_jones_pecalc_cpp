#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Declaring functions
void lennardJonesInput(double& rSigma, double& rEpsilon, double& rLength);
void lennardJonesPotential(double* pSigma, double* pEpsilon, double* pLength, double* pPotential);
void printPotential(double sigma, double epsilon, double length, double potential);

int main()
{
    // Declaring variables
    double sigma, epsilon, length, potential;
    
    // Declaring reference variables
    double& rSigma = sigma;
    double& rEpsilon = epsilon;
    double& rLength = length;
    double& rPotential = potential;

    // Initiating functions
    lennardJonesInput(rSigma, rEpsilon, rLength);
    lennardJonesPotential(&sigma, &epsilon, &length, &potential);
    printPotential(sigma, epsilon, length, potential);

    return 0;
}

void lennardJonesInput(double& rSigma, double& rEpsilon, double& rLength)
{
    // Declaring input
    cout << "Enter a value for sigma: ";
    cin >> rSigma;
    cout << "Enter a value for epsilon: ";
    cin >> rEpsilon;
    cout << "Enter a value for length: ";
    cin >> rLength;
}

void lennardJonesPotential(double* pSigma, double* pEpsilon, double* pLength, double* pPotential)
{
    // Finding Lennard Jones Potential using formula
    *pPotential = (4.00 * (*pEpsilon)) * ((pow((*pSigma / (*pLength)), 12) - (pow((*pSigma / (*pLength)), 6))));
}

void printPotential(double sigma, double epsilon, double length, double potential)
{
    // Using print function to print the results
    cout << endl;
    cout << "sigma: " << fixed << setprecision(1) << sigma << endl;
    cout << "epsilon: " << fixed << setprecision(1) << epsilon << endl;
    cout << "length: " << fixed << setprecision(1) << length << endl;
    cout << "potential: " << fixed << setprecision(1) << potential << endl;
}