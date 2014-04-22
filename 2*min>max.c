#include<stdio.h>

void min2_max(int* a, int n){
    int start=0,end=0,curmin=a[0],curmax=a[0],i,maxcount=0,curcount=1,j,k;
    for(i=1;i<n;i++){
        if(curmin>a[i])
            curmin=a[i];
        if(curmax<a[i])
            curmax=a[i];
        if(2*curmin>curmax ){
            end=i;
            curcount++;
            if(curcount>maxcount){
                    maxcount=curcount;
                    j=start;k=end;
                    }
        }
        else{
            i=start+1;
            start=i;
            end=i;
            curmin=a[i];
            curmax=a[i];
            curcount=1;
        }
    }
    printf("\n Desired subsequence is = ");
    for(i=j;i<=k;i++)
        printf(" %d ",a[i]);
}

void main(){
    int a[]={4,7,5,1,3,8,9,6,2};
    min2_max(a,sizeof(a)/sizeof(a[0]));
}
