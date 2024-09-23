#include <stdio.h>

int *find(int arr[],int key,int s){
    for (int i=0;i<s;i++)
        {
            printf("%d\n",i);
            if (arr[i]==key){
                printf("%d\n",key);
                return &arr[i];
            }
        }

}

int main(){
    int arr[] = {1,2,3,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",*find(arr,4,s));
    return 0;
}