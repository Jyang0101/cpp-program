/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
/*{
    int a;
    int b;
    
    a = 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 ;
    b = 2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20 ;
    
    cout<<a+b<<endl;
    
    return 0;
}*/

/*{
    int a = 7 ;
    int b = 9 ;
    int c = a ;
    
    a=b;
   b=c;
    
    
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    return 0;
    
}*/

{
    int even = 0;
    int odd = 0;

for(int a = 0; a <= 3 ; a++)
{
    cin>>a;
    
    if(a%2==0){
        
    even=even+a;
        
    }
    else{    
    odd=odd+a;
    
}
}
cout<<"even="<<even<<endl;
cout<<"odd="<<odd<<endl;



    
    return 0;
}

/*{
    int sum;
    for(int i;i<=10;i++){
        sum =sum+i;
    }
    
    cout<<"sum="<<sum<<endl;
    
    return 0;
}*/

/*{
int even = 0;
int odd = 0;


for(int i = 0; i <= 10 ; i++)
{
    cin>>i;
    
    if(i%2==0){
        
    even=even+i;
    }
else {
 
 odd=odd+i;
 
}
}
cout<<"even="<<even<<endl;
cout<<"odd="<<odd<<endl;


return 0;

}*/
