//  Name: Femi-Awoyale Toluwalope    J00966835    8TH November 2022

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double root1, root2;
    double discriminant;
    
    cin >> a >> b >> c;

    if (a == 0){
      cout << "Invalid entry\n";
    }
  
    discriminant = pow(b,2) - 4 * a * c;
    root1 = (-b + sqrt(discriminant))/(2 * a);
    root2 = (-b - sqrt(discriminant))/(2 * a);

    if (discriminant == 0){
        cout << "The single root is " << root1;
    }
      
    else if(discriminant > 0 && a != 0){
      cout << "Two real roots\n";
      cout << "- First root " << root1 << "\n"; 
      cout << "- Second root " << root2;
    }
      
    else if (discriminant < 0){
        cout << "Complex roots";
    }

return 0;
}
