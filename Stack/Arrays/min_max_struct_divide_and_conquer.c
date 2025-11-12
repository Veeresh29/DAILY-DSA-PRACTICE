#include <stdio.h>
struct minmax{
    int min;
    int max;
};
struct minmax mm(int a[],int low,int high){
    struct minmax var;
    if(low==high){
        var.min=a[low];
        var.max=a[low];
        return var;
    }
    if(low==high+1){
        if(a[low]>a[high]){
            var.min=a[high];
            var.max=a[low];
            return var;
        }
        else{
            var.min=a[low];
            var.max=a[high];
            return var;
        }
    }
    int mid=(low+high)/2;
    struct minmax val1=mm(a,low,mid);
    struct minmax val2=mm(a,mid+1,high);
    if (val1.min<val2.min){
        var.min=val1.min;
    }
    else{
        var.min=val2.min;
    }
    if (val1.max>val2.max){
        var.max=val1.max;
    }
    else{
        var.max=val2.max;
    }
    return var;
}
int main() {
    int a[6]={18,6,1,4,5,19};
    struct minmax final=mm(a,0,5);
    printf("max:%d\n",final.max);
    printf("min:%d\n",final.min);
    return 0;
}