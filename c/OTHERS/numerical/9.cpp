#include <iostream>

using namespace std;

void find_intersection(int arr1[], int arr2[], int n1, int n2)
{
    cout << "\nIntersection : ";
    for(int i = 0; i<n1; i++)
    {
        for(int j = 0; j<n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << "\t";
            }
        }
    }
    cout << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter number of element of 1st array : ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of 1st array : ";
    for(int i = 0; i< n1;i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter number of element of 2nd array : ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of 2nd array : ";
    for(int i = 0; i< n2;i++)
    {
        cin >> arr2[i];
    }

    find_intersection(arr1,arr2,n1,n2);

    return 0;
}
