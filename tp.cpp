
//mergesort
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int l1 = mid-low+1;
    int l2 = high-mid ;
    int arr1[l1]; 
    int arr2[l2]; //tempo array
    for(int i=0 ;i <l1; i++){
        arr1[i]=arr[low+i];
    }
    for(int i=0 ;i <l2; i++){
        arr2[i]=arr[mid+1+i];
    }
    int ptra = 0; int ptrb = 0;
    int k=low;
    while(ptra<l1 && ptrb<<l2){
        if(arr1[ptra]< arr2[ptrb]){
            arr[k]= arr1[ptra];
            k++;
            ptra++;
        }
        else{
            arr[k] = arr2[ptrb];
            k++; ptrb++;
        }
    }
    while(ptra<l1){
        arr[k]= arr1[ptra];
            k++;
            ptra++;
    }
    while(ptrb<l2){
        arr[k]= arr2[ptrb];
            k++;
            ptrb++;
    }
}
void mergesort(int arr[], int low, int high){
    if(low<high){
        int mid = (high+low)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
int main(){
    int arr[5]={5,4,10,6,7};
    mergesort(arr, 0,4);
        for(int i=0; i<5; i++){
            cout<<arr[i];
        }

}














// //quicksort


// #include<bits/stdc++.h>
// using namespace std; 


// void swap(int arr[], int i, int j){
//     int temp = arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

// int partition(int arr[], int low, int high){
//     int pivot = arr[high];
//     int i=low-1;
//     for(int j=low; j<high;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr,i,j);
//         }
//     }
//     swap(arr,i+1,high);
//     return i+1;
// }

// quickSort(int arr[], int low, int high){
//     if(low<high){
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi-1);
//         quickSort(arr, pi+1, high);
//     }
// }

// int main(){
//     int arr[5]={5,4,10,6,7};
//     quickSort(arr, 0,4);
//         for(int i=0; i<5; i++){
//             cout<<arr[i];
//         }

// }