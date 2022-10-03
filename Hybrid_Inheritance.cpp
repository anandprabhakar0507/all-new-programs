/*  C++ Program to demonstrate an Example of Hybrid Inheritance  */

#include<iostream>
using namespace std;
class stu
{
protected:
        int rno;
public:
        void get_no(int a)
{
rno=a;
        }
void put_no(void)
        {
                cout<<"Roll no :: "<<rno<<"\n";
        }
};
class test:public stu
{
        protected:
        float part1,part2;
public:
  void get_mark(float x,float y)
  {
        part1=x;
        part2=y;
  }
void put_marks()
{
 cout<<"Marks obtained :\n"<<"part1 = "<<part1<<"\n"<<"part2 = "<<part2<<"\n";
}
};
class sports
{
        protected:
        float score;
public:
 void getscore(float s)
 {
        score=s;
 }
void putscore(void)
{
        cout<<"Sports : "<<score<<"\n";

}
};

class result: public test, public sports
{
        float total;
public:
        void display(void);
};
void result::display(void)
{
        total=part1+part2+score;
        put_no();
        put_marks();
        putscore();
        cout<<"Total Score = "<<total<<"\n";
}
int main()
{

        result stu;
        stu.get_no(123);
        stu.get_mark(27.5,33.0);
        stu.getscore(6.0);
        stu.display();
        return 0;
}
