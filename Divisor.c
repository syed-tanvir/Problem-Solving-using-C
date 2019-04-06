/* একটি সংখ্যার সমস্ত গুণনীয়ক (ভাজক) বের করতে হবে।  */

#include<stdio.h>

int main(){
int n,i;
scanf("%d", &n);
for(i=1; i<=n ; i++){
    if(n%i == 0){
        printf("%d",i);
        printf(" ");
    }
}
return 0;
}
