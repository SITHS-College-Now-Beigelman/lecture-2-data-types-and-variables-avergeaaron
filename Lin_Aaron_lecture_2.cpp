// Aaron Lin
// lecture 2
// 09/16/2024

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //variables name
    int integerNum;     // Integer (Whole Number)
    float floatingNum;  // Floating point Number
    double doubNum;     // Floating point Number
    char letters;       // Characters
    bool boolLean;      // True
    string strung;      // String

    int inches; // variable store the x amount of inches
    inches = 100; // store 100 for inches
    cout << inches << " inch(es) = "; // output of the value of inches
    cout << inches / 12 << " feet (foot) and "; // turn inches into feet
    cout << inches % 12 << " inch(es) "; // remaining inches that can't be turn into feet


    return 0;
}