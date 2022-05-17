#include "food.h"
#include <iostream>

const char * RecommendMeAFood(char firstLetter) {
    if (firstLetter == 'a' || firstLetter == 'A')
    {
        return "apple";
    }
    else if (firstLetter == 'b' || firstLetter == 'B')
    {
        return "banana";
    }
    else
    {
        return "pizza";
    }
}

void GetPizzaRecipe() {
    std::cout << "To make pizza, you need ...";
}