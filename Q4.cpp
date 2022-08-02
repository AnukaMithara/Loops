#include <iostream>
#include <cmath>

using namespace std;

int main () {

int d,i=1,tot=0,sal;

cout<<"How many day the employee worked : ";
cin>>d;
cout<<"\tDay \t\t Salary"<<endl;
cout<<"\t-------------------------"<<endl;
while (i<=d)
    {

    sal = pow(2,i-1);
    cout<<"\t"<<i<<"\t\t"<<sal<<endl;
    tot+=sal;
    i++;
    }
cout<<"\nThe total salary is "<<tot<<" Rs. "<<endl;
return 0;
}
