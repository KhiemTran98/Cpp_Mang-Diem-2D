#include"CDiem2D.h"
class CMangDiem2D
{
private:
	int n;
	CDiem2D* *a;
public:
	~CMangDiem2D();
	void Nhap();
	CDiem2D* TimDiemXaNhat();
};