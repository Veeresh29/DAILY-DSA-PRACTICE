#include <stdio.h>

int main() {
    int a[5]={2,3,5,6,11};
    int tar=11;
    int i=0,j=4;
    while (i<j){
        if(a[i]+a[j]==tar){
        printf ("found");
        break ;
        }
        else if(a[i]+a[j]<tar)
        i++;
        else
        j--;
    }

    return 0;
}