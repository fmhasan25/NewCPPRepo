/*
LAB#6 GROUP#4 03/19/22 MAHAMUD HASAN
ABSTRACT: The program will determine, if a boolean logic is true of false based the three inputs user will provide. 
The user input need to be bollean, which is either 0 or 1.

Logic used in the program
!( A&&B&&!C) and ( A||B) &&C

*/

//Preprocessor directives: Required for including the libraries in the program
#include <iostream> //Required for including the libraries to the program

using namespace std; //Required for library filenames

int main()
{
    //Declaratoin and intialization
    bool _logic,A, B, C;  //input used in the logic
    string  _true(" is true"), _false(" is false"); //decesion of the logic

    //User input section
    cout << "Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0" << endl;
    cout << "Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false" << endl;
    cout << "Please provide the value A,B and C respectively" << endl;
    cin >> A >> B >> C;

    //Computation and basic formula section
    _logic= !(A && B && !C) && (( A||B) &&C);

    //Conditional output
    if (_logic== true)
    {
        cout <<"For the provided input A = "<<A<<",B ="<<B<<" & C = "<<C<<",0 0";
        cout << "The logic of (!("<<A<<" && "<<B<<" && "<<!C<<") && (( "<<A<<"||"<<B<<") && "<<C<<")"<<_true<<"."<<endl;
        
    }
    else
    {
        cout <<"For the provided input A = "<<A<<",B ="<<B<<" & C = "<<C<<",";
        cout << " the logic of (!("<<A<<" && "<<B<<" && "<<!C<<") && (( "<<A<<"||"<<B<<") && "<<C<<")"<<_false<<"."<<endl;
    
    }

    cin.get(); //required for whitespace

    return 0;
}

/*
Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
0 0 0
For the provided input A = 0,B =0 & C = 0, the logic of (!(0 && 0 && 1) && (( 0||0) && 0) is false.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
0 0 1
For the provided input A = 0,B =0 & C = 1, the logic of (!(0 && 0 && 0) && (( 0||0) && 1) is false.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
0 1 0
For the provided input A = 0,B =1 & C = 0, the logic of (!(0 && 1 && 1) && (( 0||1) && 0) is false.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
0 1 1
For the provided input A = 0,B =1 & C = 1,0 0The logic of (!(0 && 1 && 0) && (( 0||1) && 1) is true.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
1 0 0
For the provided input A = 1,B =0 & C = 0, the logic of (!(1 && 0 && 1) && (( 1||0) && 0) is false.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
1 0 1
For the provided input A = 1,B =0 & C = 1,0 0The logic of (!(1 && 0 && 0) && (( 1||0) && 1) is true.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
1 1 0
For the provided input A = 1,B =1 & C = 0, the logic of (!(1 && 1 && 1) && (( 1||1) && 0) is false.

Hello, welcome to our boolean logic program. User will input boolean variable A,B & C as 1 or 0
Based on the input program will decide if !( A&&B&&!C) and ( A||B) &&C are true of false
Please provide the value A,B and C respectively
1 1 1
For the provided input A = 1,B =1 & C = 1,0 0The logic of (!(1 && 1 && 0) && (( 1||1) && 1) is true.


*/