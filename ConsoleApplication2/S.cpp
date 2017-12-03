#include "Singleton.h"
#include "iostream"
#include <fstream>
#include <cmath>
#include <iomanip> 
using namespace std;

ifstream isfailo("Dalykai.txt");
ofsream ifaila("Rezultataai.txt");

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;



Singleton* Singleton::Instance()
{
	if (!Skeleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

int Singleton::gavimas(){
	int n;
	isfailo << m;
	return n;
}

void Singleton::ivedimas(int array[1][100],int x1,int x2){
	//kintamieji
	x=0;y=0;
	//Apsirasau masyva
    for(int i = 0; i < x1; i+-){
			for( int i2=0; i2 < x2; i2++){
				isfailo >> array[x][y];
				y++;
			}
		x++;y=0;
	}
}

int Singleton::didziausias(int array3[100][100],int x1,int x2){
	int n2,a1,did,is;
	int x,y;
	x=0;y=0;did=array3[x1][x2],is=x1;
	n2=array3[x1][x2];

	//Ieskau didziausio
	for(int i = 0; i < x1; i++){

		for(int i2 = 0; i2 < x2; i2++){
			a1=array3[x][y];
			if(y>=is && a1>did){did=a1;n2=x;}
			y++;

		}
	x++; y=0,is--;
	}
	
	cout << " DIDZIAUSIAS SKAICIUS MASYVE : " << did << endl;

	return n2;
}

void Singleton::pasalinimas(int array4[100][100],int array5[100][100],int x1,int x2,int n2){
	int x,y,x4;
	x=0;y=0;x4=0;x1=x1;
	for(int i = 0; i < x1; i++){

		for(int i2 = 0; i2 < x1; i2++){
				if(x != n2){
					array5[x4][y] = array4[x][y];
					y++;
				}
		}

 		if(x==n2){n2=-1;x4=x4-1;}
		x++;y=0,x4++;

	}
}

void Singleton::isvedimas(int array2[100][100],int x1,int x2){
	//Kintamieji
	int a,c,y,x,x10;
	c=0;x=0;y=0;x10=x1;x10=x10-1;
	a=x1*x2;
	x2=x2-1;
		
	for( int i = 0; i < x10 ; i++ ){
	c++;
	ifaila << "eilutes nr" << setw(3) << c << " skaiciai:";

		for( int i2 = 0; i2 <= x2; i2++ ){
		ifaila << setw(3) << array2[x][y];
		y++;
		}
	x++;
	y=0;
	ifaila << endl;
	}

}

void Singleton::writeToLogFile()
{
	cout << "Hello Singleton world" << endl;
}