#include <iostream>
// Math modules
// #include <math.h>
#include <cmath>



using namespace std;


// Functions
void sayHi(string name, int age) {
    cout << "Hello " << name << ", a " << age << " year old boy" << endl;
}


int power(int baseNum, int powNum) {
    int result = 1;
    for (size_t i = 0; i < powNum; i++)
    {
        result *= baseNum;
    }

    return result;
}

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
    sayHi("Hao", age);


    // If statement
    bool isMale = true;
    if (isMale)
    {
        cout << "Your are a male" << endl;
    } else {
        cout << "Your are not a male" << endl;
    }


    // Switch statement
    string result = "age ";
    switch (age)
    {
    case 0:
        result += to_string(age);
        break;
    case 1:
        result += to_string(age);
        break;
    default:
        break;
    }


    // While Loop
    int index = 0;
    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }

    // For loop
    int count = 10;
    for (size_t i = 0; i < count; i++)
    {
        cout << i << endl;
    }

    cout << power(2, 10) << endl;

    // 2D array
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    cout << numberGrid << endl;
    cout << numberGrid[0] << endl;
    cout << numberGrid[0][0] << endl;


    // Pointers
    int *pAge = &age;
    float *pGpa = &gpa;
    cout << &age << endl;
    cout << &gpa << endl;
    cout << pAge << endl;
    cout << pGpa << endl;
    cout << *pGpa << endl;
    cout << *pGpa << endl;



    return 0;
}