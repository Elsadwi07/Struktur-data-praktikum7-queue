#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char kata[35]="ST3 TELKOM PURWOKERTO";
	int inputkata;
	int i;
	
	cout<<"===STACK MEMBALIKKAN KATA===\n";
	
	cout<<"Kata yang dimasukkan adalah: "<<kata<<endl;
	inputkata=strlen (kata) ;
	cout<<"kata dibalik menjadi : ";
	for(i=inputkata;i>=1;i--)
	{
		char stack=kata[i-1];
		cout<<stack;
	}
getch () ;
}
