#include <iostream>
#include <cmath>

using namespace std;

int main () {

int i=60;

cout<<"\tKPH \t\t MPH"<<endl;
cout<<"\t-------------------------"<<endl;

while (i<=130)
    {
    cout<<"\t"<<i<<"\t\t"<<i * 0.6214<<endl;
    i+=5;
    }
    return 0;
}
