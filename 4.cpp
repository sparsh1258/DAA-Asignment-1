#include <iostream>
using namespace std;
int kadanesalgo(int A[],int size){
    int max_sum=A[0];
    int curr_sum=A[0];
   for(int i=1;i<size;i++){
        curr_sum= max(A[i],curr_sum+A[i]);
        max_sum= max(curr_sum,max_sum);
    }
    return max_sum;
}
int main(){
    int A[]={-2,-5,6,-2,-3,1,5,-6};
    cout<<kadanesalgo(A,8);

}