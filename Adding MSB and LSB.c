/*
পাঁচ (5) অঙ্কের একটি সংখ্যার প্রথম এবং শেষ অঙ্কের যোগফল নির্ণয় করার প্রোগ্রাম লিখতে হবে।
*/

#include<stdio.h>
int main(){
int T,n,msb,lsb,result;
scanf("%d", &T);

while(T--){
    scanf("%d", &n);
    msb=(n%10);
    while(n/10 != 0){
        n=n/10;
        lsb=n%10;
    }
    result=msb+lsb;
    printf("%d\n" ,result);

}
return 0;
}
