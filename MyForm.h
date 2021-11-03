/*
 *
 *  ██████╗░░░░██████╗░
 *  ██╔══██╗░░░██╔══██╗
 *  ██████╦╝░░░██████╦╝
 *  ██╔══██╗░░░██╔══██╗
 *  ██████╦╝██╗██████╦╝
 *  ╚═════╝░╚═╝╚═════╝░
 *
 * IP_MASK 2.0
 * MyForm.h
 * BlankBuffoon
 *
 * Version: 2.0
 * Введен интерфейс
 * Добавлена проверка введенных данных
 *
 * Programmer: aterepin@yandex.ru
 *
 * Build: 15:05:2021
 * Testing: 15:05:2021
*/

#pragma once
#include <string>

using namespace std;

// Внешние переменные. Нужны для обработки данных вне функций
int device1_ip_mass[4], device1_mask_mass[4];
int device2_ip_mass[4], device2_mask_mass[4];
int device1_mask_id, device2_mask_id;
string device1_ip_network_string, device2_ip_network_string;
//----------------------------------------------


// Основная вычислительная функция
string main_prog(int* device1_ip_mass, int* device2_ip_mass, int device1_mask_id, int device2_mask_id) {

	// Внутренние переменные для обработки данных первого девайса
	string device1_mask_string[4], device1_mask;
	int device1_mask_point = 0;
	int device1_ip_network[4];
	bool device1_mask_flag = true;
	//----------------------------------------------

	// Внутренние переменные для обработки данных второго девайса
	string device2_mask_string[4], device2_mask;
	int device2_mask_point = 0;
	int device2_ip_network[4];
	bool device2_mask_flag = true;
	//----------------------------------------------



	// Перевод номера маски в ее полное значение для первого устройства
	switch (device1_mask_id) {
	case 0: device1_mask = "0.0.0.0"; break;
	case 1: device1_mask = "128.0.0.0"; break;
	case 2: device1_mask = "192.0.0.0"; break;
	case 3: device1_mask = "224.0.0.0"; break;
	case 4: device1_mask = "240.0.0.0"; break;
	case 5: device1_mask = "248.0.0.0"; break;
	case 6: device1_mask = "252.0.0.0"; break;
	case 7: device1_mask = "254.0.0.0"; break;
	case 8: device1_mask = "255.0.0.0"; break;
	case 9: device1_mask = "255.128.0.0"; break;
	case 10: device1_mask = "255.192.0.0"; break;
	case 11: device1_mask = "255.224.0.0"; break;
	case 12: device1_mask = "255.240.0.0"; break;
	case 13: device1_mask = "255.248.0.0"; break;
	case 14: device1_mask = "255.253.0.0"; break;
	case 15: device1_mask = "255.254.0.0"; break;
	case 16: device1_mask = "255.255.0.0"; break;
	case 17: device1_mask = "255.255.128.0"; break;
	case 18: device1_mask = "255.255.192.0"; break;
	case 19: device1_mask = "255.255.224.0"; break;
	case 20: device1_mask = "255.255.240.0"; break;
	case 21: device1_mask = "255.255.248.0"; break;
	case 22: device1_mask = "255.255.252.0"; break;
	case 23: device1_mask = "255.255.254.0"; break;
	case 24: device1_mask = "255.255.255.0"; break;
	case 25: device1_mask = "255.255.255.128"; break;
	case 26: device1_mask = "255.255.255.192"; break;
	case 27: device1_mask = "255.255.255.224"; break;
	case 28: device1_mask = "255.255.255.240"; break;
	case 29: device1_mask = "255.255.255.248"; break;
	case 30: device1_mask = "255.255.255.252"; break;
	case 31: device1_mask = "255.255.255.254"; break;
	case 32: device1_mask = "255.255.255.255"; break;
	default: break;
	}

	// Разбиваем строку на массив
	for (int i = 0; i <= device1_mask.length(); i++) {
		if (device1_mask[i] != '.') {
			device1_mask_string[device1_mask_point] = device1_mask_string[device1_mask_point] + device1_mask[i];
		}
		else {
			device1_mask_point += 1;
		}
	}
	//----------------------------------------------



	// Перевод номера маски в ее полное значение для второго устройства
	switch (device2_mask_id) {
	case 0: device2_mask = "0.0.0.0"; break;
	case 1: device2_mask = "128.0.0.0"; break;
	case 2: device2_mask = "192.0.0.0"; break;
	case 3: device2_mask = "224.0.0.0"; break;
	case 4: device2_mask = "240.0.0.0"; break;
	case 5: device2_mask = "248.0.0.0"; break;
	case 6: device2_mask = "252.0.0.0"; break;
	case 7: device2_mask = "254.0.0.0"; break;
	case 8: device2_mask = "255.0.0.0"; break;
	case 9: device2_mask = "255.128.0.0"; break;
	case 10: device2_mask = "255.192.0.0"; break;
	case 11: device2_mask = "255.224.0.0"; break;
	case 12: device2_mask = "255.240.0.0"; break;
	case 13: device2_mask = "255.248.0.0"; break;
	case 14: device2_mask = "255.253.0.0"; break;
	case 15: device2_mask = "255.254.0.0"; break;
	case 16: device2_mask = "255.255.0.0"; break;
	case 17: device2_mask = "255.255.128.0"; break;
	case 18: device2_mask = "255.255.192.0"; break;
	case 19: device2_mask = "255.255.224.0"; break;
	case 20: device2_mask = "255.255.240.0"; break;
	case 21: device2_mask = "255.255.248.0"; break;
	case 22: device2_mask = "255.255.252.0"; break;
	case 23: device2_mask = "255.255.254.0"; break;
	case 24: device2_mask = "255.255.255.0"; break;
	case 25: device2_mask = "255.255.255.128"; break;
	case 26: device2_mask = "255.255.255.192"; break;
	case 27: device2_mask = "255.255.255.224"; break;
	case 28: device2_mask = "255.255.255.240"; break;
	case 29: device2_mask = "255.255.255.248"; break;
	case 30: device2_mask = "255.255.255.252"; break;
	case 31: device2_mask = "255.255.255.254"; break;
	case 32: device2_mask = "255.255.255.255"; break;
	default: break;
	}

	// Разбиваем строку на массив
	for (int i = 0; i <= device2_mask.length(); i++) {
		if (device2_mask[i] != '.') {
			device2_mask_string[device2_mask_point] = device2_mask_string[device2_mask_point] + device2_mask[i];
		}
		else {
			device2_mask_point += 1;
		}
	}
	//----------------------------------------------



	// Перевод данных из типа String в тип Int 
	// Записываем в итоговый массив с которым будем проводить "побитовое И"    
	for (int i = 0; i <= 3; i++) {
		device1_mask_mass[i] = atoi(device1_mask_string[i].c_str());
	}

	// Повторяем для второго устройства
	for (int i = 0; i <= 3; i++) {
		device2_mask_mass[i] = atoi(device2_mask_string[i].c_str());
	}
	//----------------------------------------------



	//Очищаем строку от предидущих значений
	device1_ip_network_string = ""; 
	device2_ip_network_string = "";
	//---------------------------------------------- 
	


	// Вывод ip адресса сети первого устройства
	for (int i = 0; i <= 3; i++) {
		device1_ip_network[i] = device1_ip_mass[i] & device1_mask_mass[i];
		if (i != 3) {
			device1_ip_network_string = device1_ip_network_string + to_string(int(device1_ip_network[i])) + '.';
		}
		else {
			device1_ip_network_string = device1_ip_network_string + to_string(int(device1_ip_network[i]));
		}
	}

	// Вывод ip адресса сети второго устройства
	for (int i = 0; i <= 3; i++) {
		device2_ip_network[i] = device2_ip_mass[i] & device2_mask_mass[i];
		if (i != 3) {
			device2_ip_network_string = device2_ip_network_string + to_string(int (device2_ip_network[i])) + '.';
		}
		else {
			device2_ip_network_string = device2_ip_network_string + to_string(int(device2_ip_network[i]));
		}
	}
	//----------------------------------------------



	// Сравнение двух адресов для определения находятся ли они в одной сети
	if (equal(begin(device1_ip_network), end(device1_ip_network), begin(device2_ip_network))) {
		return "Адреса находятся в одной сети";
	}
	else {
		return "Адреса НЕ находятся в одной сети";
	}
	//----------------------------------------------

}



