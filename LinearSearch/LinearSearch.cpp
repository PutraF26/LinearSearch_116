

#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // number of element in the array
int i; // index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of element in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maxsimum 20 element, \n\n";

    }
    // Accept array element
    cout << "\n-----------------\n";
    cout << " Enter array element \n";
    cout << "------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }

}
void LinearSearch()
{
    char ch;
    int comparison; // nomber of comparison

    do
    {
        //Accep the number to be searched
        cout << "\nEnter the element you want to search; "; // langka 1
        int item;
        cin >> item;

        comparison = 0;
        for (i = 0; i < n; i++) // langka 2 3 4
        {
            comparison++;
            if (arr[i] == item) // langkah 5 a
            {
                cout << "\n" << item << "fount at position " << (i + i) << endl;
                break;
            }
        }

        if (i == n) // langkah 5 b
            cout << "\n" << item << " not fount in the array\n";
        cout << "\nNumber of comparisons: " << comparison << endl;

        cout << "\nContinue search (y/n): ";
        cin >> ch;



    } while ((ch == 'Y') || (ch == 'Y'));
}




int main()
{
    input();
    LinearSearch();
}

