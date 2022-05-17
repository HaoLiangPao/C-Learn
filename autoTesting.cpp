// cl.exe /analyze /EHsc /W4
#include <iostream>

using namespace std;

int main( )
{
    int count = 10;

    cout << count << " ";
    cout << &count << " ";


    int& countRef = count;
    // int and int& -> pass by value and pass by reference
    // http://www.cplusplus.com/doc/tutorial/functions/
    
    cout << countRef << " ";


    auto myAuto = countRef;

    cout << countRef << " ";
    cout << myAuto << " ";

    countRef = 11;
    cout << count << " ";

    myAuto = 12;
    cout << count << endl;
}