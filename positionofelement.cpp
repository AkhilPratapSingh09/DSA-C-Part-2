#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int s=0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;

        }
        else if(key>arr[mid]){
                s = mid + 1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
int lastOcc(int arr[], int n, int key){

    int s=0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;

        }
        else if(key>arr[mid]){
                s = mid + 1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}
int main()
{
    int arr[6] = {1,5,9,9,9,18};
    cout<<"First Occurenece of 9 is"<< firstOcc(arr, 6, 9)<<endl;
    cout<<"last occurence of 9 is"<<lastOcc(arr, 6, 9)<<endl;
    return 0;
}