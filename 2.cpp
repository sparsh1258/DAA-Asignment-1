#include <iostream>
using namespace std;
void merge(int A[],int start,int end ,int mid){
int n1=mid-start+1;
int n2=end-mid;
int L[n1+1],R[n2+1];
for(int i=0;i<n1;i++){
    L[i]=A[start+i];
}
for(int j=0;j<n2;j++){
    R[j]=A[mid+j+1];
}
L[n1]=1e9;
R[n2]=1e9;
int i=0;
int j=0;
for(int k=start;k<=end;k++){
    if(L[i]>=R[j]){
        A[k]=R[j];
        j++;
    }
    else if (L[i]<R[j]){
        A[k]=L[i];
        i++;
    }
}
}
void mergesort(int A[],int start,int end){
if(start<end){
    int mid=(start+end)/2;
    mergesort(A,start,mid);
    mergesort(A,mid+1,end);
    merge(A,start,end,mid);
}
}
int main(){
int A[]={12,11,13,5,6,7};
mergesort(A,0,5);
for(int i=0;i<6;i++){
    cout<<A[i]<<" ";
}
cout<<endl;
int B[]={38,27,43,3,9,82,10};
mergesort(B,0,6);
for(int i=0;i<7;i++){
    cout<<B[i]<<" ";
}
}