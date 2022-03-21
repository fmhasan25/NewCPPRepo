/*LAB#9 GRUOP#4 03/20/2022 MAHAMUD HASAN

ABSTRACT: This is a currency conversion program which will convert the amount set by the user in USD. User will select 
the intended currency as an output unit. The program will provide the outputs for a given set of decrement and will
continue until the condition meets. 

Equatoin used in the program:
converted amount = input amount(USD) * conversion multiplying factor

Hand calculation:
E.g.For USD to Indonesian Rupia,
 converted currency (Rupia) = 14342.35 * 100(USD)= 1434235.00
*/

/* Program money converter Robbins version o */
#include <iostream> //Required for cin, cout, endl.
#include <stdlib.h> //NEW calling on use of toupper() function
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
  const double ECONVERSION(0.8795), PCONVERSION(18.95), SCONVERSION(0.6529), ICONVERSION(14342.35), ACONVERSION(455.99), CCONVERSION(803.51); // Prompt and get user input from the keyboard.
  cout << "Enter dollar amount to be converted" << endl;
  cin >> dollars; // add while (dollars > 0)
  //{ //WHILE BLOCK be sure to change indentation
  cout << "Enter code for the currency\n"
       << "E =>\tItalian Euros\nP =>\tMexican Pesos\nS =>\tBritish pound sterling\nI =>\tIndonesian rupiah\nA =>\tAngolan kwanza\nC =>\tChilean peso" << endl;

  cin >> currencyCode;

  while (dollars > 0)
  {
    switch (toupper(currencyCode))
    {
    case 'E':
      cout << "Converting " << dollars << " USD into Italian Euros,"; //currencycode ?
      equivalentCurr = dollars * ECONVERSION;                   // break;
      cout << "and converted amount is :" << equivalentCurr <<" euro."<< endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'P':
      cout << "Converting " << dollars << " USD into Mexican Pesos,";
      equivalentCurr = dollars * PCONVERSION;
      cout << "and converted amount is :" << equivalentCurr <<" peso."<< endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'S': // cin Dollar
      cout << "Converting " << dollars << " USD into British pound sterlings,";
      equivalentCurr = dollars * SCONVERSION;
      cout << "and converted amount is :" << equivalentCurr <<" pound."<< endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'I': // cin Dollar
      cout << "Converting " << dollars << " USD  into Indonesian rupiah,";
      equivalentCurr = dollars * ICONVERSION;
      cout << "and converted amount is :" << equivalentCurr <<" rupiah."<<endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'A': // cin Dollar
      cout << "Converting " << dollars << " USD into Angloan kwanza,";
      equivalentCurr = dollars * ACONVERSION;
      cout << "and converted amount is :" << equivalentCurr <<" kwanza."<< endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'C': // cin Dollar
      cout << "Converting " << dollars << " USD into Chilean peso,";
      equivalentCurr = dollars * CCONVERSION;
      cout << "and converted amount is :" << equivalentCurr <<" peso"<< endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    default:
      cout << currencyCode << " not supported this week\n ";
      equivalentCurr = dollars;

      cout << " Equivalent amount is \n";
      cout << equivalentCurr << endl;
    } //end switch
  }   //end of while loop
  return (0);
} // end main
