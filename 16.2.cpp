#include <iostream>
using namespace std;

class Person
{
private:
char name[50];      
public: 
void get()        
{cout << "enter your  name" << endl;
cin>>name;}
void show()      
{cout<<"Your name ="<<name<<endl;
}};
int main()
{Person *ptr[5];
int i;
for(int i=0;i<5;i++)
{ptr[i]=new Person;
ptr[i]->get();
}
for(int i=0;i<5;i++)
ptr[i]->show();
return 0;
}