// Aaron Lin
// Lecture 2
// 09/16/2024

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //variables name
    int number = 1;                     // Integer (Whole Number)
    float floatingNum = 2;              // Floating point Number
    double doubNum = 3;                 // Floating point Number
    char letter = 4;                    // Characters
    bool pool = 1;                      // True
    string strung = "im so cooked";     // String

    cout << "number = " << number << endl;
    cout << "floatingNum = " << floatingNum << endl;
    cout << "doubNum = " << doubNum << endl;
    cout << "letter = " << letter << endl;
    cout << "pool = " << pool << endl;
    cout << "strung = " << strung << endl;
    
    int inches; // variable store the x amount of inches
    inches = 100; // store 100 for inches
    cout << inches << " inch(es) = "; // output of the value of inches
    cout << inches / 12 << " feet (foot) and "; // turn inches into feet
    cout << inches % 12 << " inch(es) " << endl; // remaining inches that can't be turn into feet

    cout << "2 + 3.5 = " << 2 + 3.5 << endl; // solve 2 + 3.5
    cout << "6/4 + 3.9 = " << 6/4 + 3.9 << endl; // solve 6/4 + 3.9
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl; // solve 5.4 * 2 - (13.6 + 18 / 2)
    cout << "\n";

    char letter1 = 'a'; // letter a    
    char letter2 = 'b'; // letter b
    letter1 = 97; // ASCII value
    letter2 = 98; // ASCII value
    cout << "a < b = " << (letter1 < letter2) << endl; // comparing 2 variables
    cout << "so a is less than b" << endl;

    return 0;
}

/*
number = 1
floatingNum = 2
doubNum = 3
letter = ♦
pool = 1
strung = im so cooked
100 inch(es) = 8 feet (foot) and 4 inch(es)
2 + 3.5 = 5.5
6/4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8

a < b = 1
so a is less than b
*/