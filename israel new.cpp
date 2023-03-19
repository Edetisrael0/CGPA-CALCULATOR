#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
	system ("cls");
	int input;
	cout<<"::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"CGPA Calculator (Developed by Edet Israel)"<<endl;
	cout<<"::::::::::::::::::::::::::::::::::::::::::\n"<<endl;
	cout<<"MENU:"<<endl;
	cout<<"\n1. Calculate GPA(Grade Point Average)"<<endl;
	cout<<"\n2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
	cout<<"\n3. Method that is used in calculating GPA and CGPA"<<endl;
	cout<<"\n4. Exit"<<endl;
	cout<<"\n:::::::::::::::::::::::::::"<<endl;
	sub:
		cout<<"Select your Choice(MENU):"<<endl;
		cin>>input;
		switch(input)
		{
			case 1:
				calculateGPA();
				break;
				
			case 2:
				calculateCGPA();
				break;
				
			case 3:
				method();
				break;
				
			case 4:
				exit(EXIT_SUCCESS);
				break;
					
			default:
				cout<<"You have entered wrong input. Check and try again!\n"<<endl;
				goto sub;
				break;
		}
}
void calculateGPA()
{
	int p;
	system("cls");
	cout<<"::::::::::::::::: Calculating your GPA :::::::::::::::::"<<endl;
	cout<<"How many course(s) grade do you want to calculate? :\n";
	cin>>p;
	
	float grade [p];
	float unit [p];
	
	cout<<endl;
	for(int i=0;i<p; i++)
	{
		cout<<"\nEnter the grade for the course "<<i+1<<":";
		cin>>grade[i];
		cout<<endl;
		
		cout<<"\nEnter the unit for the course"<<i+1<<":";
		cin>>unit[i];
		cout<<":::::::::::::::::::::::::::::::::::::::::::::::::\n\n"<<endl;
		
	}
	float sum=0;
	float tot;
	for(int j=0;j<p;j++)
	{
		tot=grade[j]*unit[j];
		sum=sum+tot;
	}
	
	float totGr=0;
	for(int k=0;k<p;k++)
	
	{
		totGr=totGr+unit[k];
	}
	
	cout<<"\n\n\n\nTotal units: "<<sum<<". Total Grades: "<<totGr<<". Total GPA: "<<sum/totGr<<"."<<endl;
	
	sub:
		int inmenu;
		cout<<"\n\n\n\n1. Calculate Again"<<endl;
		cout<<"2. Go back to Menu"<<endl;
		cout<<"3. Exit \n\n\n"<<endl;
		cout<<"Your Input: " <<endl;
		cin>>inmenu;
		
		switch(inmenu)
		{
			case 1:
				calculateGPA();
				break;
			case 2:
				main();
				break;
			case 3:
				exit(EXIT_SUCCESS);
			default:
				cout<<"\n\n\nYou have entered the wrong input! Please check and choose again!!"<<endl;
				goto sub;
		}
}
void calculateCGPA()
{
	system("cls");
	int q;
	cout<<":::::::::: Calulating your CGPA :::::::::::::::::\n"<<endl;
	cout<<"How many semester results do you want to calculate? :";
	cin>>q;
	cout<<"\n\n\n"<<endl;
	float semrs[q];
	int i;
	
	for(i=0;i<q;i++)
	{
		cout<<"Enter Semester"<<i+1<<" Result(GPA): ";
		cin>>semrs[i];
		cout<<"\n\n"<<endl;
	}
	float semtot=0;
	for(int j=0;j<q;j++)
	{
		semtot=semtot+semrs[j];
	}
	cout<<":::::::::::: Your CGPA is "<<semtot/q<<"::::::::::::::::"<<endl;
	
	sub:
		int inmenu;
		cout<<"\n\n\n\n1. Calculate Again"<<endl;
		cout<<"2. Go back to Menu"<<endl;
		cout<<"3. Exit \n\n\n"<<endl;
		cout<<"Your Input: " <<endl;
		cin>>inmenu;
		
		switch(inmenu)
		{
			case 1:
				calculateCGPA();
				break;
			case 2:
				main();
				break;
			case 3:
				exit(EXIT_SUCCESS);
			default:
				cout<<"\n\n\nYou have entered the wrong input! Please check and choose again!!"<<endl;
				goto sub;
		}
}

void method()
{
	system("cls");
	cout<<":::::::::::::::  Method that is used in calculating GPA and CGPA ::::::::::::::::\n\n\n"<<endl;
	cout<<" GPA= Sum of (Grade*Unit) / total of grades \n\n"<<endl;
	cout<<"CGPA= Sum of GPA / number of semesters "<<endl;
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n"<<endl;
	
		sub:
		int inmenu;
		cout<<"1. Go back to Menu"<<endl;
		cout<<"2. Exit \n\n\n"<<endl;
		cout<<"Your Input: " <<endl;
		cin>>inmenu;
	
	switch(inmenu)
		{
			case 1:
				main();
				break;
			case 2:
				exit(EXIT_SUCCESS);
			default:
				cout<<"\n\n\nYou have entered the wrong input! Please check and choose again!!"<<endl;
				goto sub;
		}
};


