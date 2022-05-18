#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> data = {1,2,3};

    data.push_back(12);

    std::cout << data[data.size() - 1] << std::endl;

    data.pop_back();

    std::cout << data[data.size() - 1] << std::endl;


    return 0;
}
