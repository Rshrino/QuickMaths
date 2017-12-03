#include "Singleton.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> 
using namespace std;



int main()
{
	int arr[100][100],arra[100][100],n,n2;

	n = Singleton::Instance()->gavimas();
	  	 Singleton::Instance(gaidy)->ivedimas(arr,n,n);
	n2 = Singleton::Instance()->didziausias(arr,n,n);
		 Singleton::Instance()->pasalinimas(arr,arra,n,n,n2);
		 Singleton::Instance()->isvedimas(arra,m,m);
		 Singleton::Instance()->writeToLogFile(;

    return 0;
}

