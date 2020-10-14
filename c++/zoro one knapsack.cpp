#include <iostream>

using namespace std;

struct item_info
{
    float value;
    float weigth;
    float ratio_v_w;
};

void merge_item(item_info arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;


    item_info L[n1], R[n2];


    for (i = 0; i < n1; i++)
    {
        L[i].ratio_v_w = arr[l + i].ratio_v_w;
        L[i].value = arr[l + i].value;
        L[i].weigth = arr[l + i].weigth;

    }

    for (j = 0; j < n2; j++)
    {
        R[j].ratio_v_w = arr[m + 1+ j].ratio_v_w;
        R[j].value = arr[m + 1+ j].value;
        R[j].weigth = arr[m + 1+ j].weigth;
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].ratio_v_w >= R[j].ratio_v_w)
        {

            arr[k].ratio_v_w = L[i].ratio_v_w;
            arr[k].value = L[i].value;
            arr[k].weigth = L[i].weigth;
            i++;
        }
        else if(L[i].ratio_v_w <= R[j].ratio_v_w)
        {

            arr[k].ratio_v_w = R[j].ratio_v_w;
            arr[k].value = R[j].value;
            arr[k].weigth = R[j].weigth;
            j++;
        }
        k++;
    }
    while (i < n1)
    {

        arr[k].ratio_v_w = L[i].ratio_v_w;
        arr[k].value = L[i].value;
        arr[k].weigth = L[i].weigth;
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k].ratio_v_w = R[j].ratio_v_w;
        arr[k].value = R[j].value;
        arr[k].weigth = R[j].weigth;
        j++;
        k++;
    }
}

void mergeSort(item_info arr[], int l, int r)
{
   if (l < r)
   {
      int m = l+(r-l)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge_item(arr, l, m, r);
   }
}


float knapsack_item(item_info arr[],int item, int sack_weight )
{
    mergeSort(arr,0, item-1);

    int j = 0;

    item_info knap_item[item];

    for(int i = 0; i< item; i++)
    {
        knap_item[i].weigth = 0;
        knap_item[i].value = 0;
        knap_item[i].ratio_v_w = 0;
    }

    while(sack_weight>0 && j < item)
    {
        if(arr[j].weigth<=sack_weight)
        {
            knap_item[j].weigth = arr[j].weigth;
            knap_item[j].value = arr[j].value;
            knap_item[j].ratio_v_w = arr[j].ratio_v_w;
            sack_weight -= arr[j].weigth;
        }
        else
        {
            knap_item[j].weigth = sack_weight;
            knap_item[j].value = arr[j].value;
            knap_item[j].ratio_v_w = arr[j].ratio_v_w;
            sack_weight = 0;
        }
        j++;
    }

    float knap_total_value = 0;

    for(int i = 0; i< item; i++)
    {
        if(knap_item[i].value != 0)
        {
            knap_total_value += (knap_item[i].weigth * knap_item[i].ratio_v_w);
        }
    }

    return knap_total_value;
}

int main()
{
    int sack;
    int item;

    cin>> sack >> item;

    item_info arr_item[item];

    for(int i = 0; i<item ; i++)
    {
        cin >> arr_item[i].value;
    }
    for(int i = 0; i<item ; i++)
    {
        cin >> arr_item[i].weigth;
        arr_item[i].ratio_v_w = arr_item[i].value/arr_item[i].weigth;
    }

    cout << knapsack_item(arr_item,item,sack) << endl;

    return 0;
}
