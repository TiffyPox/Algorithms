#include <iostream>

// when you write a recursive function, you have to tell it when to stop recursing

int countdown(int i)
{
    std::cout << i << " ";

    if (i <= 1) // base case, function doesn't call itself, prevents infinite loop
    {
        return - 1;
    }
    else
    {
        countdown(i - 1); // recursive case, function calls itself
    }

    return 0;
}

int main()
{
    countdown(10);

    return 0;
}