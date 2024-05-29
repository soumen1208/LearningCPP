 #include <iostream>
 using namespace std;
 int main()
 {
    int dayNo;
    cin>>dayNo;

   if (dayNo==1)
   cout<<"Sunday";

   else if(dayNo==2)
   cout<<"Monday";

   else if(dayNo==3)
   cout<<"Tuesday";

   else if (dayNo==4)
   cout<<"Wednesday";

   else if(dayNo==5)
   cout<<"Thursday";

   else if(dayNo==6)
   cout<<"Friday";

   else if(dayNo==7)
   cout<<"Saturday";

   else
   cout<<"invalid no";

   // Day no switch case.........................

   switch (dayNo)
   {
    case 1:  cout<<"Sunday";
    break;
    case 2: cout<<"Monday";
    break;
    case 3 : cout<<"Tuesday";
    break;
    case 4: cout<<"Wednesday";
    break;
    case 5: cout<<"Thursday";
    break;
    case 6: cout<<"Friday";
    break;
    case 7: cout<<"Saturday";
    break;
    default: cout<<"invalid no";
    break;

   }
 } 
  