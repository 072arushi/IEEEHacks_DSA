#include <iostream>
using namespace std;
bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {3, 5, 6, 89, 78};
    cout << "enter the element to be found :" << endl;
    int element;
    cin >> element;
    bool found = search(arr, 5, element);
    if (found)
    {
        cout << " element is present " << endl;
    }
    else
    {
        cout << " element is not present " << endl;
    }
}
