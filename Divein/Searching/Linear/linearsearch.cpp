#include <iostream>
using namespace std;

int LinearSearch(int key,int* arr){
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }    
    }

    return -1;
    
}



int main(){
    
    int arr[] = {2, 12, 15, 11, 7, 19, 45};
    int key = 7;

    int ans = LinearSearch(key,arr);
    cout<<ans;

    return 0;
}