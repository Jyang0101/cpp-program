#include <iostream>

using namespace std;

int main(){
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

}