
/*
LAB#9 GROUP#4 03/19/2022 MAHAMUD HASAN

ABSTRACT: The program will convert USD(user input) into indonesian, angolan and chilean currency. The program will
also continue to convert currency until input USD amount goes zero. 

EQUATOIN USED IN THE PROGRAM:
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
double converted_currency,_amountDollar,I_multiflied_factor(14342.35),A_multiflied_factor(455.99), C_multiflid_factor(803.51);
char intended_currency;

//OUTPUT MODIFIER
cout<<fixed<<setw(10)<<setprecision(2);

//USER INPUT SECTION
cout<<"Welcome to currency conversion program. Please put the amount (USD) you want to convert"<<endl;
cin>>_amountDollar;
cout<<"Please provide the first letter of intended currency"<<endl;//Indonesia, angola, Chile
cout<<"For,Indonesian currency\t:I"<<endl;
cout<<"For,Angolan currency \t:A"<<endl;
cout<<"For,Chilean currency \t:C"<<endl;
  cin>>intended_currency;

  while (_amountDollar>0){

    switch (toupper(intended_currency))
    {   
      case 'I':  
      cout<<"new amount is "<<_amountDollar<<" USD";  
      // computation and basic formula section 
      converted_currency = I_multiflied_factor * _amountDollar;
      //Printed output
      cout<<" ,which is converted into indonesian Rupiah: "<<converted_currency<<endl;
      _amountDollar=_amountDollar-10; //decrement rate is set 10.
        break;

    case 'A':
    cout<<"new amount is "<<_amountDollar<<" USD";
    // computation and basic formula section 
    converted_currency = I_multiflied_factor * _amountDollar;
    cout<<" ,which is converted into angolan kwanza: "<<converted_currency<<endl;
     _amountDollar=_amountDollar-20;//decrement rate is set 10.
     break;

     case 'C':
    cout<<"new amount is "<<_amountDollar<<" USD";
    // computation and basic formula section 
    converted_currency = I_multiflied_factor * _amountDollar;
    //Printed output
    cout<<" ,which is converted into chilean peso: "<<converted_currency<<endl;
    _amountDollar=_amountDollar-30;//decrement rate is set 10.
    break;

    default:
    cout<<"The character is wrong"<<endl;
    converted_currency = _amountDollar;
    break;
  }//end of switch block
  
         
    }//end of the main function
   
    
    
    
  




//COMPUTATION- BASIC FORMULAS SECTION
//converted_currency = _amountDollar * _multiflied_factor; 
//PRINTED OUTPUT
    // cout<<"The converted amount is :"<<converted_currency<<endl;
    return 0;
}
/*
Welcome to currency conversion program. Please put the amount (USD) you want to convert
100
Please provide the first letter of intended currency
For,Indonesian currency :I
For,Angolan currency    :A
For,Chilean currency    :C
i
new amount is 100.00 USD ,which is converted into indonesian Rupiah: 1434235.00
new amount is 90.00 USD ,which is converted into indonesian Rupiah: 1290811.50
new amount is 80.00 USD ,which is converted into indonesian Rupiah: 1147388.00
new amount is 70.00 USD ,which is converted into indonesian Rupiah: 1003964.50
new amount is 60.00 USD ,which is converted into indonesian Rupiah: 860541.00
new amount is 50.00 USD ,which is converted into indonesian Rupiah: 717117.50
new amount is 40.00 USD ,which is converted into indonesian Rupiah: 573694.00
new amount is 30.00 USD ,which is converted into indonesian Rupiah: 430270.50
new amount is 20.00 USD ,which is converted into indonesian Rupiah: 286847.00
new amount is 10.00 USD ,which is converted into indonesian Rupiah: 143423.50

Hand calculation:
E.g.for USD to indonesian Rupia,
 converted currency (Rupia) = 14342.35 * 100(USD)= 1434235.00

Welcome to currency conversion program. Please put the amount (USD) you want to convert
260
Please provide the first letter of intended currency
For,Indonesian currency :I
For,Angolan currency    :A
For,Chilean currency    :C
a
new amount is 260.00 USD ,which is converted into angolan kwanza: 3729011.00
new amount is 240.00 USD ,which is converted into angolan kwanza: 3442164.00
new amount is 220.00 USD ,which is converted into angolan kwanza: 3155317.00
new amount is 200.00 USD ,which is converted into angolan kwanza: 2868470.00
new amount is 180.00 USD ,which is converted into angolan kwanza: 2581623.00
new amount is 160.00 USD ,which is converted into angolan kwanza: 2294776.00
new amount is 140.00 USD ,which is converted into angolan kwanza: 2007929.00
new amount is 120.00 USD ,which is converted into angolan kwanza: 1721082.00
new amount is 100.00 USD ,which is converted into angolan kwanza: 1434235.00
new amount is 80.00 USD ,which is converted into angolan kwanza: 1147388.00
new amount is 60.00 USD ,which is converted into angolan kwanza: 860541.00
new amount is 40.00 USD ,which is converted into angolan kwanza: 573694.00
new amount is 20.00 USD ,which is converted into angolan kwanza: 286847.00

Welcome to currency conversion program. Please put the amount (USD) you want to convert
350
Please provide the first letter of intended currency
For,Indonesian currency :I
For,Angolan currency    :A
For,Chilean currency    :C
c
new amount is 350.00 USD ,which is converted into chilean peso: 5019822.50
new amount is 320.00 USD ,which is converted into chilean peso: 4589552.00
new amount is 290.00 USD ,which is converted into chilean peso: 4159281.50
new amount is 260.00 USD ,which is converted into chilean peso: 3729011.00
new amount is 230.00 USD ,which is converted into chilean peso: 3298740.50
new amount is 200.00 USD ,which is converted into chilean peso: 2868470.00
new amount is 170.00 USD ,which is converted into chilean peso: 2438199.50
new amount is 140.00 USD ,which is converted into chilean peso: 2007929.00
new amount is 110.00 USD ,which is converted into chilean peso: 1577658.50
new amount is 80.00 USD ,which is converted into chilean peso: 1147388.00
new amount is 50.00 USD ,which is converted into chilean peso: 717117.50
new amount is 20.00 USD ,which is converted into chilean peso: 286847.00
*/