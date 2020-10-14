#include <iostream>

using namespace std;

struct Activitiy_info
{
    int start_time;
    int finish_time;
};



void merge_Activity(Activitiy_info arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;


    Activitiy_info L[n1], R[n2];


    for (i = 0; i < n1; i++)
    {
        L[i].finish_time = arr[l + i].finish_time;
        L[i].start_time = arr[l + i].start_time;
    }

    for (j = 0; j < n2; j++)
    {
        R[j].finish_time = arr[m + 1+ j].finish_time;
        R[j].start_time = arr[m + 1+ j].start_time;
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].finish_time <= R[j].finish_time)
        {

            arr[k].finish_time = L[i].finish_time;
            arr[k].start_time = L[i].start_time;
            i++;
        }
        else if(L[i].finish_time >= R[j].finish_time)
        {

            arr[k].finish_time = R[j].finish_time;
            arr[k].start_time = R[j].start_time;
            j++;
        }
        k++;
    }
    while (i < n1)
    {

        arr[k].finish_time = L[i].finish_time;
        arr[k].start_time = L[i].start_time;
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k].finish_time = R[j].finish_time;
        arr[k].start_time = R[j].start_time;
        j++;
        k++;
    }
}

void mergeSort(Activitiy_info arr[], int l, int r)
{
   if (l < r)
   {
      int m = l+(r-l)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge_Activity(arr, l, m, r);
   }
}


int greedy_Activity(Activitiy_info arr[],int n)
{
    mergeSort(arr,0,n-1);

    int i = 0;
    int max_activity = 0;
    for(int j = 1; j<n; j++ )
    {
        if(arr[j].start_time >= arr[i].finish_time)
        {
            i += 1;
            max_activity += 1;
        }
    }
    return max_activity;
}


int main()
{
    int n;
    cin >> n;
    Activitiy_info activity[n];

    for(int i = 0; i< n; i++)
    {
        cin >> activity[i].start_time;
    }
    for(int i = 0; i< n; i++)
    {
        cin >> activity[i].finish_time;
    }

    cout << greedy_Activity(activity, n) << endl;

    return 0;
}
