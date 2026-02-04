#include <iostream>
using namespace std;
int Partition(int A[],int start,int end){
    int x=A[start]; //pivot
    int i=start;
    for(int j=start+1;j<=end;j++){
        if(A[j]<=x){
            i++;
            swap(A[j],A[i]);
        }
    }
    swap(A[i],A[start]);
return i;
}

void Quicksort(int A[],int start,int end){
    if(start<end){
       int m=Partition(A,start,end);
        Quicksort(A,start,m-1);
        Quicksort(A,m+1,end);
    }
}
int main(){
    int A[]={4,2,6,9,2};
    Quicksort(A,0,5);
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
}