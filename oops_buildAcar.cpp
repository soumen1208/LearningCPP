#include <iostream>
using namespace std;

class Car
{
    public:

    string name;
    int noOfWheels;
    int noOfDoor;
    int noOfCylinder;
    int currentSpeed;

    // constructor..................
    Car (string n, int wheels, int doors, int cylinder, int speed)
    {
        name = n;
        noOfWheels = wheels;
        noOfDoor = doors;
        noOfCylinder = cylinder;
        currentSpeed = speed;
    }

    Car (string n, int wheels, int doors, int speed)
    {
        name = n;       
        noOfWheels = wheels;
        noOfDoor = doors;
        currentSpeed = speed;
    }

    void display()
    {
        cout<<"name: "<<name<<"\n";
        cout<<"wheels: "<<noOfWheels<<"\n";
        cout<<"door: "<<noOfDoor<<"\n";
        cout<<"cylinder: "<<noOfCylinder<<"\n";
        cout<<"speed: "<<currentSpeed<<"\n""\n";
    }

   void accelarate ()
    {
        currentSpeed++;
    }

    void braking()
    {
        currentSpeed--;
    }
};
int main()
{
  Car c1("AUDi", 4, 4, 6, 0);
//   c1.name = "BMW";
//   c1.noOfWheels = 4;
//   c1.noOfDoor = 2;
//   c1.noOfCylinder = 6;
//   c1.currentSpeed = 120;
  c1.accelarate();
  c1.braking();


  Car c2("BMW", 4,2,7,120);
//   c2.name = "AUDI";
//   c2.noOfWheels = 4;
//   c2.noOfDoor = 4;
//   c2.noOfCylinder = 6;
//   c2.currentSpeed = 0;
  c2.accelarate();
  c2.braking();

  Car c3("MB", 4, 4, 6,180);
//   c3.name = "Marceedez";
//   c3.noOfWheels = 4;
//   c3.noOfDoor = 4;
//   c3.noOfCylinder = 8;
//   c3.currentSpeed = 240;
  c3.accelarate();
  c3.braking();



  c1.display();
  c2.display();
  c3.display();
}