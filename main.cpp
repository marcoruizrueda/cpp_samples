#include <iostream>

/*
Build this with: g++ main.cpp
*/

// Class Number with get and set because of encapsulation
class Number
{
    private:
        int q;
    public:
        Number(int _q)
        {
            q = _q;
        }
        int getNumber()
        {
            return q;
        }

        void setNumber(int _q)
        {
            q = _q;
        }
};

// This is a class with properties of an enumerator
enum class Direction
{
    // Items could start from any int
    LEFT,
    RIGTH 
};

// Not a class and name is not mandatory
enum Direction2
{
    LEFT,
    RIGTH 
};

// Function to shift a number 'positions' times to right or left acording to
// passed 'direction'. number is a pointer containing a value (int)
Number bitShift(Number *number, int positions, Direction direction)
{
    // Pointer for number of class Number
    Number shiftedNumber = *number;
    // Loop to shift one position at a time
    for (int i=0; i< positions; ++i)
    {
        if (direction == Direction::LEFT)
        {
            shiftedNumber.setNumber(shiftedNumber.getNumber() << 1);
        }
        else
        {
            shiftedNumber.setNumber(shiftedNumber.getNumber() >> 1); 
        }   
    }
    // This assigment is setting the shifted value to the pointer 
    *number = shiftedNumber;
    return shiftedNumber;
}

int main()
{
    // 1000
    Number n(8);
    // 0010 = 32
    std::cout << bitShift(&n, 2, Direction::RIGTH).getNumber() << std::endl;
    std::cout << n.getNumber() << std::endl;
}