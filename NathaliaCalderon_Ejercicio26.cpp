#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename);

int main(){
  float omega=0.1;
  
  float omega=1.0;
  solve_equation_euler(0.0, 10000.0, omega/2, omega, "euler.dat");
  solve_equation_rk4(0.0, 10000.0, omega/2, omega, "rk4.dat");
  solve_equation_leapfrog(0.0, 10000.0, omega/2, omega, "leapfrog.dat");
   
  
  return 0;
}
void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename){
  float t=t_init;
  float z=1.0;
  float z=0.0;
  float z_antes = 0.0;  
   
  
  ofstream outfile;
  outfile.open(filename);

  while(t<t_end){    
    
    outfile << t << " " << y << " "<< z << endl;
 
    z = z - delta_t * omega * omega * y;
    
    y = y + delta_t * z_antes;
      
    z_antes = z
        
    t = t + delta_t;
  }
  outfile.close();
}


void solve_equation_rk(float t_init, float t_end, float delta_t, float omega, string filename){
   
    
  float t=t_init;
  float z=1.0;
  float z=0.0;
  float y_viejo = 0.0;  
  float = - omega* omega
    
   
  ofstream outfile;
  outfile.open(filename);
    
      
  while(t<t_end){
     
      
    f0 = 
    
    f1 = f0 + y_viejo * detla_t/2 * f
        
    f2 = f1 + y_viejo * detla_t/2 * f

    f3 = f2 + y_viejo * detla_t/2 * f
    
    f = f0/6 + f1/3 + f2/3 + f2/6

  }

   outfile.close();
    
}
    
    
    
void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename){
    
  float t=t_init;
  float z=1.0;
  float z=0.0;
  float z_antes = 0.0;  

  ofstream outfile;
  outfile.open(filename);

  while(t<t_end){    
    
    outfile << t << " " << y << " "<< z << endl;
 
    z = z - delta_t/2 * omega * omega * y;
    
    y = y + delta_t * z;
      
    z = z - delta_t/2 * omega * omega * y;
        
    t = t + delta_t;
  }
  outfile.close();

}
    
    
    
    
    
    