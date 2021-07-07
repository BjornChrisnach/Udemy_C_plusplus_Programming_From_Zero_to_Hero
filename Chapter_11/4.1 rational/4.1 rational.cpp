/// Program to implement Rational Numbers using
/// operator overloading
#include<iostream>
using namespace std;
class rational
{
	private:
		int num,den;
	public:
		rational()
		{
			num=0;
			den=1;
		}
		rational(int a,int b)
		{
				num=a;
				den=b;
		}
		void getdata(int,int);
		rational operator +(rational);
		rational operator -(rational);
		rational operator *(rational);
		rational operator /(rational);
		void display();
};
void rational::getdata(int x,int y)
{
	num=x;
	den=y;
	cout<<"INPUT\n";
	cout<<"\n"<<num<<"\n-\n";
	cout<<den<<endl;
}
rational rational::operator +(rational r)
{
	rational temp;
	temp.num=(num*r.den)+(den*r.num);
	temp.den=(den*r.den);
	return temp;
}
rational rational::operator -(rational s)
{
	rational tem;
	tem.num=(num*s.den)-(den*s.num);
	tem.den=(den*s.den);
	return tem;
}
rational rational::operator *(rational r)
{
	rational temp;
	temp.num=(num*r.num);
	temp.den=(den*r.den);
	return temp;
}
rational rational::operator /(rational s)
{
	rational tem;
	tem.num=(num*s.den);
	tem.den=(den*s.num);
	return tem;
}
void rational::display()
{
	cout<<"RESULT IS :";
		cout<<"\n"<<num<<"\n--\n";
	cout<<den<<endl;
}
main()
{
	rational a,b,c;
	a.getdata(2,3);
	b.getdata(4,5);
	c=a+b;
	cout<<"ADDITION\n";
	c.display();
	c=a-b;
	cout<<"SUBSTRACTION\n";
	c.display();
	c=a*b;
	cout<<"MULTIPLICATION\n";
	c.display();
	c=a/b;
	cout<<"DIVISION\n";
	c.display();
}



