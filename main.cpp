#include <iostream>

using namespace std;

void priceIncrease(double& price) {
    price *= 1.2;
}

int main()
{
    int number = 10;
    // declaring and using pionters
    int* ptr = &number;

    // Passing pointers to functions
    double price = 100;
    priceIncrease(price);
    cout << price;
   
    
    

    return 0;
}

