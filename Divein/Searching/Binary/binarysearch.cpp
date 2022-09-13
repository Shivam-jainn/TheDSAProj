#include <iostream>
using namespace std;


int Binarysearch(int key,int *arr,int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
    int mid = start + (end-start)/2;

    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]>key){
        end = mid - 1;
    }else{
        start = mid+1;
    }
}

    return -1;

}



int main(){
    int size = 5;
    int arr[] = {21,32,112,133,198};
    int ans = Binarysearch(112,arr,size);

    cout<<ans;
    
    return 0;
}