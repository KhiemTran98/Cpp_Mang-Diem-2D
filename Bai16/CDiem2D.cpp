#include<iostream>
#include<conio.h>
#include"CDiem2D.h"
using namespace std;
CDiem2D::CDiem2D()
{
	x = y = 0;
}
CDiem2D::CDiem2D(int x, int y)
{
	this->x = x;
	this->y = y;
}
CDiem2D::~CDiem2D() {}
void CDiem2D::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}
void CDiem2D::Xuat()
{
	cout << "(" << x << ", " << y << ")";
}
double CDiem2D::TinhKhoangCach(CDiem2D* B)
{
	return sqrt(pow(this->x - B->x, 2) + pow(this->y - B->y, 2));
}