#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int pascal()
{
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}
