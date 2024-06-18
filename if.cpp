#include <iostream>
using namespace std;
int main()
{
    int mark;

    cout<<"Enter yoyr mark ;" ;
    cin>>mark;

    if(mark>=75)
    {
        cout<<"A";

    }
    else if (mark>=65)
    {
        cout<<"B";

    }
    else if (mark>=55)
    {
        cout<<"C";

    }
    else if (mark>=35)
    {
        cout<<"S";

    }
    else
    {
        cout<<"F";

    }

    return 0;
}  