#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r;
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for(int i=2;i<=n;i++){
        nfact *=i;
    }
    for(int i=2;i<=r;i++){
        rfact *=i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact *=i;
    }
    int ncr=nfact/(rfact*nrfact);
    printf("%d ",ncr);
    return 0;
}