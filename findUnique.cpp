#include<iostream>
using namespace std;
int find(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){

    int arr[5] = {3,4,3,4,1};
    int c = find(arr,5);
    cout<<"Unique element is: "<<c<<endl;

    return 0;
}