#include <cstdio>
#include <iostream>

int fiboRecursive(int n)
{
    int f = 0;
    if (n == 1)
    {
        f = 0;
    }
    else if (n==2)
    {
        f = 1;
    }
    else
    {
        f = fiboRecursive(n - 1) + fiboRecursive(n - 2);
    }
    std::cout << n << ": " << f << "\n";
    return f;
}

int fibo(int n)
{
    int firstElement = 0; 
    int secondElement = 1;
    int i = n;
    int f = firstElement + secondElement;

    for(int i=1; i <=n; ++i)
    {
        if (i == 1)
        {
            f = 0;
        }
        else if (i==2)
        {
            f = 1;
        }
        else
        {
            firstElement = secondElement;
            secondElement = f;
            f = firstElement + secondElement;
        }
        
        std::cout << i << ": " << f << std::endl;
    }
    
    return f;
}

int main(){
    int n;
    std::cout << "Input N number of elements for Fibonacci: ";
    std::cin >> n;
    if (n > 0){
        int f = fibo(n);
        //std::cout << n << ": " << f << std::endl;
    }else{
        std::cout << "Error, n must be > 0";
    }
    
    return 0;
    //
}
