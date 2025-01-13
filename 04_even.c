#include<stdio.h>
int main(){
    for(int i=1;i<=10;i=i+1){
        if(i%2==0){
            printf("%d is a even number\n",i);
        }
        else{
            printf("%d is a odd number\n",i);
        }
    }
    return 0;
}