#include <iostream>
#include <string>
using namespace std;
//배열 : 같은 타입의 집합.
//구조체나 클래스 : 다른 타입의 집합

//구조체는 사용자가 만들어 사용하는 자료형이다. int, char, double

//구조체는 기본으로 public접근지정자이고
//클래스는 기본으로 private접근지정자이다.




class Game //클래스 선언
{
public: //접근지정자 public == 외부에서 클래스 안에 있는 멤버변수 접근 가능
	string gameName; //클래스 멤버 변수
	int gameNumber = 0; //클래스 멤버 변수
	float gameScore = 0; //클래스 멤버 변수

private: //접근지정자 private == 해당 클래스 내부 멤버 함수에서만 사용, 외부 접근 불가능
	char gameChar = 'A';
};

class Game2
{
public:
	void gamePrint(string gameName, int gameNumber, float gameScore) //클래스 내부에 멤버함수 선언
	{
		if (gameScore > 100 || gameScore < 0)	//멤버함수 안에 조건문으로 매개변수 값을 제한 가능
		{
			cout << "게임점수를 잘못 입력하셨습니다." << endl << endl;
			return;
		}
		cout << "게임이름 : " << gameName << endl << "게임넘버 : " <<
			gameNumber << endl << "게임점수 : " << gameScore << endl << endl;
	}
};

int main(void)
{
	Game game1; //객체
	Game game2; //같은 Game클래스에 game2라는 변수 정의. 클래스를 각각 객체로 만들어 사용 가능
	Game2 gameA;
	Game2 gameB;

	//class에 있는 멤버변수를 사용하려면 구조체와 동일하게 .으로 멤버에 접근
	game1.gameName = "GoodGame"; 
	game1.gameNumber = 1;
	game1.gameScore = 95.3;

	//game1.gameChar = 'B';  //private으로 지정된 gameChar변수에 접근 불가
	game2.gameName = "BadGame";
	game2.gameNumber = 2;
	game2.gameScore = 54.6;

	cout << "게임이름 : " << game1.gameName << endl << "게임넘버 : " <<
		game1.gameNumber << endl << "게임점수 : " << game1.gameScore << endl << endl;

	cout << "게임이름 : " << game2.gameName << endl << "게임넘버 : " <<
		game2.gameNumber << endl << "게임점수 : " << game2.gameScore << endl << endl;


	gameA.gamePrint("Goodgame2", 1, 97.5); //멤버함수의 매개변수 값을 입력하여 함수 호출
	gameB.gamePrint("Badgame2", 2, 55.5);
}
