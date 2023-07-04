#include <iostream>

using namespace std;

int main()
{
    int number = 10;

    // declaring and using pionters
    int* ptr = &number;
    *ptr = 20;
    cout << *ptr;
    
    

    return 0;
}

