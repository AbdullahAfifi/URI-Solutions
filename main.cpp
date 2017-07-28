#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int k=0;
    double sum=0.0,avg;
    char O;
    double M[12][12];
    cin>>O;
    for( int i=0; i<12; i++)
        for(int j=0; j<12; j++)
            cin>>M[i][j];
    for( int i=1; i<=10; i++)
    {
        if(i<6)
            k=12-i;
        else
            k=i+1;
        for(int j=k; j<=11; j++)
        {
            sum+=M[i][j];

        }

    }

    if(O=='S')


        cout<<fixed<<setprecision(1)<<sum<<endl;

    else if(O=='M')
    {
        avg=sum/30;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

    return 0;
}
