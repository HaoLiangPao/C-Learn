#include <iostream>
using namespace std;

namespace namespace1
{
    int age = 25;
    string name = "Hao";
} // namespace namespace1

namespace namespace2
{
    int age = 26;
    string name = "Ken";
} // namespace namespace2

int main() 
{
    cout << namespace1::age << endl;

    cout << namespace2::age << endl;
}