#include <iostream>

int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1); // each call to fact has its own copy of x, you can't access a different functions copy of x
    }
}

int main()
{
    // using the call stack with a recursive function

    std::cout << fact(3);

    return 0;
}