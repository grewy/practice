/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<stdio.h>
#include<math.h>
#define MAX 5
int BitCount(unsigned int u)
{
     unsigned int uCount;

     uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
     return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}

int maxK(int a){
    if(a==1)
        return 0;
    return (int)log2(a);
}

void playGame(int a){
    int beauty,k,player=0,flag=-1;
    beauty=BitCount(a);
   // printf("beauty= %d",beauty);
    k=maxK(a);
    while(k>=0 ){
        flag=-1;
        if(BitCount((int)pow(2,k))==beauty && (int)pow(2,k) < a){
            // removes n from blackboard and writes n-2^k instead.
            a=a-(int)pow(2,k);
            beauty=BitCount(a);
            k=maxK(a);
            player=player+1;
            flag=0;
            printf("here\n");
        }
        if(flag!=0)
            k--;

    }
    printf("player= %d\n",player);
    if(player%2!=0)
        printf("First Player\n");
    if(player%2==0)
        printf("Second Player\n");


}
//int a[MAX];
int main(){

    int a=15;
    //printf("T= %d",T);

        playGame(a);
}
