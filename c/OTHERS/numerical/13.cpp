#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char arr[1000];
    srand(time(NULL));
    for(int i = 0; i < 1000; i++)
    {
        arr[i] = (rand()%26) + 65;
    }

    cout << "array :\n";
    for(int i = 0; i < 1000; i++)
    {
       cout << arr[i] << "\t";
    }


    return 0;
}
