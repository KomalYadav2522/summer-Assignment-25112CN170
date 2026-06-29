#include <iostream>
using namespace std;
int main()
{
    int arr1[100],arr2[100],merged[200];
    int n1,n2;
    //Input size of first array
    cout<< "Enter size of first sorted array:";
    cin>> n1;
    //Input first array elements
    cout<< "Enter elements of first array:\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    //Input size of second array
    cout<< "Enter size of second sorted array:";
    cin>> n2;
    //Input second array elements
    cout<< "Enter elements of second array:\n";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    //i-arr1 index
    //j-arr2 index
    //k- merged array index
    int i=0,j=0,k=0;
    //Compare elements of both arrays
    while(i<n1&& j<n2)
    {
        if(arr1[i]<=arr2[j]){
            merged[k]=arr1[i];
            i++;
        }
        else{
            merged[k]=arr2[j];
            j++;
        }
        k++;
    }
    //Copy remaining elements of first array
    while(i<n1)
    {
        merged[k]=arr1[i];
        i++;
        k++;
    }
    //Copy remaining elements of second array
    while(j<n2)
    {
        merged[k]=arr2[j];
        j++;
        k++;
    }
    //Print merged array
    cout<<"\nMerged Array:\n";
    for(i=0;i<k;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
    
}