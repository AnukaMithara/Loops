#include <iostream>

using namespace std;

int main()
{
    int inp,newn,rem;

    cout<<"Input the number : ";
    cin >> inp;
    cout<<"\n"<<"When the digit of the number are reversed : ";

    do
    {
        rem = inp % 10;
        newn = inp / 10;

        cout << rem;

        inp = newn;

    }

    while (newn != 0);
    cout<<endl;
    return 0;
}
