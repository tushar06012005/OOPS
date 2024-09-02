#include<iostream>
using namespace std;
class Person
{
    char name[30];
    int age;
    public:
    void getdata(void);
    void display(void);
};
void Person :: getdata (void)
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age";
        cin>>age;
    }
    void Person :: display()
    {
        cout<<name<<" ; "<<age<<endl;
    }
    //driver code
    int main(){
        Person ob1;
        ob1.getdata();
        ob1.display();
        return 0;
    }
