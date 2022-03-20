/* Program money converter Robbins version o */ 
#include<iostream> //Required for cin, cout, endl. 
#include<stdlib.h> //NEW calling on use of toupper() function 
/* toupper() converts entered character to capital so switch *below will work whether you enter for example: an 'E' or 'e‘*/
 using namespace std;
/* To get currency dollars to country letters are entered for currency name * 
E => Euros of Italy 
P => Pesos OF Mexicao 
S => British pound */
int main()
{
double dollars, equivalentCurr;
char currencyCode;
const double ECONVERSION(0.8795), PCONVERSION(18.95), SCONVERSION(0.6529),ICONVERSION(14342.35),ACONVERSION(455.99),CCONVERSION(803.51); // Prompt and get user input from the keyboard.
cout << "Enter dollar amount to be converted" << endl;
cin >> dollars; // add while (dollars > 0)
//{ //WHILE BLOCK be sure to change indentation
cout << "Enter code for the currency\n" << "E =>for Italian Euros\nP=>Mexican Pesos\nS=British pound sterling\n";
cin >> currencyCode;
while(dollars>0)
{
switch (toupper(currencyCode))
{
case 'E':
cout << "Converting "<<dollars<<" to Italian Euros,"; //currencycode ?
equivalentCurr = dollars * ECONVERSION; // break;
cout<<"and converted amount is :"<<equivalentCurr<<endl;
dollars=dollars-10;
break;

case 'P': 
cout << "Converting "<<dollars<<" to Mexican Pesos,"; 
equivalentCurr = dollars * PCONVERSION;
cout<<"and converted amount is :"<<equivalentCurr<<endl;
dollars=dollars-10;
break;

case 'S': // cin Dollar 
cout << "Converting dollars to British pound sterlings..\n"; 
equivalentCurr = dollars * SCONVERSION;
cout<<"and converted amount is :"<<equivalentCurr<<endl;
dollars=dollars-10;
break;

case 'I': // cin Dollar 
cout << "Converting dollars to British pound sterlings..\n"; 
equivalentCurr = dollars * ICONVERSION;
cout<<"and converted amount is :"<<equivalentCurr<<endl;
dollars=dollars-10;
break;

case 'A': // cin Dollar 
cout << "Converting"<< dollars<<" to British pound sterlings..\n"; 
equivalentCurr = dollars * ACONVERSION;
cout<<"and converted amount is :"<<equivalentCurr<<endl;
dollars=dollars-10;
break;

case 'C': // cin Dollar 
cout << "Converting"<<dollars<<" to British pound sterlings,"; 
equivalentCurr = dollars * CCONVERSION;
cout<<"and converted amount is :"<<equivalentCurr<<endl;
dollars=dollars-10;
break;

default:
cout << currencyCode << " not supported this week\n "; 
equivalentCurr = dollars;

cout << " Equivalent amount is \n";
cout << equivalentCurr << endl;
}//end switch
}//end of while loop
// cin Dollar
//while (Dollar > 0
  return (0); 
  }// end main
//cout << "Enter ANOTHER dollar amount to be converted ( ZERO ENDS LOOP)" << endl; //cin >> dollars;
// } // end while loop