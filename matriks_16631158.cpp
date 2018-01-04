#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	cout <<"\n MATRIKS X : \n\n";
	double ac[3][5]= 
	{
	{4,4,5,3,3}, {3,3,4,2,3}, {5,4,2,2,2}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++)
		{
			cout<<ac[i][j]<<" | ";
		}
			cout<<endl;
	}
	
	cout<<"\n MATRIKS R : \n\n";
	double mc[5];
	for(int i=0;i<5;i++) {
		mc[i+1]=max(ac[0][i],max(ac[1][i],ac[2][i]));
	}
	double Rac[3][5]=
	{
	{
	 (ac[0][0]/mc[1]), 
	 (ac[0][1]/mc[2]), 
	 (ac[0][2]/mc[3]), 
	 (ac[0][3]/mc[4]), 
	 (ac[0][4]/mc[5])
	},
	{
	 (ac[1][0]/mc[1]), 
	 (ac[1][1]/mc[2]), 
	 (ac[1][2]/mc[3]), 
	 (ac[1][3]/mc[4]), 
	 (ac[1][4]/mc[5])
	},
	{
	 (ac[2][0]/mc[1]), 
	 (ac[2][1]/mc[2]), 
	 (ac[2][2]/mc[3]), 
	 (ac[2][3]/mc[4]), 
	 (ac[2][4]/mc[5])
	 }
	};
	  
	
}

