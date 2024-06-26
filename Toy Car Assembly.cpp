#include<iostream>
using namespace std;
int main ()
{
int wheels,man,main_body,part_1,part_2,part_3;

cout << "Enter number of wheels";
cin>> wheels;

cout <<"Enter number of man";
cin >> man;

cout << "Enter number of main body:";
cin >> main_body;

part_1=wheels/4;     		//4 wheels for 1 car
part_2=man/2;			//2 men for 1 car
part_3=main_body;		//1 body for 1 car
				//lowest value will tell about no. of cars
if((part_1<part_2)&&(part_1<part_3))
{
cout<< "Car manufactured"<<part_1<<endl;
}
					
else if((part_2<part_1)&&(part_2<part_3))
{
cout<< "Car manufactured"<<part_2<<endl;
}

else
{
cout<< "Car manufactured"<<part_3<<endl;
}

}
