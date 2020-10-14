#include <iostream>

using namespace std;

void duplicate_finder(int arr[], int n)
{

    for(int i = 0;i<n ; i++)
    {
        int c = 0;
        for(int j = i+1; j<n ;j++)
        {
            if(arr[j] != '\0')
            {
                if(arr[i] == arr[j])
                {
                    c++;
                    arr[j] = '\0';
                }
            }
        }
        if(arr[i] != '\0')
        {
            cout << arr[i] <<" : " << c << " times\n";
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
    duplicate_finder(arr,n);
    return 0;
}
