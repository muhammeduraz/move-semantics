#include <iostream>
#include "Entity.h"
#include "StringData.h"

int main()
{
    //Entity entity(StringData("Entity StringData"));
    Entity entity("Entity Context");
    std::cout << "Entity: ";
    entity.PrintData();

    std::cout << "\n" << std::endl;

    StringData apple("Apple");
    std::cout << "apple: ";
    apple.Print();

    StringData banana("Banana");
    std::cout << "banana: ";
    banana.Print();
    
    std::cout << "\n" << std::endl;

    banana = std::move(apple);
    //banana = (StringData&&)apple;

    std::cout << "apple: ";
    apple.Print();
    std::cout << "banana: ";
    banana.Print();

    std::cout << "\n" << std::endl;

    //std::cin.get();
}