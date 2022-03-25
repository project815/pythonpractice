#include<iostream>
#include<string>

using namespace std;

class Car2 //멤버함수 = method
{
public:
	void CarPrint(string Carname, int CarNumber, float CarFuel) //클래스 멤버함수.
	{
		if (CarFuel > 50)
		{
			cout << "연료 초과" << endl << endl;
			return;
		}
		cout << "차이름 : " << Carname << endl << "차번호 : " << CarNumber << endl
			<< "차 연료 : " << CarFuel << endl << endl;
	}
};

int main(void)
{
	Car2 SUV;	//객체

	//클래스 Car2의 멤버함수 호출.
	SUV.CarPrint("SUV", 3233, 49.2f);

}

