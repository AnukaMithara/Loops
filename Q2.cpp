#include <iostream>
#include <cmath>

using namespace std;

int main(){
int n=1;
    cout<<"\t"<<"N"<<"\t"<<"2^N"<<"\t"<<"3^N"<<"\t"<<"5^N"<<endl;
    cout<<"\t-----------------------------"<<endl;
while(n<=5){

    cout<<"\t"<<n<<"\t"<<pow(2,n)<<"\t"<<pow(3,n)<<"\t"<<pow(5,n)<<endl;
     n++;

}
         return 0;
}

