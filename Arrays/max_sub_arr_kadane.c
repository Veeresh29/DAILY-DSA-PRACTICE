#include <stdio.h>
int main() {
    int a[6]={6,4,-2,5,-3,2};
    int maxsum=-9999;
    int currsum=0;
    for(int i=0;i<=5;i++){
        currsum+=a[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    printf("max sub array:%d\n",maxsum);
    return 0;
}