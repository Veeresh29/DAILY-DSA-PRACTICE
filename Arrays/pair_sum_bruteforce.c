//pair sum for sorted array
//brute force
#include <stdio.h>
int main() {
    int  a[4]={2,7,11,15};
    int target_sum=18,i,j;
    int found=0;
    for( i=0;i<4;i++){
        for( j=i+1;j<4;j++){
            if(a[i]+a[j]==target_sum){
                found=1;
                break;
            }
        }
        if(found) break;
    }
    if(found==1){
        printf("found\n");
    }
    else{
         printf("not found\n");
    }
    return 0;
}