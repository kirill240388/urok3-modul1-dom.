#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	��������, ��� X �� ������ ����� A ������.����������, ������� ����� 1 �� � Y �� ���� �� ������.*/
		int a, x, y;
		a = 400;
		x = 2;
		y = a/2;
		cout << "1 �� ������ ����� " << y << "������"<<endl;
	}
	if (task == 2)
	{
		/*2.	������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B(����������� A �� ����� 0).*/
		double a, b, x, y;
		a = 4;
		b = 3;
		x = 1;
		y = a*x + b;
		cout << "y= " << y << endl;
	}

	if (task == 3)
		/*3.	� ������ ����� ������ N ������(N � �����).����� ���������� ������ �����, ��������� � ������ �����.*/
	{
		int n, m;
		cin>>n;
		m = n / 60;
		cout << "m= " << m << endl;
	}
	if (task == 4)
	{
		/*4.	�������� ������� ���������� V1 �� / �, ������� � V2 �� / �, ���������� ����� ���� S ��.���������� ���������� ����� ���� 
		����� T �����, ���� ���������� ������������� �������� ��������� ���� �����.������ ���������� ����� ������ �������� ����������
		���������� � ������ ����, ������������ ������������; ����� ���� = ����� � ��������� ��������*/
		int v1, v2, s, t, S;
		v1 = 1;
		v2 = 2;
		s = 20;
		t = 3;
		S =abs(s - (v1*t + v2*t));
		cout << "S= " << S << endl;
	}

	if (task == 5)
	{
		/*5.	���� ����� ������ �������������� ���������������.����� ��� ����� � ������� ������� �����������*/
		int a, b, c, s, v;
		a = 3;
		b = 2;
		c = 6;
		s = a*b;
		v = a*b*c;
		cout << "s= " << s <<endl;
		cout << "v= " << v <<endl;
	}
	if (task == 6)
	{
		/*6.	�������� ���������� �� ��������� ���� �����.��������� ��������� ���������� ���������� ����� ����.*/
		double x1, x2, y1, y2, s;
		x1 = 3; //(1-� ���������� ����� �)
		y1 = 4; //(2-� ���������� ����� �)
		x2 = 1; //(1-� ���������� ����� b)
		y2 = 2; //(2-� ���������� ����� b)
		s = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));//(s-���������� ����� ������� �� ������������ ���������)
		cout << "s= " << s << "\n";
	}

	if (task == 7)
	{
		/*7.	�������� ����� � ����� ����.���������� ��������� ��������� ����� ����*/
		double v, m, p;
		v = 8;
		m = 4;
		p = v / m;
		cout << "p= " << p << "\n";
	}
	if (task == 8)
	{
		/*8.	��������� ��������� :
		a.���������� �������� ������� z = x3 � 2.5xy + 1.87x2 + 1 ��� ����� ��������� � � y;
		b.���������� �������� ������� x = 3.56 a + b3 - 5.8b2 + 3.8a - 1.5 ��� ����� ��������� a � b.*/

		double x, y, z, a, b, c;
		cin >> x;
		cin >> y;
		cin >> a;
		cin >> b;
		z = pow(x, 3) - 2.5*x*y + pow(x, 2)*1.87 + 1;
		c = 3.56*a + pow(b, 3) - pow(b, 2)*5.88 + 3.8*a - 1.5;
		cout << "z=" << z << endl;;
		cout << "c=" << c << endl;
	}
	if (task == 9)

	{
		/*9.	���� ������� ��������.����� ��� ��������*/
		int a, p;
		a = 4;
		p = 4 * a;
		cout << "p= " << p << endl;
	}
	
	if (task == 10)
		/*10.	��� ������ ����������.����� �� �������.*/
	{
		int r, d;
		r = 3;
		d = 2 * r;
		cout << "d= " << d << endl;
	}




	system("pause");

}