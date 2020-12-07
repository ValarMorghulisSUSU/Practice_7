#pragma once
//Задача 6. 
//Электронная очередь клиентов в аптеке.
//Ассортимент лекарственных средств, имеется в наличии или нет.
//Обновляется периодически.Очередь заявок.
//Периодический просмотр, удаление из очереди.

using namespace System;

//Класс лекарств
public ref class Medicines: IComparable <Medicines^> {
public:
	//АТРИБУТЫ

	//Название лекарства
	String^ med;
	//Цена
	double price;
	//Наличие
	bool availability;
	
	//КОНСТРУКТОРЫ

	//Конструктор по умолчанию
	Medicines();
	//Конструктор
	Medicines(String^, double, bool);
	//Конструктор копии
	Medicines(Medicines^);

	//ФУНКЦИИ

	//Сравнению по умолчанию, в алфавитном порядке
	virtual int CompareTo(Medicines^);
	//Меняем наличие
	void changeAvailability(void);
	//Делаем скидку
	void makeSale(double);
};

public ref class Orders: IComparable <Orders^> {
public:
	//АТРИБУТЫ

	//Номер заказа
	int number;
	//Фамилия И. О. клиента
	String^ name;
	//Номер телефона
	String^ telnumber;
	//Лекарство
	Medicines^ medicine;

	//КОНСТРУКТОРЫ

	//Конструктор по умолчанию
	Orders();
	//Конструктор
	Orders(String^, Medicines^, String^, int);
	//Конструктор копии
	Orders(Orders^, int);
	//Сранвению по умочанию по номерам заказа
	virtual int CompareTo(Orders^);
};

public value class myPredicate {
	int what;
	String^ wh;
public:
	//Конструктор предиката для поиска по номеру заказа
	myPredicate(int);
	//Конструктор предиката для поиска лекарст по названию
	myPredicate(String^);

	//Предикат для поиска по номеру заказа
	bool isMyOrder(Orders^);
	//Предикат для поиска по названию лекарства
	bool isMedicine(Medicines^);
};

//Просмотр в Grid'е заказов
void Look(System::Collections::Generic::List <Orders^>^, System::Collections::Generic::List <Medicines^>^, System::Windows::Forms::DataGridView^);
//Просмотр в Grid'е лекарств
void Look(System::Collections::Generic::List <Medicines^>^, System::Windows::Forms::DataGridView^);
//Чтение из файла Orders
void readFromFile(System::IO::StreamReader^, System::Collections::Generic::List <Orders^>^,
	System::Collections::Generic::Queue <Orders^>^);
//Чтение из файла Medicines
void readFromFile(System::IO::StreamReader^, System::Collections::Generic::List <Medicines^>^);
//Запись в файл Orders
void writeToFile(System::IO::StreamWriter^, System::Collections::Generic::List <Orders^>^);
//Запись в файл Medicines
void writeToFile(System::IO::StreamWriter^, System::Collections::Generic::List <Medicines^>^);