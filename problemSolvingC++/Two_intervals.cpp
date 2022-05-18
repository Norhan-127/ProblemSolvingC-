#include <iostream>
using namespace std;
int main()
{
   int num1, num2, num3, num4;
   cin>>num1>>num2>>num3>>num4;
   int start =0, finish=0;
   if((num1>num3&&num1>num4)||(num2<num3&&num2<num4))
   {
       cout<<-1<<endl;
   }
   else
   {
       if(num1>num3)
       {
           start=num1;
       }
       else
       {
           start=num3;
       }
       if(num2<num4)
       {
           finish=num2;
       }
       else
       {
           finish=num4;
       }
       cout<<start<<" "<<finish<<endl;
   }
    return 0;
}
