
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

const double height_h(1.4), mFactor_k(0.4), PI(3.14116);

int main()
{
    //DECLARATION AND INTIALIZATION SECTION
    double initialRadius_r, newRadius_r_t, volume_V, surfaceArea_S, time_t;
    string unit_radius("meter"), unit_time("second"), unit_volume("meter^3"), unit_area("meter^2");

    //USER INPUT SECTION
    cout << "The program will calculate the volume and surface area of a cone for given radius." << endl;
    cout << "Please provide the radius" << endl;
    cin >> initialRadius_r;
    time_t =0;
    cout << "Time(sec)\tRadius(meter)\tSurface Area(meter^2)\tVolume(meter^3)"<< endl;

    //OUTPUT MODIFIER
cout<<fixed<<setw(5)<<setprecision(3);
    while (time_t < 5.41)
    {
        if(time_t==0)
        {
        volume_V = 0.333 * PI * pow(initialRadius_r, 2) * height_h;
        surfaceArea_S= PI * initialRadius_r * sqrt(pow(initialRadius_r, 2) + pow(height_h, 2));
        cout<<time_t<<"\t\t\t"<<initialRadius_r << "\t\t" << surfaceArea_S << "\t\t" << volume_V << endl;
        time_t = time_t + 0.15;
        }
        else
        {
        newRadius_r_t = mFactor_k * initialRadius_r * time_t;
        surfaceArea_S = PI * newRadius_r_t * sqrt(pow(newRadius_r_t, 2) + pow(height_h, 2));
        volume_V = 0.333 * PI * pow(newRadius_r_t, 2) * height_h;

        cout <<time_t<<"\t\t\t"<<newRadius_r_t << "\t\t" << surfaceArea_S << "\t\t" << volume_V << endl;
        time_t = time_t + 0.15;
        }
    }
    time_t=5.14;
    

   
    //COMPUTATION AND BASIC FORMULA SECTION

    //PRINTED OUTPUT

    return 0;
}