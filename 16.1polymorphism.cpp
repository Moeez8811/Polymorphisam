#include <iostream>
using namespace std;

class Test      
{private:
int n;      
public: 
void in()        
{cout << "enter  number" << endl;
cin>>n;}
void out()      
{cout<<"the value of n="<<n<<endl;
}};
int main()
{Test *ptr;
ptr=new Test;
ptr->in();
ptr->out();
return 0;
}