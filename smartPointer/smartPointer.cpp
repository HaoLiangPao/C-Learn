#include <iostream>
#include <memory>


class smartPointer
{
private:
    /* data */
public:
    smartPointer(){
        std::cout << "Constructor invoked" << std::endl;
    };
    ~smartPointer(){
        std::cout << "Deconstructor invoked" << std::endl;
    };
};

// smartPointer::smartPointer(
//     std::cout << "Constructor invoked" << std::endl;
// )
// {
// }

// smartPointer::~smartPointer()
// {
//     std::cout << "Deconstructor invoked" << std::endl;
// };


int main(int argc, char const *argv[])
{
    // Only constructor will be logged out as the deconstructor will be invoked after the scope finishes
    std::unique_ptr<smartPointer>unique_1 (new smartPointer());
    // std::unique_ptr<smartPointer>unique_1 = std::make_unique<smartPointer>();


    // Both constructor and deconstructor will be invoked as they are within the same scope
    {
        std::shared_ptr<smartPointer> sharPtr1 = std::make_shared<smartPointer>();
        std::cout << "Share count: " << sharPtr1.use_count() << std::endl;
        {
            std::shared_ptr<smartPointer> sharPtr2 = sharPtr1;
            std::cout << "Share count: " << sharPtr1.use_count() << std::endl;
            std::cout << "Share count: " << sharPtr2.use_count() << std::endl;
        }
        std::cout << "Share count: " << sharPtr1.use_count() << std::endl;

        // *** The memory location will be reallocated to others when no pointers are pointing to that location ***



        // TODO: 1.c_str() 2. why share pointer get() and &share pointer is different 3. why standard out does not support smart pointers?
        std::weak_ptr<std::string> weekPtr1;
        // std::cout << "WeekPtr1 is: " << weekPtr1 << std::endl;
        printf("weekPtr1 is: (%p)\n", &weekPtr1);
        {
            std::shared_ptr<std::string> sharPtr1 = std::make_shared<std::string>("abc");
            weekPtr1 = sharPtr1;
            printf("weekPtr1 is: (%p)\n", &weekPtr1);
            printf("SharPtr1 is: (%p)\n", sharPtr1.get());
            printf("SharPtr1 is: (%p)\n", &sharPtr1);
            printf("SharPtr1 is: (%s)\n", sharPtr1->c_str());

        }
        // std::cout << "WeekPtr1 is: " << *weekPtr1 << std::endl;
        printf("weekPtr1 is: (%p)\n", &weekPtr1);

    }


    return 0;
}

