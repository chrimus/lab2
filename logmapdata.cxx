#include <iostream>

using namespace std;
int main(){
  
  for( double r= 0.0; r<4.1; r+=0.1){
    
    double x_i = 0.5;
    
    //calculate x_0 to x_19 without printing them
    for(int i=1; i<20; i++){
      //calculate i.th value of the series
      x_i= r*x_i*(1-x_i);
    }  
    
    //calculate x_20 to x_100 and print them 
    for(int i=20; i<=100; i++){
      //calculate i.th value of the series
      x_i= r*x_i*(1-x_i);
      cout << i << "\t" << x_i << "\t"<< r << "\t" << endl;
    }
    
  }
  return 0;
}