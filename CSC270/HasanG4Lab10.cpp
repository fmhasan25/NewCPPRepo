
/*
LAB#10 GROUP#4 03/19/2022 MAHAMUD HASAN

ABSTRACT: T
*/

//PRE-PROCESSOR DIRECTIVES
#include <iostream> ///Required for including the libraries to the program
#include <cmath>    //Required for pow()
#include <stdlib.h> //Required for toUpper()
#include <iomanip>  //Required for setw(), setprecesion()

using namespace std; //Required for library filenames
const double height_h(1.4), mFactor_k(0.4);

int main()
{
    //DECLARATION AND INTIALIZATION SECTION
    double initialRadius_r, newRadius_r_t, volume_V, surfaceArea_S, time_t;
    string unit_radius("meter"), unit_time("second"), unit_volume("meter^3"), unit_area("meter^2");

    //USER INPUT SECTION
    cout << "The program will calculate the volume and surface area of a cone for given radius." << endl;
    cout << "Please provide the radius" << endl;
    cin >> initialRadius_r;
    time_t = 0;
    cout<<"At t=0, the radius of the cone is "<<initialRadius_r<<". Therefore the volume of the cone is "<<<<endl;
    while (time <= 5.4)
    {
        newRadius_r_t=mFactor_k * initialRadius_r* time_t;


        cout<<"The new radius of the cone is "<<newRadius_r_t<<endl;
    }

    //OUTPUT MODIFIER
    cout << fixed << setw(10) << setprecision(2);
    //COMPUTATION AND BASIC FORMULA SECTION

    //PRINTED OUTPUT

    return 0;
}