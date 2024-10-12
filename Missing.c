#include <stdio.h>
int main(){
    // Write a program to find the missing number in the given array....
int arr[9]={1,2,3,4,5,6,7,8,10};
int sum=0;
int missing;
for(int i=0;i<=8;i++){
   sum = sum+arr[i]; 
}
int sum1= (10*11)/2;
missing =sum1 -sum;
printf("The missing number is : %d",missing);
return 0;
}