// To compile a C++ program use g++ compiler and not gcc compiler 
/* To create an executable code (object code) with names other than 'a.out' use '$ g++ filename.cpp -o exefilename' */
//Note that cin and cout is not recognised by the compiler unless you include the line "using namespace std;"
//Also note that the headerfile here is <iostream> and not <iostream.h>
#include<iostream>
using namespace std;	
	class stu
	{
		private : char usn[20];
			  char name[20]; 
			  int m1,m2,m3,m4,m5,m6,tot; 
			  float per;
		public : void input();
			 void output();
			 void compute();
	};
	void stu::input()
	{
		cout<<"Enter the usn \n";
		cin>>usn;
		cout<<"Enter the name \n";
		cin>>name;
		cout<<"Enter marks in 6 subjects \n";
		cin>>m1>>m2>>m3>>m4>>m5>>m6;
	}
	void stu::compute()
	{
		tot = m1+m2+m3+m4+m5+m6;
		per = tot/6;
	}
	void stu::output()
	{
		cout<<"The usn is "<<usn;
		cout<<"\nThe name is "<<name;
		cout<<"\nThe total is "<<tot;
		cout<<"\nThe percentage is "<<per<<"\n";
	}
	int main()
	{
		stu a;
		a.input();
		a.compute();
		a.output();
		return(0);
	}
