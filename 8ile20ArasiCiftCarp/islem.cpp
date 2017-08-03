#include <iostream>
using namespace std;


void main()
{
	int  toplam=1;

	for(int i=8 ;i<21; i++){
	if(i%2==0)
		toplam=toplam*i;
	}

	cout <<toplam<<endl;
	system("pause");

}