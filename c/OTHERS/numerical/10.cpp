#include <iostream>

using namespace std;

void sort_array(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    sort_array(arr,n);
    cout << "Enter kth position : ";
    int k;
    cin >> k;

    if(k>=0 && k<n)
    {
        cout << k <<"th smallest number is : " << arr[k-1];
    }
    else
    {
        cout << k << "th position is not there" << endl;
    }

    return 0;
}
