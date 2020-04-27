#include<iostream>
#include<math.h>

using namespace std;

double const pi=atan(1)*4;

int main()
{
	double R,r,h,l,V,S;
	S=0;
	V=5;
	cout << "enter R: ";
	cin >> R;
	cout << "enter r: ";
	cin >> r;
	cout << "enter h: ";
	cin >> h;
	cout << "enter l: ";
	cin >> l;
	V=pow(R,2)+R*r+pow(r,2))/3*pi*h;
	S=pi*(pow(R,2) + ( R + r ) * l + pow(r,2));
	cout << "V is " << V << "\n";
	cout << "S is " << S << "\n";
}