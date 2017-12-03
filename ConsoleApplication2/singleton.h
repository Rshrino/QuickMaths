#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip> 

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	void ivedimas(int array[100][100],int x1,int x2);
	int didziausias(int array3[100][100],int x1,int x2);
	void pasalinimas(int array4[100][100],int array5[100][100],int x1,int x2,int n2);
	void isvedimas(int array2[100][100],int x1,int x2);
	int gavimas();
private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};
