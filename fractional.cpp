#include<iostream>
#include<conio.h>

using namespace std;

long double nthroot(double num,int power);//firstly calculate nth root
long double custompow(double num,int power);//then power 
void fractionconvertor(double frac);
bool prime(int prime);

double a,b,c;
int main(){system("cls");
    
    
    cout<<"Enter Number=";
    cin>>a;
  
   cout<<"Enter Power (numerator/in decimals)=";
    cin>>b;


    if((int)b!=b)fractionconvertor(b);
    else {
    cout<<"Enter Power denominator=";
    cin>>c;

    }
   

if(c==0)cout<<"invalid power";
else 
    if(b*c>0)   
   cout<<custompow(nthroot(a,c),b);
   else {
       if(b<0 && c>0)b=-1*b;
       else if(b>0 && c<0)c=-1*c;

       cout<<1/custompow(nthroot(a,c),b);

   }
   
getch();

}

long double custompow(double num,int power){
long double result=1;
for(int i=1;i<=power;i++){
result*=num;

}
return result;
}

long double nthroot(double num,int power){

long double i1=0,i2=num;
long double result=1;
long double prevresult=result;
while(true){
    if(custompow(result,power)<num)i1=result;
     else i2=result;

    result=(i1+i2)/2;
    if(prevresult==result)break;
    prevresult=result;
    
   
 }return result;

}

void fractionconvertor(double frac){
    int i=0;
    while (true)
    {i++;
    frac*=10;
        if(((int)frac)%10==0)break;
        
        
    }
    //cout<<i-1;
    c=custompow(10,i-1);
    b=b*c;
    
}

bool prime(int prime){
    int i=0;
    for(i=0;i<=prime/2;i++){
        if(prime%i==0)break;
    }

    if(i<=prime/2)return true;
    else false;
}