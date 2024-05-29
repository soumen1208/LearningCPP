//#include <iostream>
// using namespace std;
 
//  double fahrenheitToCelsius(double fahrenheit)
// {     
//     double celsius;

//     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

//     return celsius;

//     celsius++;

// }
 
//  int main()
// {
//  double fahrenheit;
 
//     cout << "Enter temperature in fahrenheit (in degrees) ";
//     cin  >> fahrenheit;
//     cout << "Temperature in Celsius (in degrees) = "
//                << fahrenheitToCelsius(fahrenheit) <<endl;
// }


// // others method ........................................................................................................................

#include <iostream>
using namespace std;

int F_to_C (int Fmin, int Fmax)
{
    int celcious = 0;
    

    for (int i=Fmin+1; i<Fmax; i++)
    {
        celcious = 5 * (Fmin - 32) / 9;
        i++;
    }

    cout<<Fmin<<" "<<celcious;
    
}
int main()
{
    int Fmin, Fmax;
    cin>>Fmin>>Fmax;

    F_to_C(Fmin, Fmax);

}