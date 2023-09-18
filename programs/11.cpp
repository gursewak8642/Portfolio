#include<iostream> 
 using namespace std; 
 
// defining a class to represent a complex number 
 class complex 
 
{ 
 
   // member data to store the complex number parts 
 private: 
 
       // real part 
                float r; 
 
                  // imaginary part 
                float i; 
 
public: 
 
       // set the values 
                void set(float real, float img)  
               { 
 
                               r = real; 
                                i = img; 
 
               } 
 
       // member function to sum the self and one another complex number 
 
               complex sum(complex c)  
       { 
                complex t;  

               t.r = r + c.r; 
 
               t.i = i + c.i;                 
			   return t; 
 
       } 
 
       // function to print the complex number 
                void disp() 
 
                  { 
 
                      // since the imaginary number multiplicant of some real number  
                      // and thus when 1 is multiplied with any number will remain sam e                
					   if (i == -1) { 
                cout<< r << " + -i" <<endl; 
 
                      } 
                else if (i == 1) { 
                cout<< r << " + i" <<endl; 
 
                      } 
 
               else if (i == 0) { 
 
                          // since imaginary part is zero so only real part will be av ailable             
						      cout<< r <<endl; 
 
                      } 
                else { 
 
               cout<< r << " + " <<i<< "i" <<endl; 
 
                      } 
 
       } 
 
};  
int main() 
 
{                 complex c1, c2, c3; 
                c1.set(2.5, 3.5); 
                c2.set(1.5, 5.5); 
               c3 = c1.sum(c2); 
                cout<<"Complex Number 1 = "; 
                c1.disp(); 
                cout<<"Complex Number 2 = "; 
                c2.disp(); 
                cout<<"Complex Number 3 = "; 
                c3.disp(); 
                return 0; 
 
} 

