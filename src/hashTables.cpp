#include <iostream>
#include <map>
#include <string>

int main()
{
    // A hash function is a function where you put in a string (any kind of data) and you get back a number

    std::map<std::string, float> groceries; // hash table

    groceries["Apelsin Jus"] = 0.67; // key + value
    groceries["Mjolk"] = 1.49;
    groceries["Kaffe"] = 1.99;

    std::cout << groceries["Mjolk"] << std::endl; // prints value of key

    std::map<std::string, int> phoneBook;

    phoneBook["Tiffany"] = 123898767;
    phoneBook["Asterix"] = 786547892;
    phoneBook["Obelix"] = 111234543;

    std::cout << phoneBook["Asterix"] << std::endl;

    return 0;
}