// Код для Windows Forms
namespace ipmaskvisual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
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

		// Инициализация элементов
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::TextBox^ resultbox;
		protected:

		private: System::Windows::Forms::TextBox^ ip1_textbox1;
		private: System::Windows::Forms::TextBox^ ip1_textbox4;

		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::TextBox^ ip1_textbox3;

		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::TextBox^ ip1_textbox2;
		private: System::Windows::Forms::TextBox^ ip2_textbox2;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::TextBox^ ip2_textbox3;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::TextBox^ ip2_textbox4;
		private: System::Windows::Forms::TextBox^ ip2_textbox1;
		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::ComboBox^ comboBox2;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::TextBox^ network1;
		private: System::Windows::Forms::TextBox^ network2;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label15;

		private:
			/// <summary>
			/// Обязательная переменная конструктора.
			/// </summary>
			System::ComponentModel::Container^ components;



		// Данные элементов
	#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->resultbox = (gcnew System::Windows::Forms::TextBox());
			this->ip1_textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->ip1_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ip1_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ip1_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->ip2_textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ip2_textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ip2_textbox4 = (gcnew System::Windows::Forms::TextBox());
			this->ip2_textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->network1 = (gcnew System::Windows::Forms::TextBox());
			this->network2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(315, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// resultbox
			// 
			this->resultbox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultbox->Location = System::Drawing::Point(193, 464);
			this->resultbox->Name = L"resultbox";
			this->resultbox->Size = System::Drawing::Size(370, 29);
			this->resultbox->TabIndex = 5;
			this->resultbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->resultbox->TextChanged += gcnew System::EventHandler(this, &MyForm::resultbox_TextChanged);
			// 
			// ip1_textbox1
			// 
			this->ip1_textbox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip1_textbox1->Location = System::Drawing::Point(161, 196);
			this->ip1_textbox1->MaxLength = 3;
			this->ip1_textbox1->Name = L"ip1_textbox1";
			this->ip1_textbox1->Size = System::Drawing::Size(49, 29);
			this->ip1_textbox1->TabIndex = 6;
			this->ip1_textbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip1_textbox1->TextChanged += gcnew System::EventHandler(this, &MyForm::ip1_textbox1_TextChanged);
			// 
			// ip1_textbox4
			// 
			this->ip1_textbox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip1_textbox4->Location = System::Drawing::Point(392, 196);
			this->ip1_textbox4->MaxLength = 3;
			this->ip1_textbox4->Name = L"ip1_textbox4";
			this->ip1_textbox4->Size = System::Drawing::Size(49, 29);
			this->ip1_textbox4->TabIndex = 7;
			this->ip1_textbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip1_textbox4->TextChanged += gcnew System::EventHandler(this, &MyForm::ip1_textbox4_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(293, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L".";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(216, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L".";
			// 
			// ip1_textbox3
			// 
			this->ip1_textbox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip1_textbox3->Location = System::Drawing::Point(315, 196);
			this->ip1_textbox3->MaxLength = 3;
			this->ip1_textbox3->Name = L"ip1_textbox3";
			this->ip1_textbox3->Size = System::Drawing::Size(49, 29);
			this->ip1_textbox3->TabIndex = 9;
			this->ip1_textbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip1_textbox3->TextChanged += gcnew System::EventHandler(this, &MyForm::ip1_textbox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(370, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L".";
			// 
			// ip1_textbox2
			// 
			this->ip1_textbox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip1_textbox2->Location = System::Drawing::Point(238, 196);
			this->ip1_textbox2->MaxLength = 3;
			this->ip1_textbox2->Name = L"ip1_textbox2";
			this->ip1_textbox2->Size = System::Drawing::Size(49, 29);
			this->ip1_textbox2->TabIndex = 11;
			this->ip1_textbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip1_textbox2->TextChanged += gcnew System::EventHandler(this, &MyForm::ip1_textbox2_TextChanged);
			// 
			// ip2_textbox2
			// 
			this->ip2_textbox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip2_textbox2->Location = System::Drawing::Point(238, 245);
			this->ip2_textbox2->MaxLength = 3;
			this->ip2_textbox2->Name = L"ip2_textbox2";
			this->ip2_textbox2->Size = System::Drawing::Size(49, 29);
			this->ip2_textbox2->TabIndex = 18;
			this->ip2_textbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip2_textbox2->TextChanged += gcnew System::EventHandler(this, &MyForm::ip2_textbox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(216, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 25);
			this->label4->TabIndex = 17;
			this->label4->Text = L".";
			// 
			// ip2_textbox3
			// 
			this->ip2_textbox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip2_textbox3->Location = System::Drawing::Point(315, 245);
			this->ip2_textbox3->MaxLength = 3;
			this->ip2_textbox3->Name = L"ip2_textbox3";
			this->ip2_textbox3->Size = System::Drawing::Size(49, 29);
			this->ip2_textbox3->TabIndex = 16;
			this->ip2_textbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip2_textbox3->TextChanged += gcnew System::EventHandler(this, &MyForm::ip2_textbox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(370, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 25);
			this->label5->TabIndex = 14;
			this->label5->Text = L".";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(293, 253);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L".";
			// 
			// ip2_textbox4
			// 
			this->ip2_textbox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip2_textbox4->Location = System::Drawing::Point(392, 245);
			this->ip2_textbox4->MaxLength = 3;
			this->ip2_textbox4->Name = L"ip2_textbox4";
			this->ip2_textbox4->Size = System::Drawing::Size(49, 29);
			this->ip2_textbox4->TabIndex = 13;
			this->ip2_textbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip2_textbox4->TextChanged += gcnew System::EventHandler(this, &MyForm::ip2_textbox4_TextChanged);
			// 
			// ip2_textbox1
			// 
			this->ip2_textbox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ip2_textbox1->Location = System::Drawing::Point(161, 245);
			this->ip2_textbox1->MaxLength = 3;
			this->ip2_textbox1->Name = L"ip2_textbox1";
			this->ip2_textbox1->Size = System::Drawing::Size(49, 29);
			this->ip2_textbox1->TabIndex = 12;
			this->ip2_textbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ip2_textbox1->TextChanged += gcnew System::EventHandler(this, &MyForm::ip2_textbox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32"
			});
			this->comboBox1->Location = System::Drawing::Point(537, 196);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32"
			});
			this->comboBox2->Location = System::Drawing::Point(537, 251);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(332, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 32);
			this->label7->TabIndex = 21;
			this->label7->Text = L"IP MASK";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(101, 196);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 25);
			this->label8->TabIndex = 22;
			this->label8->Text = L"1:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(287, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 25);
			this->label9->TabIndex = 23;
			this->label9->Text = L"IP";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(211, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(352, 63);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Введите данные устройств: \r\nIP адрес и маску подсети,\r\nчтобы узнать находятся ли "
				L"они в одной сети.\r\n";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(101, 247);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 25);
			this->label12->TabIndex = 26;
			this->label12->Text = L"2:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(564, 155);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 25);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Маска";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(570, 518);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 34);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Designed by BlankBuffoon\r\n© 2021";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// network1
			// 
			this->network1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->network1->Location = System::Drawing::Point(43, 406);
			this->network1->Name = L"network1";
			this->network1->Size = System::Drawing::Size(310, 29);
			this->network1->TabIndex = 29;
			this->network1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->network1->TextChanged += gcnew System::EventHandler(this, &MyForm::network1_TextChanged);
			// 
			// network2
			// 
			this->network2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->network2->Location = System::Drawing::Point(381, 406);
			this->network2->Name = L"network2";
			this->network2->Size = System::Drawing::Size(310, 29);
			this->network2->TabIndex = 30;
			this->network2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->network2->TextChanged += gcnew System::EventHandler(this, &MyForm::network2_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(102, 373);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(200, 21);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Сеть первого устройства";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(445, 373);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(199, 21);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Сеть второго устройства";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(734, 561);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->network2);
			this->Controls->Add(this->network1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ip2_textbox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ip2_textbox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ip2_textbox4);
			this->Controls->Add(this->ip2_textbox1);
			this->Controls->Add(this->ip1_textbox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ip1_textbox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ip1_textbox4);
			this->Controls->Add(this->ip1_textbox1);
			this->Controls->Add(this->resultbox);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(750, 600);
			this->MinimumSize = System::Drawing::Size(750, 600);
			this->Name = L"MyForm";
			this->Text = L"IP MASK";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion


		// Обработка элементов
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}

		private: System::Void ip1_textbox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip1_textbox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip1_textbox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip1_textbox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip2_textbox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip2_textbox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip2_textbox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void ip2_textbox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

		private: System::Void resultbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void network1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void network2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			device1_mask_id = System::Convert::ToInt16(comboBox1->SelectedItem);
		}
		private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			device2_mask_id = System::Convert::ToInt16(comboBox2->SelectedItem);
		}


		// Проверка правильности введенных данных
		bool protect() {
			
			if (ip1_textbox1->Text->Length == 0 || ip1_textbox2->Text->Length == 0 || ip1_textbox3->Text->Length == 0 || ip1_textbox4->Text->Length == 0) {
				resultbox->Text = L"Заполнены не все поля";
				return false;
			}
			for (int i = 0; i < ip1_textbox1->Text->Length; i++) {
				if (ip1_textbox1->Text[i] >= '0' && ip1_textbox1->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			for (int i = 0; i < ip1_textbox2->Text->Length; i++) {
				if (ip1_textbox2->Text[i] >= '0' && ip1_textbox2->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			for (int i = 0; i < ip1_textbox3->Text->Length; i++) {
				if (ip1_textbox3->Text[i] >= '0' && ip1_textbox3->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			for (int i = 0; i < ip1_textbox4->Text->Length; i++) {
				if (ip1_textbox4->Text[i] >= '0' && ip1_textbox4->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			if (System::Convert::ToInt16(ip1_textbox1->Text) > 255 || System::Convert::ToInt16(ip1_textbox2->Text) > 255 || System::Convert::ToInt16(ip1_textbox3->Text) > 255 || System::Convert::ToInt16(ip1_textbox4->Text) > 255) {
				resultbox->Text = L"Ошибка! Число не может быть больше 255";
				return false;
			}

			
			if (ip2_textbox1->Text->Length == 0 || ip2_textbox2->Text->Length == 0 || ip2_textbox3->Text->Length == 0 || ip2_textbox4->Text->Length == 0) {
				resultbox->Text = L"Заполнены не все поля";
				return false;
			}
			for (int i = 0; i < ip2_textbox1->Text->Length; i++) {
				if (ip2_textbox1->Text[i] >= '0' && ip2_textbox1->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			for (int i = 0; i < ip2_textbox2->Text->Length; i++) {
				if (ip2_textbox2->Text[i] >= '0' && ip2_textbox2->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			for (int i = 0; i < ip2_textbox3->Text->Length; i++) {
				if (ip2_textbox3->Text[i] >= '0' && ip2_textbox3->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			for (int i = 0; i < ip2_textbox4->Text->Length; i++) {
				if (ip2_textbox4->Text[i] >= '0' && ip2_textbox4->Text[i] <= '9') {}
				else { resultbox->Text = L"Некоректный символ"; return false; }
			}
			if (System::Convert::ToInt16(ip2_textbox1->Text) > 255 || System::Convert::ToInt16(ip2_textbox2->Text) > 255 || System::Convert::ToInt16(ip2_textbox3->Text) > 255 || System::Convert::ToInt16(ip2_textbox4->Text) > 255) {
				resultbox->Text = L"Ошибка! Число не может быть больше 255";
				return false;
			}
			return true;
		}


		// Обработка главной кнопки
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			resultbox->Text = L" ";
			if (protect()) {
				// Очищаем старые поля
				resultbox->Clear();
				network1->Clear();
				network2->Clear();
				// Присваиваем значений текстовых полей к переменным
				device1_ip_mass[0] = System::Convert::ToInt16(ip1_textbox1->Text);
				device1_ip_mass[1] = System::Convert::ToInt16(ip1_textbox2->Text);
				device1_ip_mass[2] = System::Convert::ToInt16(ip1_textbox3->Text);
				device1_ip_mass[3] = System::Convert::ToInt16(ip1_textbox4->Text);
				device2_ip_mass[0] = System::Convert::ToInt16(ip2_textbox1->Text);
				device2_ip_mass[1] = System::Convert::ToInt16(ip2_textbox2->Text);
				device2_ip_mass[2] = System::Convert::ToInt16(ip2_textbox3->Text);
				device2_ip_mass[3] = System::Convert::ToInt16(ip2_textbox4->Text);
				// Вывод данных
				string result;
				result = main_prog(device1_ip_mass, device2_ip_mass, device1_mask_id, device2_mask_id);
				resultbox->Text = gcnew System::String(result.c_str());
				network1->Text = gcnew System::String(device1_ip_network_string.c_str());
				network2->Text = gcnew System::String(device2_ip_network_string.c_str());
			}
			else {
				MessageBox::Show("Проверьте правильность введенных данных", "Ошибка!");
			}
		}
	};	
}
