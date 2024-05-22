#include <iostream>
using namespace std;
int main()
{
    int workinghrs;
    cin>>workinghrs;

    if (workinghrs <= 40){
        cout<<"they has no bonus amount "<<"\n";
    }else {
        int bonustime = workinghrs-40;
        int bonusamount = bonustime*10;
        cout<<"Bonus= "<<bonusamount<<" rs."<<endl;
    } 

    cout<<"put down the workedtime";
    int workedtime;
    cin>>workedtime;

    if (workedtime <= 40){
    cout<<"ther is no bonus";

    }else{
    int bontime = workedtime-40;
    int bonamount = bontime *10;
    cout<<bonamount;
    } 

}