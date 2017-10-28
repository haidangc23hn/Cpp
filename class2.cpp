#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

class hinh
{
public:
	//ban kinh duoc tao
	int setbankinh(int bankinhnhap)
	{
		bankinh = bankinhnhap;
		return bankinh;
	};

	//chieu cao duoc tao
	int setchieucao(int chieucaonhap)
	{
		chieucao = chieucaonhap;
		return chieucao;
	}

	//khai bao thong so
protected:
	int bankinh;
	int chieucao;
};


//class tinh the tich
class tinhthetich : public hinh
{
public:
	double tinhthetich1(double pi2)
	{
		pi = pi2;
		int thetich;
		thetich = pi*bankinh*bankinh*chieucao / 3;
		return thetich;
	};
private:
	double pi;
};

//class chi phi
class chiphi : public tinhthetich
{
public:
	chiphi(double thetich)
	{
		tongchiphi = thetich * 500000;
	}
public:
	double getthanhtien()
	{
		return tongchiphi;
	}
private:
	double tongchiphi;
};

int main(void)
{
	int bankinh, chieucao;
	cin >> bankinh >> chieucao;

	double thetich;

	tinhthetich hinhtt;
	hinhtt.setbankinh(bankinh);
	hinhtt.setchieucao(chieucao);

	thetich = hinhtt.tinhthetich1(3.14);
	cout << "The tich: " << endl << setprecision(1) <<thetich << endl;

	chiphi thanhtien(thetich);
	double aaa;
	aaa = thanhtien.getthanhtien();
	cout << "Chi phi: " << endl << dec << aaa << endl;

	system("pause");
}



