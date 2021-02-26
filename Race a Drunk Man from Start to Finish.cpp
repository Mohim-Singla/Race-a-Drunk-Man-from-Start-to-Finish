#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    cout<<":::::::Race a Drunk Man from Start to Finish::::::::"<<endl;
    cout<<"Enter any character of your choice: ";
    string choice;
    cin>>choice;
    static int loc=100;
    int position=50;
    int time=0;
    while(time!=5000)
    {
        cout<<"|Danger Zone|";
        for (int i=0;i<=loc;i++)
        {
            if (i==position)
            {cout<<choice;}
            else
            {cout<<" ";}
        }
        cout<<"|Winning line|"<<endl;
        position+=rand()%5-2;
        if(time==2500)
        {
            cout<<"                                                         ----Warning!! Half Time Left----"<<endl;
            cout<<"Give any input to continue: ";
            string a;
            cin>>a;
        }
        if (position>loc||position<0)
        {
            break;
        }

        time++;
    }
    cout<<endl<<endl<<"   :::GAME RESULT:::   "<<endl<<endl;
    if (position>loc)
    {
        cout<<"You Won!!!"<<endl<<"Your Score: "<<(1000-time);
    }
    else if(position<0)
    {
        cout<<"You Lost!!! "<<endl<<"Your Score: 00";
    }
    else
    {
        cout<<"Times-up"<<endl<<"Your Score: "<<rand()%1000+2;
    }
    return 0;
}
