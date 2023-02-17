#include<stdio.h>
#include<math.h>
int main(){
    int n,a,s,b,m,w;
    printf("The number is:");
    scanf("%d",&n);
    m=n;
    w=n;
    b=0;
    while(n!=0){
        n=n/10;
        b=b+1;
    }
    s=0;
    while(w!=0){
        a=w%10;
        s=s+pow(a,b);
        w=w/10;
    }
    if(m==s){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
//this is pratham's change
