#include<stdio.h>
int main(){
int i,n,x,c=0;

printf("Enter array size : ");
scanf("%d", &n);
int a[n];

printf("Enter array : ");
for(i=0;i<n;i++){
    scanf("%d", &a[i]);
}
printf("Value = ");
scanf("%d", &x);
for(i=0;i<n;i++){
    if(a[i]==x){
        c++;
    }
}printf("Occurence = %d", c);
return 0;
}
