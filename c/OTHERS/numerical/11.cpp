#include <iostream>

using namespace std;

void reverse_array(int arr[], int n)
{
    for (int i = 0; i<n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse_array(arr,n);

    cout << "\nArray after reverse : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
