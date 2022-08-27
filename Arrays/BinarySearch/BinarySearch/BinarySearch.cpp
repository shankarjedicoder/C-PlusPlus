#include <iostream>

int main()
{
    int a[10],inpValue,seek,mid,start=0,end=9;
    std::cout << "Binary Search\n----------------------------------------------"<<std::endl;
    for (int index = 0; index < 10; index++)
    {
        std::cout << "Enter the value " << index+1 << " :: ";
        std::cin >> inpValue;
        a[index] = inpValue;
    }
    system("cls");
    std::cout << "Enter the value to seek :: ";
    std::cin >> seek;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (seek == a[mid])
        {
            std::cout << "Your value " << seek << " is at position :: " << mid+1<<std::endl;
            return 0;
        }
        else if (seek < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    std::cout << "Not Present";

}
