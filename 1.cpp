#include <iostream>
using namespace std;
int binarysearch(int A[],int target,int end,int start){
    int mid=(start+end)/2;
    while(end>=start){
        if(A[mid]>target){
            mid=(start+mid)/2;
        }
        else if(A[mid]<target){
            mid=(mid+end)/2;
        }
        else{
            return mid+1;
        }
    }
    return -1;
}
int main(){
    int A[]={2,5,8,12,16,23,38,56,72,91};
    cout<<binarysearch(A,23,10,0);

}
