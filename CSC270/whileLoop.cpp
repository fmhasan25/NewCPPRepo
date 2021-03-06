
/*
LAB#9 GROUP#4 03/19/2022 MAHAMUD HASAN

ABSTRACT: The program will convert USD(user input) into Indonesian, Angolan and Chilean currency. The program will
also continue to convert currency until input USD amount goes zero. 

EQUATION USED IN THE PROGRAM:
converted_currency = I_multiflied_factor * _amountDollar

E.g.for USD to indonesian Rupia,
 converted currency (Rupia) = 14342.35 * 100(USD)= 1434235.00
*/

//PRE-PROCESSOR DIRECTIVES
#include<iostream>///Required for including the libraries to the program
#include<cmath> //Required for pow()
#include<stdlib.h>//Required for toUpper()
#include<iomanip>//Required for setw(), setprecesion()

using namespace std; //Required for library filenames

int main(){
//DECLARATION AND INTIALIZATION SECTION
double converted_currency,_amountDollar,I_multiflied_factor(14342.35),A_multiflied_factor(455.99), C_multiflied_factor(803.51);
char intended_currency;

//OUTPUT MODIFIER
cout<<fixed<<setw(10)<<setprecision(2);

//USER INPUT SECTION
cout<<"Welcome to currency conversion program. Please put the amount (USD) you want to convert"<<endl;
cin>>_amountDollar;
cout<<"Please provide the first letter of intended currency"<<endl;//Indonesia, angola, Chile
cout<<"For,Indonesian currency\t:I"<<endl;
cout<<"For, Angolan currency  \t:A"<<endl;
cout<<"For, Chilean currency  \t:C"<<endl;
  cin>>intended_currency;

  while (_amountDollar>0){

    switch (toupper(intended_currency))
    {   
      case 'I':  
      cout<<"New amount is "<<_amountDollar<<" USD";  
      // computation and basic formula section 
      converted_currency = I_multiflied_factor * _amountDollar;
      //Printed output
      cout<<",which is converted into Indonesian Rupiah: "<<converted_currency<<endl;
      _amountDollar=_amountDollar-10; //decrement rate is set 10.
        break;

    case 'A':
    cout<<"New amount is "<<_amountDollar<<" USD";
    // computation and basic formula section 
    converted_currency = A_multiflied_factor * _amountDollar;
    cout<<",which is converted into Angolan kwanza: "<<converted_currency<<endl;
     _amountDollar=_amountDollar-20;//decrement rate is set 20.
     break;

     case 'C':
    cout<<"New amount is "<<_amountDollar<<" USD";
    // computation and basic formula section 
    converted_currency = C_multiflied_factor * _amountDollar;
    //Printed output
    cout<<",which is converted into Chilean peso: "<<converted_currency<<endl;
    _amountDollar=_amountDollar-30;//decrement rate is set 30.
    break;

    default:
    cout<<"The character is wrong"<<endl;
    converted_currency = _amountDollar;
    break;
  }//end of switch block
  
         
    }//end of the while function

  return 0;
}//end of main
/*
Welcome to currency conversion program. Please put the amount (USD) you want to convert
100
Please provide the first letter of intended currency
For,Indonesian currency :I
For, Angolan currency   :A
For, Chilean currency   :C
i
New amount is 100.00 USD,which is converted into Indonesian Rupiah: 1434235.00
New amount is 90.00 USD,which is converted into Indonesian Rupiah: 1290811.50
New amount is 80.00 USD,which is converted into Indonesian Rupiah: 1147388.00
New amount is 70.00 USD,which is converted into Indonesian Rupiah: 1003964.50
New amount is 60.00 USD,which is converted into Indonesian Rupiah: 860541.00
New amount is 50.00 USD,which is converted into Indonesian Rupiah: 717117.50
New amount is 40.00 USD,which is converted into Indonesian Rupiah: 573694.00
New amount is 30.00 USD,which is converted into Indonesian Rupiah: 430270.50
New amount is 20.00 USD,which is converted into Indonesian Rupiah: 286847.00
New amount is 10.00 USD,which is converted into Indonesian Rupiah: 143423.50

Hand calculation:
E.g.For USD to Indonesian Rupia,
 converted currency (Rupia) = 14342.35 * 100(USD)= 1434235.00

Welcome to currency conversion program. Please put the amount (USD) you want to convert
260
Please provide the first letter of intended currency
For,Indonesian currency :I
For, Angolan currency   :A
For, Chilean currency   :C
a
New amount is 260.00 USD,which is converted into Angolan kwanza: 118557.40
New amount is 240.00 USD,which is converted into Angolan kwanza: 109437.60
New amount is 220.00 USD,which is converted into Angolan kwanza: 100317.80
New amount is 200.00 USD,which is converted into Angolan kwanza: 91198.00
New amount is 180.00 USD,which is converted into Angolan kwanza: 82078.20
New amount is 160.00 USD,which is converted into Angolan kwanza: 72958.40
New amount is 140.00 USD,which is converted into Angolan kwanza: 63838.60
New amount is 120.00 USD,which is converted into Angolan kwanza: 54718.80
New amount is 100.00 USD,which is converted into Angolan kwanza: 45599.00
New amount is 80.00 USD,which is converted into Angolan kwanza: 36479.20
New amount is 60.00 USD,which is converted into Angolan kwanza: 27359.40
New amount is 40.00 USD,which is converted into Angolan kwanza: 18239.60
New amount is 20.00 USD,which is converted into Angolan kwanza: 9119.80

Welcome to currency conversion program. Please put the amount (USD) you want to convert
330
Please provide the first letter of intended currency
For,Indonesian currency :I
For, Angolan currency   :A
For, Chilean currency   :C
c
New amount is 330.00 USD,which is converted into Chilean peso: 265158.30
New amount is 300.00 USD,which is converted into Chilean peso: 241053.00
New amount is 270.00 USD,which is converted into Chilean peso: 216947.70
New amount is 240.00 USD,which is converted into Chilean peso: 192842.40
New amount is 210.00 USD,which is converted into Chilean peso: 168737.10
New amount is 180.00 USD,which is converted into Chilean peso: 144631.80
New amount is 150.00 USD,which is converted into Chilean peso: 120526.50
New amount is 120.00 USD,which is converted into Chilean peso: 96421.20
New amount is 90.00 USD,which is converted into Chilean peso: 72315.90
New amount is 60.00 USD,which is converted into Chilean peso: 48210.60
New amount is 30.00 USD,which is converted into Chilean peso: 24105.30
*/