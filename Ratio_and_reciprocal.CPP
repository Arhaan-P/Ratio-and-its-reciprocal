#include <iostream.h>
#include <conio.h>
class ratio{
	int n,d;
	public:
	void assign() {
		cout<<"Enter numerator and denominator\n ";
		cin>>n>>d;
	}
	void invert() {
		int  t=n;
		     n=d;
		     d=t;
	}
	void print() {
		cout<<n<<"/"<<d<<"= ";
	}
	double convert() {
		return (double)n/d;
	}
};
void main() {
	clrscr();
	ratio R;
	R.assign();
	R.print();
	cout<<R.convert()<<endl;
	R.invert();
	R.print();
	cout<<R.convert();
	getch();
}