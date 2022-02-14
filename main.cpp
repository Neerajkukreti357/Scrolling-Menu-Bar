#include<iostream>
#include<conio.h>

#define UP 72
#define DOWN 80
#define ENTER 13


using namespace std;

class Menu
{
private:
    string arr[7] {"NEW ACCOUNT","EXISTING ACCOUNT","DELETE ACCOUNT","DEPOSITE","CREDIT","ADMIN","EXIT"};
    string arr2[7] {};
public:
    void Display(size_t s,int pos=-1);
    int Check(int &p);
    void Choice(int &pos);
};
void Menu::Display(size_t s,int pos)
{   system("cls");

//loop for display element
    for(int i=0;i<s;i++)
    {
        if(i==pos)
        {
            arr2[i]="\b\b\b\b\b\b\b\b\b--> ";
            cout<<arr2[i];
        }
        cout<<i+1<<" . "<<arr[i];
        if(i==pos)
        {
            arr2[i]=" <--";
            cout<<arr2[i];
        }
        cout<<endl<<endl;
    }
}

int Menu::Check(int &p)
{
    if(p>=7)
    {
        return 0;
    }
    else if(p<0)
    {
        return 6;
    }
    else
    {
        return p;
    }
}

void Menu::Choice(int &pos)
{
    if(pos == 0)
    {
        cout<<"New Account";
    }
    else if(pos == 1)
    {
        cout<<"Existing Account";
    }
    else if(pos ==2)
    {
        cout<<"Deleting account";
    }
    else if(pos ==3)
    {
        cout<<"Dposite";
    }
    else if(pos ==4)
    {
        cout<<"Credit";
    }
    else if(pos == 5)
    {
        cout<<"Admin";
    }
    else
    {
        cout<<"Thank now application is close visit again : ";
    }
}

int main()
{
    Menu m;
    int ch;
    int pos=-1;
    m.Display(7);
    while(1)
    {
        ch = getch();
        switch(ch)
        {
            case UP:
                pos--;
                pos = m.Check(pos);
                m.Display(7,pos);
                break;
            case DOWN:
                pos++;
                pos = m.Check(pos);
                m.Display(7,pos);
                break;
            case ENTER:
                system("cls");
                m.Choice(pos);
                break;
            default:
                cout<<"";
                break;
        }//end of switch body loop

    }//end of infinity while loop
    return 0;
}
