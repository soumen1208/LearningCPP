#include <iostream>
using namespace std;

class Engine
{
    private:

    int rpm;
    
    public:

    bool isOn;

    Engine()
    {
        isOn =false;
        int rpm = 0;
    }

    void accelarate()
    {
        rpm += 50;
    }

    int getRpm()
    {
        return rpm;
    }


};
int main()
{
    Engine eng;


    eng.accelarate();

    cout<<eng.getRpm();

}