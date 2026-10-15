#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;
int main()
{
    srand(time(0));
    int num=rand()%10+1;
    int guess;
    bool won=false;

    for(int i=1;i<=3;i++)
    {
        if(won==false)
        {
            cout<<"Enter a number";
            cin>>guess;
        
            if(num==guess)
            {
                cout<<"you guessed correct number";
                won=true;
            }
        }
    }
    if(won==false)
    {
        cout<<"loser!"<<" ";
        cout<<"The num is:"<<num;
    }
}