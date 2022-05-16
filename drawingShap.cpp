#include <iostream>
// Math modules
// #include <math.h>
#include <cmath>



using namespace std;


// Functions


int main()
{
    // Standard outputs
    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;


    // Variables
    string characterName = "John";
    int characterAge;
    characterAge = 56;

    // Data Types
    char grade = 'A';
    string phrase = "abcdef";
    int age = 50;
    float gpa = 2.3;
    double gpa_double = 2.3; // more decimal points than floats
    bool flag = true;
    cout << gpa << endl;
    cout << flag << endl;
    cout << phrase << endl;
    cout << grade << endl;

    // Math Operations
    cout << 10.0 / 3.0 << endl;
    cout << sqrt(10) << endl;
    cout << round(10.4) << endl;
    cout << floor(10.8) << endl;
    cout << fmax(3,10) << endl;

    // Get user input
    // int age_input;
    // cout << "Enter your age:";
    // cin >> age_input;
    // cout << "You are " << age_input << " years old" << endl;
    
    // string name_input;
    // cout << "Enter your name:";
    // getline(cin, name_input);
    // cout << "Hello " << name_input << endl;



    // Array
    int lucklyNums[] = {4, 8, 15, 16, 23, 42};
    lucklyNums[4] = 100;
    cout << lucklyNums[4] << endl;


    // Functions


    return 0;
}