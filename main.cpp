#include <iostream>

int main()
{
    /*
    // auto result = (10 <=> 20) > 0;
    // std::cout << result << std::endl;
    int n1 = 15; //Decimal
    int n2 = 017; //Octal
    int n3 = 0x0f; //Hexadecimal
    int n4 = 0b00001111; //Binary

    std::cout << "Number 1: " << n1 << std::endl;
    std::cout << "Number 2: " << n2 <<std::endl;
    std::cout << "Number 3: " << n3 <<std::endl;
    std::cout << "Number 4: " << n4 <<std::endl;
*/
    // Braced Initializers
    int val {}; //Initializes to 0
    int val1 {10}; //Initializes to 10

    // Can use expression as initializer
    int sum {val + val1};

    std::cout << "Sum: " << sum <<std::endl;

    
   // Functional Initialization
   int apple_count(5);
   int orange_count(15);
   int fruits (apple_count + orange_count);
   std::cout << "fruits: " << fruits <<std::endl;
    

    // Assignment notation
    int bike = 2;
    int truck = 7;
    int vehicles = bike + truck;
    std::cout << "vehicles: " << vehicles << std::endl;
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof variable: " << sizeof(val1) << std::endl;

    // since x is [[maybe_unused]], no warning generated
    [[maybe_unused]] int xx { 5 };
    return 0;

}
