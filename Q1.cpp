#include <iostream>

using namespace std;

int main()
{
    cout<<"\tMembership type  \t\t|\tcode \t|\tMonthly fees (Rs.)"<<endl;
    cout<<"\t--------------------------------+---------------+-----------";
    cout<<"---------------"<<endl;
    cout<<"\tStandard Adult Membership\t|\t 1 \t|\t 500"<<endl;
    cout<<"\t--------------------------------+---------------+-----------";
    cout<<"---------------"<<endl;
    cout<<"\tChild Membership\t\t|\t 2 \t|\t 300"<<endl;
    cout<<"\t--------------------------------+---------------+-----------";
    cout<<"---------------"<<endl;
    cout<<"\tSenior Citizen Membership\t|\t 3 \t|\t 350"<<endl;
    cout<<"\t------------------------------------------------------------";
    cout<<"---------------\n"<<endl;
    int c;
    const int c1=500;
    const int c2=300;
    const int c3=350;
cout<<"Membership type code : ";
cin>>c;
cout<<endl;

switch(c){
    case 1 :
    cout<<"Total membership fees for next 6 months = Rs. "<<c1*6<<endl;
    break;
    case 2 :
    cout<<"Total membership fees for next 6 months = Rs. "<<c2*6<<endl;
    break;
    case 3 :
    cout<<"Total membership fees for next 6 months = Rs. "<<c3*6<<endl;
    break;
    default :
    cout<<"The code you entered is incorrect"<<endl;
}
    return 0;
}
