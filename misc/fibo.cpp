#include <cstdio>
#include <iostream>

int fiboRecursive(int n)
{
    if(n <= 1)
        return n;
    return fiboRecursive(n - 1) + fiboRecursive(n - 2);
}

int fibo(int n, bool print)
{
    int firstElement = 0; 
    int secondElement = 1;
    
    int f = firstElement + secondElement;
    
    if(print)
        std::cout << firstElement << std::endl << secondElement << std::endl;
    
    for(int i=2; i < n; ++i)
    {
        if(print)
            std::cout << f << std::endl;
        
        firstElement = secondElement;
        secondElement = f;
        f = firstElement + secondElement;
    }
    return f;
}

int main(){
    std::cout << fiboRecursive(9) << std::endl;
    std::cout << fibo(9, false) << std::endl;
}
