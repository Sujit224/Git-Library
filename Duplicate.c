#include <stdio.h>
int main(){
// Write a program to find the duplicate number in the given array....
int arr[8]={1,2,1,4,5,5,6,7};
for(int i=0;i<=7;i++){
    for(int j=i+1;j<=7;j++){
        if(arr[i]==arr[j]){
            printf("The number repeated is: %d \n",arr[i]);
            break;
        }
    }
}
return 0;
}