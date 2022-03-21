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
#include<iomanip>//Required for setw(), setprecesion()
using namespace std;
/* To get currency dollars to country letters are entered for currency name * 
E => Euros of Italy 
P => Pesos OF Mexicao 
S => British pound */
int main()
{

  //Declaration and Initialization Section
  double dollars, equivalentCurr;
  char currencyCode;
  const double ECONVERSION(0.8795), PCONVERSION(18.95), SCONVERSION(0.6529), ICONVERSION(14342.35), ACONVERSION(455.99), CCONVERSION(803.51); // Prompt and get user input from the keyboard.

  //User Input Section
  cout << "Enter dollar amount to be converted" << endl;
  cin >> dollars; // add while (dollars > 0)
  //{ //WHILE BLOCK be sure to change indentation
  cout << "Enter code for the currency\n"
       << "E =>\tItalian Euros\nP =>\tMexican Pesos\nS =>\tBritish pound sterling\nI =>\tIndonesian rupiah\nA =>\tAngolan kwanza\nC =>\tChilean peso" << endl;

  cin >> currencyCode;

  //OUTPUT MODIFIER
  cout << fixed << setw(10) << setprecision(2);

  while (dollars > 0)
  {
    switch (toupper(currencyCode))
    {
    case 'E':
      cout << "Converting " << dollars << " USD into Italian Euros,"; //currencycode ?
      //Computation and basic formula section
      equivalentCurr = dollars * ECONVERSION; // break;
      cout << "and converted amount is :" << equivalentCurr << " euro." << endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'P':
      cout << "Converting " << dollars << " USD into Mexican Pesos,";
      //Computation and basic formula section
      equivalentCurr = dollars * PCONVERSION;
      //Printed output
      cout << "and converted amount is :" << equivalentCurr << " peso." << endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'S': // cin Dollar
      cout << "Converting " << dollars << " USD into British pound sterlings,";
      //Computation and basic formula section
      equivalentCurr = dollars * SCONVERSION;
      //Printed output
      cout << "and converted amount is :" << equivalentCurr << " pound." << endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'I': // cin Dollar
      cout << "Converting " << dollars << " USD  into Indonesian rupiah,";
      //Computation and basic formula section
      equivalentCurr = dollars * ICONVERSION;
      //Printed output
      cout << "and converted amount is :" << equivalentCurr << " rupiah." << endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'A': // cin Dollar
      cout << "Converting " << dollars << " USD into Angloan kwanza,";
      //Computation and basic formula section
      equivalentCurr = dollars * ACONVERSION;
      //Printed output
      cout << "and converted amount is :" << equivalentCurr << " kwanza." << endl;
      dollars = dollars - 10; //Decrement rate for each loop
      break;

    case 'C': // cin Dollar
      cout << "Converting " << dollars << " USD into Chilean peso,";
      //Computation and basic formula section
      equivalentCurr = dollars * CCONVERSION;
      //Printed output
      cout << "and converted amount is :" << equivalentCurr << " peso" << endl;
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

/*
 Enter dollar amount to be converted
100
Enter code for the currency
E =>    Italian Euros
P =>    Mexican Pesos
S =>    British pound sterling
I =>    Indonesian rupiah
A =>    Angolan kwanza
C =>    Chilean peso
i
Converting 100.00 USD  into Indonesian rupiah,and converted amount is :1434235.00 rupiah.
Converting 90.00 USD  into Indonesian rupiah,and converted amount is :1290811.50 rupiah.
Converting 80.00 USD  into Indonesian rupiah,and converted amount is :1147388.00 rupiah.
Converting 70.00 USD  into Indonesian rupiah,and converted amount is :1003964.50 rupiah.
Converting 60.00 USD  into Indonesian rupiah,and converted amount is :860541.00 rupiah.
Converting 50.00 USD  into Indonesian rupiah,and converted amount is :717117.50 rupiah.
Converting 40.00 USD  into Indonesian rupiah,and converted amount is :573694.00 rupiah.
Converting 30.00 USD  into Indonesian rupiah,and converted amount is :430270.50 rupiah.
Converting 20.00 USD  into Indonesian rupiah,and converted amount is :286847.00 rupiah.
Converting 10.00 USD  into Indonesian rupiah,and converted amount is :143423.50 rupiah.

Hand calculation:
E.g.For USD to Indonesian Rupia,
 converted currency (Rupia) = 14342.35 * 100(USD)= 1434235.00

 Enter dollar amount to be converted
100
Enter code for the currency
E =>    Italian Euros
P =>    Mexican Pesos
S =>    British pound sterling
I =>    Indonesian rupiah
A =>    Angolan kwanza
C =>    Chilean peso
a
Converting 100.00 USD into Angloan kwanza,and converted amount is :45599.00 kwanza.
Converting 90.00 USD into Angloan kwanza,and converted amount is :41039.10 kwanza.
Converting 80.00 USD into Angloan kwanza,and converted amount is :36479.20 kwanza.
Converting 70.00 USD into Angloan kwanza,and converted amount is :31919.30 kwanza.
Converting 60.00 USD into Angloan kwanza,and converted amount is :27359.40 kwanza.
Converting 50.00 USD into Angloan kwanza,and converted amount is :22799.50 kwanza.
Converting 40.00 USD into Angloan kwanza,and converted amount is :18239.60 kwanza.
Converting 30.00 USD into Angloan kwanza,and converted amount is :13679.70 kwanza.
Converting 20.00 USD into Angloan kwanza,and converted amount is :9119.80 kwanza.
Converting 10.00 USD into Angloan kwanza,and converted amount is :4559.90 kwanza.

Enter dollar amount to be converted
100
Enter code for the currency
E =>    Italian Euros
P =>    Mexican Pesos
S =>    British pound sterling
I =>    Indonesian rupiah
A =>    Angolan kwanza
C =>    Chilean peso
c
Converting 100.00 USD into Chilean peso,and converted amount is :80351.00 peso
Converting 90.00 USD into Chilean peso,and converted amount is :72315.90 peso
Converting 80.00 USD into Chilean peso,and converted amount is :64280.80 peso
Converting 70.00 USD into Chilean peso,and converted amount is :56245.70 peso
Converting 60.00 USD into Chilean peso,and converted amount is :48210.60 peso
Converting 50.00 USD into Chilean peso,and converted amount is :40175.50 peso
Converting 40.00 USD into Chilean peso,and converted amount is :32140.40 peso
Converting 30.00 USD into Chilean peso,and converted amount is :24105.30 peso
Converting 20.00 USD into Chilean peso,and converted amount is :16070.20 peso
Converting 10.00 USD into Chilean peso,and converted amount is :8035.10 peso
*/
