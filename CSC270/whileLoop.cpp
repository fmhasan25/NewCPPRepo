
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
#include<cmath> 
#include<stdlib.h>
#include<iomanip>

using namespace std; //Required for library filenames

int main(){
//DECLARATION AND INTIALIZATION SECTION
double converted_currency,_amountDollar,I_multiflied_factor(14342.35),A_multiflied_factor(455.99), C_multiflid_factor(803.51);
char intended_currency;

//OUTPUT MODIFIER
cout<<fixed<<setw(10)<<setprecision(2);

//USER INPUT SECTION
cout<<"Welcome to currency conversion program. Please put the amount"<<endl;
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
      converted_currency = I_multiflied_factor * _amountDollar;
      cout<<" ,which is converted into indonesian Rupiah: "<<converted_currency<<endl;
      _amountDollar=_amountDollar-10; //decrement rate is set 10.
        break;

    case 'A':
    cout<<"new amount is "<<_amountDollar<<" USD";
    converted_currency = I_multiflied_factor * _amountDollar;
    cout<<" ,which is converted into angolan kwanza: "<<converted_currency<<endl;
     _amountDollar=_amountDollar-10;//decrement rate is set 10.
     break;

     case 'C':
    cout<<"new amount is "<<_amountDollar<<" USD";
    converted_currency = I_multiflied_factor * _amountDollar;
    cout<<" ,which is converted into chilean peso: "<<converted_currency<<endl;
    _amountDollar=_amountDollar-10;//decrement rate is set 10.
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
