#include <iostream>
using namespace std;
class N
{
private:
	int A;
	static int B;
public:
	N(int a)
	{
		A = a; B += a;
	}
	static void f1(N m);
	void get_0(int b);
};

void N::f1(N m)
{
	cout << "A=" << m.A << endl;
	cout << "B=" << B << endl;
}

void N::get_0(int b)
{
	B = 0;
}

int N::B = 0;

int main()
{
	N A(5), B(9);
	N::f1(A);
	N::f1(B);

	cout << "-------------------" << endl;

	A.get_0(0); B.get_0(0);
	N P(5); 
	N::f1(P);
	N Q(9);
	N::f1(Q);


}