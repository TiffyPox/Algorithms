#include <iostream>

void bye()
{
    std::cout << "Okay bye!" << std::endl; // step 7 - function gets popped off the stack, return to greet()
}

void greet2(std::string name)
{
    std::cout << "How are you " << name << "?" << std::endl; // step 4 - function gets popped off the stack, return to greet()
}

void greet(std::string name)
{
    std::cout << "Hello " << name << "!" << std::endl; // step 2 - print greeting
    greet2(name); // step 3 - greet2() function call added on top of the stack, print question
    std::cout << "Time to say goodbye..." << std::endl; // step 5 - getting ready to say goodbye
    bye(); // step 6 - bye() function call added on top of the stack

    return; // step 8 - nothing else to be done
}

int main()
{
    std::string name = "Tiffany";

    greet(name); // step 1 - stack created, call greet()

    return 0;
}