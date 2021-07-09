#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
using namespace std;
class customer
{
    protected:
    char a[15];
    public:
    unsigned long long b;
    void read1(unsigned long long ef)
    {
        cout<<"Enter your Name:";
        cin>>a;
        b=ef;
    }
    void display()
    {
        cout<<"Name:"<<a<<endl<<"Phone No:"<<b<<endl;
    }
};
class ticket:virtual public customer
{
protected:
    int *c;
    char d[20];
public:
    ticket()
    {
        c=new int;
       *c=1023;
       strcpy(d,"Day-Month-Year");
    }
    void read2()
    {
        cin.ignore();
        cout<<"Enter the date:";
        cin.getline(d,20);
    }

    void display()
    {
        cout<<"Ticket No:"<<++(*c)<<"\nDate:"<<d<<endl;
    }
    ~ticket()
    {
        delete c;
    }
};
class film:virtual public customer
{
protected:
    char e[10],f[10];
    int g1[10],amo;
public:
    static bool i[40];
    void read3()
    {
        amo=0;
        for(int s=0;s<10;s++)
            g1[s]=0;
    int ch=0;
    for(int s=0;s<40;s++)
        {
            if(i[s]==1)
            ch++;
        }
        if(ch==40)
        {
            cout<<"THEATRE HOUSEFUL"<<endl;
            return;
        }
    v:
    cout<<"Now Showing:\n1.RAMLEELA\n2.HERA PHERI\nSelect your film according to their respective no:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {ch=0;
        for(int s=0;s<20;s++)
        {
            if(i[s]==1)
            ch++;
        }
        if(ch==20)
        {
            cout<<"RAMLEELA HOUSEFUL"<<endl;
            return;
        }
        strcpy(e,"RAMLEELA");
        z:
        cout<<"Film:RAMLEELA\nSelect timing:\n1.9:00AM\n2.4:00PM\nEnter your choice:";
        cin>>ch;
        if(ch==1)
            strcpy(f,"9:00AM");
        else if(ch==2)
        strcpy(f,"4:00PM");
        else
            {
            cout<<"Invalid choice\n";
            goto z;
        }
        cout<<b<<endl;
        int count=0;
            for(int s=0;s<20;s++)
            {
                if(s==0)
                {
                    cout<<"\t\t\t\t\t\t\t\t\tSCREEN\n";
                    cout<<"\t\t\t\t\t\t\t\t\tCOMMON\n";
                }
                if(i[s]==1)
                    cout<<"A"<<s+1<<".Taken"<<setw(10);
                else
                {
                    count++;
                    cout<<"A"<<s+1<<".Free"<<setw(10);
                }
                if((s+1)%10==0)
                    cout<<endl;
                    if(s+1==10)
                    cout<<"\t\t\t\t\t\t\t\t\t  VIP\n";
            }
            cout<<"Price for COMMON is Rs.100"<<endl;
            cout<<"Price for VIP is Rs.200"<<endl;
            int g;
            y:
             cout<<"Enter the no of seats:";
             cin>>g;
            if(g>count)
            {
                cout<<"Only "<<count<<" seats are free\n";
                goto y;
            }
            cout<<"Enter your Seat No(1 to 20):\n";
            for(int s=0;s<g;s++)
            {
            cin>>g1[s];
            if(g1[s]<=0||g1[s]>20)
            {
                cout<<"Invalid choice\n";
                s--;
            }
            else if(i[g1[s]-1]==1)
            {
                cout<<"Seat taken\n";
               s--;
            }
            else
            i[g1[s]-1]=1;
            }
            for(int s=0;s<g;s++)
            {
                if(g1[s]<=10)
                  amo=amo+100;
                  else
                  amo=amo+200;
            }
    break;
        }
    case 2:
        {ch=0;
        for(int s=0;s<20;s++)
        {
            if(i[s+20]==1)
            ch++;
        }
        if(ch==20)
        {
            cout<<"HERA PHERI HOUSEFUL"<<endl;
            return;
        }
        strcpy(e,"HERA PHERI");
        z1:
        cout<<"Film:HERA PHERI\nSelect timing:\n1.9:00AM\n2.4:00PM\nEnter your choice:";
        cin>>ch;
        if(ch==1)
            strcpy(f,"9:00AM");
        else if(ch==2)
        strcpy(f,"4:00PM");
        else
            {
            cout<<"Invalid choice\n";
            goto z1;
        }
        int count=0;
            for(int s=20;s<40;s++)
            {
                if(s==20)
                {
                    cout<<"\t\t\t\t\t\t\t\t\tSCREEN\n";
                    cout<<"\t\t\t\t\t\t\t\t\tCOMMON\n";
                }
                if(i[s]==1)
                    cout<<"A"<<s-19<<".Taken"<<setw(10);
                else
                {
                    count++;
                    cout<<"A"<<s-19<<".Free"<<setw(10);
                }
                if((s+1)%10==0)
                    cout<<endl;
                    if(s+1==30)
                    cout<<"\t\t\t\t\t\t\t\t\t  VIP\n";
            }
            cout<<"Price for COMMON is Rs.100"<<endl;
            cout<<"Price for VIP is Rs.200"<<endl;
            int g;
            y1:
             cout<<"Enter the no of seats:";
             cin>>g;
            if(g>count)
            {
                cout<<"Only "<<count<<" seats are free\n";
                goto y1;
            }
            cout<<"Enter your Seat No(1 to 20):\n";
            for(int s=0;s<g;s++)
            {
            cin>>g1[s];
            if(g1[s]<=0||g1[s]>20)
            {
                cout<<"Invalid choice\n";
                s--;
            }
            else if(i[g1[s]+19]==1)
            {
                cout<<"Seat taken\n";
               s--;
            }
            else
            i[g1[s]+19]=1;
            }
            for(int s=0;s<g;s++)
            {
                if(g1[s]<=10)
                  amo=amo+100;
                  else
                  amo=amo+200;
            }
    break;
        }
    default:
        {cout<<"Invalid choice\n";
            goto v;
        }
    }
    }
   void display()
   {
       cout<<"Film name:"<<e<<"\nTiming:"<<f<<endl;
       cout<<"Seat No:";
       for(int i=0;g1[i]!=0;i++)
       cout<<g1[i]<<"\t";
       cout<<endl;
       cout<<"Amount to be paid="<<amo<<endl;
   }
};
bool film::i[40];
class payment:public ticket,public film
{
    bool k;
public:
    payment()
    {
        k=0;
    }
    void read(int ab)
    {
       unsigned long long cd;
      if(k==1&&ab==0)
             cout<<"Payment of RS."<<amo<<" is Successful"<<endl;
         else
         {
             o1:
          cout<<"Enter your debit card no.(8 digits) for transaction of RS."<<amo<<":\n";
         cin>>cd;
         if(cd<10000000||cd>99999999)
         {
             cout<<"Invalid code.";
             goto o1;
         }
         int otp;
         cout<<"Please enter OTP that has been sent to phone no:"<<b<<endl;
         cin>>otp;
         if(otp==1014)
         {
           cout<<"Payment of RS."<<amo<<" is Successful"<<endl;
         k++;
         }
         else
            cout<<"Invalid OTP"<<endl;
         }
     }
     void display()
     {   customer::display();
         ticket::display();
         film::display();
         if(k==1)
            cout<<"Payment Successful"<<endl;
         else
            cout<<"Payment Pending"<<endl;
     }
};
int main()
{
    //cout<<"Hello"<<endl;
    payment p[10];
    int iq[10];
    for(int i=0;i<1;i++)
        iq[i]=0;
    int q=0,r,ch;
    //cout<<"Hello"<<endl;
    while(1)
    {
        cout<<"1.BOOK TICKET\n2.PAYMENT\n3.EXIT\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:{//cout<<"Hello"<<endl;
            //cout<<"Hello"<<endl;
                unsigned long long a;
            //cout<<"Hello"<<endl;
        int s;
        //p[q].read1();
       // p[q].read2();
        //p[q].read2();
       // p[q].read3();
        j:
           try
           {
        cout<<"Enter your Phone No:";
        cin>>a;
        if(a>9999999999||a<7000000000)
            throw a;
            }
            catch(unsigned long long a)
            {
                cout<<"Invalid Phone No.\n";
                goto j;
            }
        if(q==0)
        {
                p[q].read1(a);
                p[q].read2();
                p[q].read3();
                p[q].display();
                q++;
        }
        else
        {

            for(s=0;s<q;s++)
                if(p[s].b==a)
                {
                    p[s].display();
                    cout<<"Want to book another film:\n1.YES\n2.NO\nEnter your choice:";
                    cin>>r;
                    if(r==1)
                    {
                    p[s].read1(a);
                     p[s].read2();
                     p[s].read3();
                     p[q].display();
                     iq[s]++;
                     break;
                    }
                    else if(r==2)
                    break;
                    else
                    {
                        cout<<"Invalid choice."<<endl;
                        break;
                }
                }
            if(s==q)
            {
                 p[q].read1(a);
                     p[q].read2();
                     p[q].read3();
                     p[q].display();
                q++;
            }
                }
            break;
        }
        case 2:
            {int i;
            unsigned long long k;
        if(q==0)
        {
            cout<<"First fill the details in the BOOK TICKET section.\n";
            break;
        }
     cout<<"Enter your phone no:";
     cin>>k;
     for(i=0;i<q;i++)
     if(p[i].b==k)
        break;
     if(i==q)
     {
         cout<<"Invalid phone no.Please fill your details and select your seat no in BOOK TICKET section.\n";
         break;
     }
            p[i].read(iq[i]);
        p[i].display();
        iq[i]=0;
        break;
            }
        case 3:exit(0);
        default:{
            cout<<"Invalid choice\n";
        }
        }
    }
return 0;
}
