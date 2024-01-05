#include<iostream>
using namespace std;
void PrintArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int arr[], int size){
    int left = 0, right = size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
    }
}
int main(){

    int arr[6] = {1,0,1,0,1,0};
    sortOne(arr, 6);
    PrintArray(arr, 6);

    return 0;
}