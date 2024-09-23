#include <stdio.h>

void bubble_sort(int arr[],int l){
    for (int i=0;i<l-1;i++){
        for (int j=0;j<l-i-1;j++)
        {
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int l)
{
    for (int i=0;i<l;i++)
    {
        int m = i;
        for (int j = i+1;j<l;j++)
            if (arr[j]<arr[m])
                m = j;
        int t = arr[m];
        arr[m] = arr[i];
        arr[i] = t;
    }
    
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low-1);

    for (int j = low;j<high;j++){
        if (arr[j]<=pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quick_sort(int arr[], int low, int high){
    if (low<high){
        int pi = partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }

}


int main()
{
    int arr[]={0,6,2,1,0,5,1,6};
    int l = *(&arr+1)-arr;
    //bubble_sort(arr,l);
    //insertion_sort(arr,l);
    quick_sort(arr,0,l-1);
    for (int i=0;i<l;i++) printf("%d\n",arr[i]);
    return 0;
}