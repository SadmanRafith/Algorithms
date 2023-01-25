#include<iostream>
using namespace std;

int Euclid(int a,int b)
{
   int r =a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
return b;
}
int main()
{
    cout<<"Euclid: "<<Euclid(5,10);

}
