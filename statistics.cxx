#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void randomnumbers( double* x, int N){

   for (int i = 0; i < N; i++){
   x[i] = rand() % 2;
   }
}

void mean(double& m, int N){

double p[N], sum = 0;
randomnumbers(p, N);

for (int i = 0; i < N; i++){ 
	sum += p[i];
}
m = sum/N;
}

void variance(double& var, int N){

double p[N], m, sum = 0;
randomnumbers(p, N);
mean(m, N);
	
for (int i = 0; i < N; i++){
	sum += pow((p[i]-m),2.0);
}
var= sum/N;
}

int main(){
   const int N = 100000;
   double p[N];
   double m, var;
  
   randomnumbers(p, N);
   mean(m, N);
   variance(var, N);
   
   cout << "Mean = " << m << endl;
   cout << "Variance = " << var << endl;

   return 0;
}