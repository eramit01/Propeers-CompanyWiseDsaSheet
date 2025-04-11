#include <iostream>
#include<climits>
using namespace std;
int findSecondLargestElement(int arr[], int size){
    if(size<2){
        cout<<"Array Should have at least two elemnts"<<endl;
        return -1;
    }
int largest=INT_MIN;
int secondLargest=INT_MIN;
for(int i=0;i<size;i++){
    if(arr[i]>largest){
        secondLargest=largest;
        largest=arr[i];
    }
    else if(arr[i]>secondLargest && arr[i]!=largest){
secondLargest=arr[i];

    }
}
if(secondLargest==INT_MIN){
    cout<<"There is no second largest element in the array"<<endl;
    
    return -1;
}
return secondLargest;
}
int main(){
    int arr[]={19,3934,23994,29292,84684};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=findSecondLargestElement(arr,size);
    if(result!=-1)
{
    cout<<"the second largest element Is :"<<result<<endl;

}
return 0;}