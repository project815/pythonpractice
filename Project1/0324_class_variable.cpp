//배열: 같은 타입의 집합.
//구조체나 클래스 : 다른 타입의 집합
//
//구조체는 사용자가 만들어 사용하는 자료형이다. int, char, double
//
//구조체는 기본으로 public접근지정자이고
//클래스는 기본으로 private접근지정자이다.
//
//
//public: 멤버는 공개 데이터 맴버로 클래스 내부 및 외부에서도 객체를 통해 접근이 가능합니다.
//private: 멤버는 비공개 데이터 멤버로 클래스 내부에서만 접근이 가능합니다.
//protected: 멤버는 보호된 데이터 멤버로 상속된 클래스 한정 접근 가능합니다.



	//클래스 멤버변수 예제코드
#include<iostream>
#include<string>
	using namespace std;
class Car //멤버변수 = property
{
public:
	string Carname;  //클래스 멤버변수
	int CarNumber;	//클래스 멤버변수
	float CarFuel; //클래스 멤버변수

private:
	char carChar = 'A';
};

int main(void)
{
	class Car truck; 	//객체

	//class에 있는 멤버변수를 사용. // 구조체와 동일하게 . 으로 접근
		truck.Carname = "Truck";
	truck.CarNumber = 3232;
	truck.CarFuel = 20.1;
	//출력.
		cout << "차이름 : " << truck.Carname << endl << "차번호 : " << truck.CarNumber << endl
		<< "차 연료 : " << truck.CarFuel << endl << endl;
}


//클래스 멤버함수 예제코드
