int main(int argc, char** argv)
{ int n; int sum=0; cout<<"nhap n: "; cin>>n; for(int i=1;i<=n;i++){ sum+=i; cout<<i<<"+"; } cout<<"="<<sum; return 0; }

#include<stdio.h>  
void printName();  
void main ()  
{  
    printf("Hello ");  
    printName();  
}  
void printName()  
{  
    printf("Javatpoint");  
}  
