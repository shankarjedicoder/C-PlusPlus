#include <iostream>

template<typename T>
T Recursive(T a, T b)
{
    if (a == b)
        return a;
    return a + Recursive(a + 1, b);
}
void main()
{
    int n1, n2;
    std::cout << "Sum of series using recursive function\n---------------------------------"<<std::endl;
    std::cout << "Enter the Start Number :: ";
    std::cin >> n1;
    std::cout << "Enter the End Number :: ";
    std::cin >> n2;
    std::cout<<"The sum of Series :: "<< Recursive<int>(n1, n2);
    system("pause>0");
}