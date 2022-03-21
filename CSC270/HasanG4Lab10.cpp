
/*
LAB#10 GROUP#4 03/19/2022 MAHAMUD HASAN

ABSTRACT: The program is designed to calcualte the surface area and volume of a cone for the radius set by the user.
As time changes the program will provide the corresponding values. While loop has been used for time increment and 
the limit.

Equation used in the program:
1. New radius(r) = multiplying factor(k)*initial radius(r_0)* time(t)
2. Surface area = (PI* new radius(r))*[(new radius(r))^2)+(height(h))^2]^1/2
3. Volume = (1/3)* PI*(new radius)^2* height(h)
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
    int sl;

    //USER INPUT SECTION
    cout << "The program will calculate the volume and surface area of a cone for given radius." << endl;
    cout << "Please provide the radius" << endl;
    cin >> initialRadius_r;
    //OUTPUT MODIFIER
    cout << fixed << setw(5) << setprecision(5);
    time_t = 0; //time starts from 0
    sl=0;//required for the serial number in the loop
    cout << "As time changes the radius also increases, hence the area and volume of also increases" << endl;
    cout << "The resultant radius, area and volume are given below in the table - \n"
         << endl;
    cout << "Sl\tt[s]\t\tr(t)[m]\t\tS(r,t)[m^2]\tV(r,t)[m^3]" << endl;

    while (time_t < 5.41)
    {
        newRadius_r_t = mFactor_k * initialRadius_r * time_t;
        surfaceArea_S = PI * newRadius_r_t * sqrt(pow(newRadius_r_t, 2) + pow(height_h, 2));
        volume_V = 0.333 * PI * pow(newRadius_r_t, 2) * height_h;
        sl=sl+1;

        cout <<sl<<"\t"<<time_t << "\t\t" << newRadius_r_t << "\t\t" << surfaceArea_S << "\t\t" << volume_V << endl;
        time_t = time_t + 0.15;
      
    }

    //COMPUTATION AND BASIC FORMULA SECTION

    //PRINTED OUTPUT

    return 0;
}

/*

Hand calculation: 
when t=0.15, radius = 0.15*0.13*0.4=0.0078, surface area = (3.1416 *0.0078)((0.0078)^2+(1.4)^2)^1/4 = 0.034307
volume= (0.333)*3.1416*(0.0078^2)*1.4=0.000089=0.00009(app.)
when t=
Please provide the radius
0.13
The resultant radius, area and volume are given below in the table - 


The program will calculate the volume and surface area of a cone for given radius.
Please provide the radius
0.13
As time changes the radius also increases, hence the area and volume of also increases
The resultant radius, area and volume are given below in the table - 

Sl      t[s]            r(t)[m]         S(r,t)[m^2]     V(r,t)[m^3]
1       0.00000         0.00000         0.00000         0.00000
2       0.15000         0.00780         0.03430         0.00009
3       0.30000         0.01560         0.06861         0.00036
4       0.45000         0.02340         0.10292         0.00080
5       0.60000         0.03120         0.13724         0.00143
6       0.75000         0.03900         0.17157         0.00223
7       0.90000         0.04680         0.20592         0.00321
8       1.05000         0.05460         0.24029         0.00437
9       1.20000         0.06240         0.27468         0.00570
10      1.35000         0.07020         0.30910         0.00722
11      1.50000         0.07800         0.34355         0.00891
12      1.65000         0.08580         0.37802         0.01078
13      1.80000         0.09360         0.41254         0.01283
14      1.95000         0.10140         0.44709         0.01506
15      2.10000         0.10920         0.48168         0.01746
16      2.25000         0.11700         0.51632         0.02005
17      2.40000         0.12480         0.55100         0.02281
18      2.55000         0.13260         0.58573         0.02575
19      2.70000         0.14040         0.62052         0.02887
20      2.85000         0.14820         0.65537         0.03216
21      3.00000         0.15600         0.69028         0.03564
22      3.15000         0.16380         0.72524         0.03929
23      3.30000         0.17160         0.76028         0.04312
24      3.45000         0.17940         0.79538         0.04713
25      3.60000         0.18720         0.83056         0.05132
26      3.75000         0.19500         0.86582         0.05568
27      3.90000         0.20280         0.90115         0.06023
28      4.05000         0.21060         0.93656         0.06495
29      4.20000         0.21840         0.97206         0.06985
30      4.35000         0.22620         1.00764         0.07493
31      4.50000         0.23400         1.04332         0.08019
32      4.65000         0.24180         1.07909         0.08562
33      4.80000         0.24960         1.11496         0.09123
34      4.95000         0.25740         1.15092         0.09702
35      5.10000         0.26520         1.18699         0.10299
36      5.25000         0.27300         1.22316         0.10914
37      5.40000         0.28080         1.25945         0.11547
*/