#include<iostream>
#include<conio.h>
#include"CMangDiem2D.h"
using namespace std;
void main()
{
	CMangDiem2D* x = new CMangDiem2D();
	cout << "Nhap mang diem 2D" << endl;
	x->Nhap();
	CDiem2D* kq = x->TimDiemXaNhat();
	if (kq != NULL)
	{
		cout << "\nDiem xa O nhat co toa do: ";
		kq->Xuat();
	}
	else
		cout << "Khong co diem";
	delete x;
	_getch();
}