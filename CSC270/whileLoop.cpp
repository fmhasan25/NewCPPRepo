
/*
LAB#9 GROUP#4 03/19/2022 MAHAMUD HASAN

ABSTRACT: 

EQUATOIN USED IN THE PROGRAM
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

cout<<"Please provide the currency character."<<endl;


 cout<<"Please provide the first letter of intended currency"<<endl;//Indonesia, angola, Chile
  cin>>intended_currency;

  while (_amountDollar>=0){

switch (toupper(intended_currency))
{   
    case 'I':    
     converted_currency = I_multiflied_factor * _amountDollar;
    cout<<_amountDollar<<" Dollar converting into indonesian Rupiah "<<converted_currency<<endl;
     cout<<"new amount is "<<_amountDollar;
    _amountDollar=_amountDollar-10;
    break;

    case 'A':
    converted_currency = I_multiflied_factor * _amountDollar;
    cout<<_amountDollar<<" Dollar converting into angolan kwanza "<<converted_currency<<endl;
      cout<<"new amount is "<<_amountDollar;
     _amountDollar=_amountDollar-10;
     break;

     case 'C':
    converted_currency = I_multiflied_factor * _amountDollar;
    cout<<_amountDollar<<" Dollar converting into chilean peso "<<converted_currency<<endl;
     cout<<"new amount is "<<_amountDollar;
    _amountDollar=_amountDollar-10;
    break;

    default:
    cout<<"The character is wrong"<<endl;
    converted_currency = _amountDollar;
    break;
  }
  
         
    }
   
    
    
    
  




//COMPUTATION- BASIC FORMULAS SECTION
//converted_currency = _amountDollar * _multiflied_factor; 
//PRINTED OUTPUT
    // cout<<"The converted amount is :"<<converted_currency<<endl;
    return 0;
}
