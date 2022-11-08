//  Name: Femi-Awoyale Toluwalope    J00966835    8TH November 2022

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    int root1, root2;
    double discriminant;
    
    cin >> a >> b >> c;
  
    discriminant = pow(b,2) - 4 * a * c;
    root1 = (-b + sqrt(discriminant))/(2 * a);
    root2 = (-b - sqrt(discriminant))/(2 * a);

    if (discriminant == 0){
        cout << "The single root is " << root1  << "\n";
    }
      
    else if(discriminant > 0){
      cout << "Two real roots\n";
      cout << "- First root " << root1 << "\n"; 
      cout << "- Second root " << root2 << "\n";
    }
      
    else if (discriminant < 0){
        cout << "Complex roots\n";
    }

return 0;
}
