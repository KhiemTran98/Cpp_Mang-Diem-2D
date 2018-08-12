class CDiem2D
{
private:
	double x, y;
public:
	CDiem2D();
	CDiem2D(int x, int y);
	~CDiem2D();
	void Nhap();
	void Xuat();
	double TinhKhoangCach(CDiem2D* x);
};