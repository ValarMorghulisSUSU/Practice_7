#pragma once
//������ 6. 
//����������� ������� �������� � ������.
//����������� ������������� �������, ������� � ������� ��� ���.
//����������� ������������.������� ������.
//������������� ��������, �������� �� �������.

using namespace System;

//����� ��������
public ref class Medicines: IComparable <Medicines^> {
public:
	//��������

	//�������� ���������
	String^ med;
	//����
	double price;
	//�������
	bool availability;
	
	//������������

	//����������� �� ���������
	Medicines();
	//�����������
	Medicines(String^, double, bool);
	//����������� �����
	Medicines(Medicines^);

	//�������

	//��������� �� ���������, � ���������� �������
	virtual int CompareTo(Medicines^);
	//������ �������
	void changeAvailability(void);
	//������ ������
	void makeSale(double);
};

public ref class Orders: IComparable <Orders^> {
public:
	//��������

	//����� ������
	int number;
	//������� �. �. �������
	String^ name;
	//����� ��������
	String^ telnumber;
	//���������
	Medicines^ medicine;

	//������������

	//����������� �� ���������
	Orders();
	//�����������
	Orders(String^, Medicines^, String^, int);
	//����������� �����
	Orders(Orders^, int);
	//��������� �� �������� �� ������� ������
	virtual int CompareTo(Orders^);
};

public value class myPredicate {
	int what;
	String^ wh;
public:
	//����������� ��������� ��� ������ �� ������ ������
	myPredicate(int);
	//����������� ��������� ��� ������ ������� �� ��������
	myPredicate(String^);

	//�������� ��� ������ �� ������ ������
	bool isMyOrder(Orders^);
	//�������� ��� ������ �� �������� ���������
	bool isMedicine(Medicines^);
};

//�������� � Grid'� �������
void Look(System::Collections::Generic::List <Orders^>^, System::Collections::Generic::List <Medicines^>^, System::Windows::Forms::DataGridView^);
//�������� � Grid'� ��������
void Look(System::Collections::Generic::List <Medicines^>^, System::Windows::Forms::DataGridView^);
//������ �� ����� Orders
void readFromFile(System::IO::StreamReader^, System::Collections::Generic::List <Orders^>^,
	System::Collections::Generic::Queue <Orders^>^);
//������ �� ����� Medicines
void readFromFile(System::IO::StreamReader^, System::Collections::Generic::List <Medicines^>^);
//������ � ���� Orders
void writeToFile(System::IO::StreamWriter^, System::Collections::Generic::List <Orders^>^);
//������ � ���� Medicines
void writeToFile(System::IO::StreamWriter^, System::Collections::Generic::List <Medicines^>^);