#include <iostream>
#include <cmath>

using namespace std;

int ile,a,b,jednosci;

int main()
{
    cin>>ile;
    for(int i=1; i<=ile; i++)
    {
        cin>>a>>b;

        if(a>9)
            a=a%10;
        if(b>4)
        {
            do
            {
                b=b-4;
            }
            while(b>4);
        }

        if(a==0 && b==1)
            jednosci=0;
        if(a==1 && b==1)
            jednosci=1;
        if(a==2 && b==1)
            jednosci=2;
        if(a==3 && b==1)
            jednosci=3;
        if(a==4 && b==1)
            jednosci=4;
        if(a==5 && b==1)
            jednosci=5;
        if(a==6 && b==1)
            jednosci=6;
        if(a==7 && b==1)
            jednosci=7;
        if(a==8 && b==1)
            jednosci=8;
        if(a==9 && b==1)
            jednosci=9;

        if(a==0 && b==2)
            jednosci=0;
        if(a==1 && b==1)
            jednosci=1;
        if(a==2 && b==2)
            jednosci=4;
        if(a==3 && b==2)
            jednosci=9;
        if(a==4 && b==2)
            jednosci=6;
        if(a==5 && b==2)
            jednosci=5;
        if(a==6 && b==2)
            jednosci=6;
        if(a==7 && b==2)
            jednosci=9;
        if(a==8 && b==2)
            jednosci=4;
        if(a==9 && b==2)
            jednosci=1;

        if(a==0 && b==3)
            jednosci=0;
        if(a==1 && b==3)
            jednosci=1;
        if(a==2 && b==3)
            jednosci=8;
        if(a==3 && b==3)
            jednosci=7;
        if(a==4 && b==3)
            jednosci=4;
        if(a==5 && b==3)
            jednosci=5;
        if(a==6 && b==3)
            jednosci=6;
        if(a==7 && b==3)
            jednosci=3;
        if(a==8 && b==3)
            jednosci=2;
        if(a==9 && b==3)
            jednosci=9;

        if(a==0 && b==4)
            jednosci=0;
        if(a==1 && b==4)
            jednosci=1;
        if(a==2 && b==4)
            jednosci=6;
        if(a==3 && b==4)
            jednosci=1;
        if(a==4 && b==4)
            jednosci=6;
        if(a==5 && b==4)
            jednosci=5;
        if(a==6 && b==4)
            jednosci=6;
        if(a==7 && b==4)
            jednosci=1;
        if(a==8 && b==4)
            jednosci=6;
        if(a==9 && b==4)
            jednosci=1;

        cout<<jednosci<<endl;
    }

    return 0;
}
