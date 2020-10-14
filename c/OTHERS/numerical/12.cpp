#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int arr[500];
    srand(time(NULL));
    for(int i = 0; i < 500; i++)
    {
        arr[i] = (rand()%501) - 249;
    }

    cout << "array :\n";
    for(int i = 0; i < 500; i++)
    {
       cout << arr[i] << "\t";
    }


    return 0;
}
