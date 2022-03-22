// DEMO of finding a minimum or maximum value in a set of values another FOR loop example #include<iostream> //Required for cout prog 4_5!
// DEMO of finding a minimum or maximum value in a set of values another FOR loop example #include<iostream> //Required for cout prog 4_5!
#include <iostream> //required for DBL_MAX
#include <cfloat>   //required for DBL_MAX
using namespace std;
int main()
{                                      //Declare and initialize objects
    const double C(299792.458);        //Kilometers per second
    const int NUMBER_OF_SATELLITES(4); // this is the number of loops for this exercise.
    int satID, minID;
    double tTime, pRange, minPRange(DBL_MAX);
    cout << "Enter id and transit time for " //Prompt user for input << NUMBER_OF_SATELLITES
         << " satellites:\n"
         << "Use whitespace to separate the values(ie: 25 0.00567)\n"
         << "all satellites should be within the lunar orbit of 400,000 km " << endl;
    for (int i = 1; i <= NUMBER_OF_SATELLITES; ++i)
    {
        cin >> satID >> tTime;
        pRange = tTime * C;
        if (pRange < minPRange) //Check for closest satellite
        {
            minPRange = pRange;
            minID = satID;
            //FINDING MIN AND MAX VALUES VERY //IMPORANT PROCESS NOTE TECHNIQUE
        } //end of the nested loop

        cout << "Satellite " << satID << " has a pseudorange of " << pRange << " Km\n"
             << endl;
    } //end of the for loop

    //Output ID of closest satellite
    cout << "\nSatellite " << minID << " is closest to GPS receiver." << endl;
    return 0;
} //end of the main function
