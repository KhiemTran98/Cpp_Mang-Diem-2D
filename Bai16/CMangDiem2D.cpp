#include<iostream>
#include<conio.h>
#include"CMangDiem2D.h"
using namespace std;
CMangDiem2D::~CMangDiem2D()
{
	for (int i = 0; i < n; i++)
		delete a[i];
	delete[] a;
}
void CMangDiem2D::Nhap()
{
	cout << "Nhap so luong mang: ";
	cin >> n;
	a = new CDiem2D*[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap diem thu " << i + 1 << endl;
		a[i] = new CDiem2D();
		a[i]->Nhap();
	}
}
CDiem2D* CMangDiem2D::TimDiemXaNhat()
{
	if (n <= 0)
		return NULL;
	CDiem2D* Q = a[0];
	CDiem2D* O = new CDiem2D(0, 0);
	for (int i = 0; i < n; i++)
	{
		double OI = O->TinhKhoangCach(a[i]);
		double OQ = O->TinhKhoangCach(Q);
		if (OI > OQ)
			Q = a[i];
	}
	return Q;
}