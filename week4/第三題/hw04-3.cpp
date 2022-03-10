#include <iostream>

using namespace std;

int main(){
    int even = 0;

for(int a = 0; a <= 3 ; a++)
{
    cin>>a;
    
    if(a%2==0){
    even=even+a;
    }
}
cout<<"even="<<even<<endl;

   return 0;
}