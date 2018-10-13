#include<iostream.h>
#include<conio.h>
#include<math.h>

void herons() {
   float a, b, c, Perimeter, s, Area;
  
   cout<<"\nPlease Enter three sides of triangle\n";
   cin>>a>>b>>c;
 
   Area = sqrt(s*(s-a)*(s-b)*(s-c));
   
   cout<<"\n Area of triangle = "<<Area<<"\n";
  }
  
void basic() {
   float base, height, area;

   printf("Enter base of the triangle: ");
   scanf("%f", &base);
   printf("Enter height of the triangle: ");
   scanf("%f", &height);
   
   area = (base * height) / 2;
   
   cout<<"Area of the triangle = "<<area<<"\n";
    }
    
    
void main()
{
  cout<<"Area of triangle using heron's formula";
  herons();
  cout<<"Area of triangle using basic/other formula";
  basic();
}
