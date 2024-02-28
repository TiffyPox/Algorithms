#include <iostream>

void Bye()
{
    std::cout << "Okay bye!" << std::endl; // step 7 - function gets popped off the stack, return to Greet()
}

void Greet2(std::string name)
{
    std::cout << "How are you " << name << "?" << std::endl; // step 4 - function gets popped off the stack, return to Greet()
}

void Greet(std::string name)
{
    std::cout << "Hello " << name << "!" << std::endl; // step 2 - print greeting
    Greet2(name); // step 3 - Greet2() function added to top of the stack, print question
    std::cout << "Time to say goodbye..." << std::endl; // step 5 - getting ready to say goodbye
    Bye(); // step 6 - Bye() function added to top of the stack

    return; // step 8 - nothing else to be done
}

int main()
{
    std::string name = "Tiffany";

    Greet(name); // step 1 - stack created, call Greet()

    return 0;
}