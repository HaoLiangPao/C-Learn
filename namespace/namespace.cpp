#include <iostream>

// Option 1: Include the entire std objects
using namespace std;
// Option 2: Only include the necessary objects requried in this program
using std::cout;
using std::endl;
using std::string;

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