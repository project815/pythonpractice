//�迭: ���� Ÿ���� ����.
//����ü�� Ŭ���� : �ٸ� Ÿ���� ����
//
//����ü�� ����ڰ� ����� ����ϴ� �ڷ����̴�. int, char, double
//
//����ü�� �⺻���� public�����������̰�
//Ŭ������ �⺻���� private�����������̴�.
//
//
//public: ����� ���� ������ �ɹ��� Ŭ���� ���� �� �ܺο����� ��ü�� ���� ������ �����մϴ�.
//private: ����� ����� ������ ����� Ŭ���� ���ο����� ������ �����մϴ�.
//protected: ����� ��ȣ�� ������ ����� ��ӵ� Ŭ���� ���� ���� �����մϴ�.



	//Ŭ���� ������� �����ڵ�
#include<iostream>
#include<string>
	using namespace std;
class Car //������� = property
{
public:
	string Carname;  //Ŭ���� �������
	int CarNumber;	//Ŭ���� �������
	float CarFuel; //Ŭ���� �������

private:
	char carChar = 'A';
};

int main(void)
{
	class Car truck; 	//��ü

	//class�� �ִ� ��������� ���. // ����ü�� �����ϰ� . ���� ����
		truck.Carname = "Truck";
	truck.CarNumber = 3232;
	truck.CarFuel = 20.1;
	//���.
		cout << "���̸� : " << truck.Carname << endl << "����ȣ : " << truck.CarNumber << endl
		<< "�� ���� : " << truck.CarFuel << endl << endl;
}


//Ŭ���� ����Լ� �����ڵ�
