#pragma once
#include "Classes.h"

namespace WindowsFormTemplate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		System::Collections::Generic::List <Medicines^>^ MedBase;
		System::Collections::Generic::List <Orders^>^ OrdBase;
		System::Collections::Generic::Queue <Orders^>^ QOrd;
		int numbers;
		StreamReader^ SR;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;



	private: System::Windows::Forms::DataGridView^ dataGridViewMed;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
		   StreamWriter^ SW;
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->QOrd = gcnew System::Collections::Generic::Queue <Orders^>(1);
			this->MedBase = gcnew System::Collections::Generic::List <Medicines^>();
			this->OrdBase = gcnew System::Collections::Generic::List <Orders^>();
			this->numbers = 0;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridViewOrd;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewOrd = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridViewMed = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOrd))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMed))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewOrd
			// 
			this->dataGridViewOrd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewOrd->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column7,
					this->Column4, this->Column8, this->Column5, this->Column6
			});
			this->dataGridViewOrd->Location = System::Drawing::Point(400, 27);
			this->dataGridViewOrd->Name = L"dataGridViewOrd";
			this->dataGridViewOrd->Size = System::Drawing::Size(516, 341);
			this->dataGridViewOrd->TabIndex = 1;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Номер заказа";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ФИО клиента";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Номер телефона";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Наименование товара";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Цена";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"База лекарст";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(370, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"База клиентов";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Саксенда", L"Оземпик", L"Виктоза", L"Мезим",
					L"Но-шпа", L"Найз", L"Пенталгин", L"Нурафен", L"Анальгин", L"Стрепсилс", L"Новокаин", L"Мирамистин", L"Тантум-верде", L"Феварин",
					L"Физраствор"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 426);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(366, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(366, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Изменить наличие";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Location = System::Drawing::Point(400, 388);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(516, 143);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(355, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"номер заказа";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(343, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(355, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"номер телефона клиента";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(355, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ФИО клиента";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(6, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(343, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Изменить наличие";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(355, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"выберите товар";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(343, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(343, 20);
			this->textBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Саксенда", L"Оземпик", L"Виктоза", L"Мезим",
					L"Но-шпа", L"Найз", L"Пенталгин", L"Нурафен", L"Анальгин", L"Стрепсилс", L"Новокаин", L"Мирамистин", L"Тантум-верде", L"Феварин",
					L"Физраствор"
			});
			this->comboBox2->Location = System::Drawing::Point(6, 38);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(343, 21);
			this->comboBox2->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(401, 373);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(109, 19);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Добавить заказ";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(516, 373);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(111, 19);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"Изменить заказ";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Click += gcnew System::EventHandler(this, &MyForm::checkBox2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 503);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"3%";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(77, 503);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"4%";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(142, 503);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 23);
			this->button7->TabIndex = 13;
			this->button7->Text = L"5%";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(207, 503);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 23);
			this->button8->TabIndex = 14;
			this->button8->Text = L"8%";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(272, 503);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 23);
			this->button9->TabIndex = 15;
			this->button9->Text = L"10%";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(337, 504);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 23);
			this->button10->TabIndex = 16;
			this->button10->Text = L"12%";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 479);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Назначить скидку";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(633, 373);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(98, 19);
			this->checkBox3->TabIndex = 18;
			this->checkBox3->Text = L"Поиск заказа";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Click += gcnew System::EventHandler(this, &MyForm::checkBox3_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(737, 373);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(167, 19);
			this->checkBox4->TabIndex = 19;
			this->checkBox4->Text = L"Закрыть заказ из очереди";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Click += gcnew System::EventHandler(this, &MyForm::checkBox4_Click);
			// 
			// dataGridViewMed
			// 
			this->dataGridViewMed->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMed->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridViewMed->Location = System::Drawing::Point(12, 27);
			this->dataGridViewMed->Name = L"dataGridViewMed";
			this->dataGridViewMed->Size = System::Drawing::Size(366, 390);
			this->dataGridViewMed->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Наименование товара";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Цена";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Наличие";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 543);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewOrd);
			this->Controls->Add(this->dataGridViewMed);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOrd))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMed))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->checkBox1->Checked = false;
		this->checkBox2->Checked = false;
		this->checkBox3->Checked = false;
		this->checkBox4->Checked = false;
		this->groupBox1->Enabled = false;
		this->textBox1->Text = nullptr;
		this->textBox2->Text = nullptr;
		this->textBox3->Text = nullptr;
		this->comboBox1->SelectedIndex = 2;
		this->comboBox1->SelectedIndex = -1;
		this->comboBox2->SelectedIndex = 2;
		this->comboBox2->SelectedIndex = -1;
		this->SR = gcnew StreamReader(Directory::GetCurrentDirectory() + "\\Medicines.txt");
		readFromFile(this->SR, this->MedBase);
		this->SR->Close();
		this->SR = gcnew StreamReader(Directory::GetCurrentDirectory() + "\\Orders.txt");
		readFromFile(this->SR, this->OrdBase, this->QOrd);
		this->numbers = this->OrdBase->Count;
		Look(this->MedBase, this->dataGridViewMed);
		Look(this->OrdBase, this->MedBase, this->dataGridViewOrd);
		this->SR->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox1->SelectedItem != nullptr) {
			this->dataGridViewMed->ClearSelection();
			myPredicate predicate(this->comboBox1->Text);
			int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
			this->MedBase[index]->changeAvailability();
			Look(this->MedBase, this->dataGridViewMed);
			Look(this->OrdBase, this->MedBase, this->dataGridViewOrd);
			this->dataGridViewMed->Rows[index]->Selected = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->button2->Text->CompareTo("Добавить заказ")==0) {
			this->numbers++;
			myPredicate predicate(this->comboBox2->Text);
			int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
			Medicines^ M = gcnew Medicines(this->comboBox2->Text, this->MedBase[index]->price, true);
			Orders^ O = gcnew Orders(this->textBox1->Text, M, this->textBox2->Text,this->numbers);
			this->QOrd->Enqueue(O);
			this->OrdBase->Add(O);

		}
		if (this->button2->Text->CompareTo("Изменить заказ")==0) {
			myPredicate predicate(Convert::ToInt32(this->textBox3->Text));
			int index = OrdBase->FindIndex(gcnew Predicate <Orders^>(predicate, &myPredicate::isMyOrder));
			this->OrdBase[index]->name = gcnew String(this->textBox1->Text);
			this->OrdBase[index]->telnumber = gcnew String(this->textBox2->Text);
			this->OrdBase[index]->medicine->med = gcnew String(this->comboBox2->Text);
		}
		Look(this->OrdBase, this->MedBase, this->dataGridViewOrd);
		if (this->button2->Text->CompareTo("Найти заказ")==0) {
			this->dataGridViewOrd->ClearSelection();
			myPredicate predicate(Convert::ToInt32(this->textBox3->Text));
			int index = OrdBase->FindIndex(gcnew Predicate <Orders^>(predicate, &myPredicate::isMyOrder));
			Look(this->OrdBase, this->MedBase, this->dataGridViewOrd);
			this->dataGridViewOrd->Rows[index]->Selected = true;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewMed->ClearSelection();
		myPredicate predicate(this->comboBox1->Text);
		int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
		this->MedBase[index]->makeSale(3);
		Look(this->MedBase, this->dataGridViewMed);
		this->dataGridViewMed->Rows[index]->Selected = true;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewMed->ClearSelection();
		myPredicate predicate(this->comboBox1->Text);
		int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
		this->MedBase[index]->makeSale(4);
		Look(this->MedBase, this->dataGridViewMed);
		this->dataGridViewMed->Rows[index]->Selected = true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewMed->ClearSelection();
		myPredicate predicate(this->comboBox1->Text);
		int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
		this->MedBase[index]->makeSale(5);
		Look(this->MedBase, this->dataGridViewMed);
		this->dataGridViewMed->Rows[index]->Selected = true;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewMed->ClearSelection();
		myPredicate predicate(this->comboBox1->Text);
		int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
		this->MedBase[index]->makeSale(8);
		Look(this->MedBase, this->dataGridViewMed);
		this->dataGridViewMed->Rows[index]->Selected = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewMed->ClearSelection();
		myPredicate predicate(this->comboBox1->Text);
		int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
		this->MedBase[index]->makeSale(10);
		Look(this->MedBase, this->dataGridViewMed);
		this->dataGridViewMed->Rows[index]->Selected = true;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewMed->ClearSelection();
		myPredicate predicate(this->comboBox1->Text);
		int index = this->MedBase->FindIndex(gcnew Predicate <Medicines^>(predicate, &myPredicate::isMedicine));
		this->MedBase[index]->makeSale(12);
		Look(this->MedBase, this->dataGridViewMed);
		this->dataGridViewMed->Rows[index]->Selected = true;
	}
	private: System::Void checkBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox2->Checked) {
			this->checkBox1->Checked = false;
			this->checkBox3->Checked = false;
			this->checkBox4->Checked = false;
			this->groupBox1->Enabled = true;
			this->button2->Text = "Изменить заказ";
			this->textBox3->Enabled = true;
			this->comboBox2->SelectedIndex = -1;
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			if (this->comboBox2->SelectedIndex == -1 || this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "") {
				this->button2->Enabled = false;
			}
			else
				this->button2->Enabled = true;
		}
		else
			if (this->checkBox1->Checked == false)
				this->groupBox1->Enabled = false;
	}

	private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox1->Checked) {
			this->checkBox2->Checked = false;
			this->checkBox3->Checked = false;
			this->checkBox4->Checked = false;
			this->groupBox1->Enabled = true;
			this->button2->Text = "Добавить заказ";
			this->textBox3->Enabled = false;
			this->comboBox2->SelectedIndex = -1;
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			if (this->comboBox2->SelectedIndex == -1 || this->textBox1->Text == "" || this->textBox2->Text == "") {
				this->button2->Enabled = false;
			}
			else
				this->button2->Enabled = true;
		}
		else
			if (this->checkBox2->Checked == false && this->checkBox3->Checked ==false
				&&this->checkBox4->Checked == false)
				this->groupBox1->Enabled = false;
	}

	private: System::Void checkBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox3->Checked) {
			this->checkBox2->Checked = false;
			this->checkBox1->Checked = false;
			this->checkBox4->Checked = false;
			this->groupBox1->Enabled = true;
			this->comboBox2->SelectedIndex = -1;
			this->textBox1->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			if (this->comboBox2->SelectedIndex == -1||this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "") {
				this->button2->Enabled = false;
			}
			else
				this->button2->Enabled = true;
			this->button2->Text = "Найти заказ";
			this->textBox3->Enabled = true;
		}
		else
			if (this->checkBox2->Checked == false && this->checkBox1->Checked == false
				&& this->checkBox4->Checked == false)
				this->groupBox1->Enabled = false;
	}

	private: System::Void checkBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox4->Checked) {
			this->checkBox1->Checked = false;
			this->checkBox2->Checked = false;
			this->checkBox3->Checked = false;
			Orders^ O = this->QOrd->Peek();
			if (O->medicine->availability) {
				O = this->QOrd->Dequeue();
				if (this->OrdBase->Remove(O))
					Look(this->OrdBase, this->MedBase, this->dataGridViewOrd);
			}
			else
				MessageBox::Show("Данного товара нет в наличии", "Закрытие заказа",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
			if (this->checkBox2->Checked == false && this->checkBox3->Checked == false
				&& this->checkBox1->Checked == false)
				this->groupBox1->Enabled = false;
		this->checkBox4->Checked = false;
	}

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->SW = gcnew StreamWriter(Directory::GetCurrentDirectory() + "\\Orders.txt");
		writeToFile(this->SW, this->OrdBase);
		this->SW->Close();
		this->SW = gcnew StreamWriter(Directory::GetCurrentDirectory() + "\\Medicines.txt");
		writeToFile(this->SW, this->MedBase);
		this->SW->Close();
	}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		myPredicate predicate(Convert::ToInt32(this->textBox3->Text));
		int index = this->OrdBase->FindIndex(gcnew Predicate <Orders^>(predicate, &myPredicate::isMyOrder));
		this->textBox1->Text = this->OrdBase[index]->name;
		this->comboBox2->Text = this->OrdBase[index]->medicine->med;
		this->textBox2->Text = this->OrdBase[index]->telnumber;
	}
	catch (...)
	{
		this->textBox1->Text = "";
		this->comboBox2->Text = "";
		this->textBox2->Text = "";
	}
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox1->SelectedIndex == -1) {
		this->button1->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = false;
		this->button7->Enabled = false;
		this->button8->Enabled = false;
		this->button9->Enabled = false;
		this->button10->Enabled = false;
	}
	else
	{
		this->button1->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
		this->button8->Enabled = true;
		this->button9->Enabled = true;
		this->button10->Enabled = true;
	}

}
};
}
