#pragma once
#include "Pila.h"
#include <string>
#include<stdlib.h>
#include<time.h>

//#include "string.h"

namespace Lab3JoséDeLeón1170419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::String;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblCarta;

	private: System::Windows::Forms::Button^ lblRandom;
	private: System::Windows::Forms::Label^ lblCarta1;
	private: System::Windows::Forms::Label^ lblColor1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ lblColor2;
	private: System::Windows::Forms::Label^ lblCarta2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ lblColor3;
	private: System::Windows::Forms::Label^ lblCarta3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ lblColor4;
	private: System::Windows::Forms::Label^ lblCarta4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::Label^ lblColor;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblCarta = (gcnew System::Windows::Forms::Label());
			this->lblRandom = (gcnew System::Windows::Forms::Button());
			this->lblCarta1 = (gcnew System::Windows::Forms::Label());
			this->lblColor1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->lblColor2 = (gcnew System::Windows::Forms::Label());
			this->lblCarta2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->lblColor3 = (gcnew System::Windows::Forms::Label());
			this->lblCarta3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->lblColor4 = (gcnew System::Windows::Forms::Label());
			this->lblCarta4 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->lblColor = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Empezar juego";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Carta 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Color 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Mi cima es:";
			// 
			// lblCarta
			// 
			this->lblCarta->AutoSize = true;
			this->lblCarta->Location = System::Drawing::Point(90, 18);
			this->lblCarta->Name = L"lblCarta";
			this->lblCarta->Size = System::Drawing::Size(12, 17);
			this->lblCarta->TabIndex = 9;
			this->lblCarta->Text = L".";
			// 
			// lblRandom
			// 
			this->lblRandom->Location = System::Drawing::Point(12, 126);
			this->lblRandom->Name = L"lblRandom";
			this->lblRandom->Size = System::Drawing::Size(75, 23);
			this->lblRandom->TabIndex = 10;
			this->lblRandom->Text = L"Barajear";
			this->lblRandom->UseVisualStyleBackColor = true;
			this->lblRandom->Click += gcnew System::EventHandler(this, &MyForm::LblRandom_Click);
			// 
			// lblCarta1
			// 
			this->lblCarta1->AutoSize = true;
			this->lblCarta1->Location = System::Drawing::Point(6, 18);
			this->lblCarta1->Name = L"lblCarta1";
			this->lblCarta1->Size = System::Drawing::Size(12, 17);
			this->lblCarta1->TabIndex = 11;
			this->lblCarta1->Text = L".";
			// 
			// lblColor1
			// 
			this->lblColor1->AutoSize = true;
			this->lblColor1->Location = System::Drawing::Point(6, 48);
			this->lblColor1->Name = L"lblColor1";
			this->lblColor1->Size = System::Drawing::Size(16, 17);
			this->lblColor1->TabIndex = 12;
			this->lblColor1->Text = L"1";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(26, 164);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(168, 165);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(18, 17);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// lblColor2
			// 
			this->lblColor2->AutoSize = true;
			this->lblColor2->Location = System::Drawing::Point(6, 48);
			this->lblColor2->Name = L"lblColor2";
			this->lblColor2->Size = System::Drawing::Size(16, 17);
			this->lblColor2->TabIndex = 17;
			this->lblColor2->Text = L"2";
			// 
			// lblCarta2
			// 
			this->lblCarta2->AutoSize = true;
			this->lblCarta2->Location = System::Drawing::Point(6, 18);
			this->lblCarta2->Name = L"lblCarta2";
			this->lblCarta2->Size = System::Drawing::Size(12, 17);
			this->lblCarta2->TabIndex = 16;
			this->lblCarta2->Text = L".";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(193, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Color 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(192, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Carta 2";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(313, 166);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(18, 17);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// lblColor3
			// 
			this->lblColor3->AutoSize = true;
			this->lblColor3->Location = System::Drawing::Point(5, 48);
			this->lblColor3->Name = L"lblColor3";
			this->lblColor3->Size = System::Drawing::Size(16, 17);
			this->lblColor3->TabIndex = 22;
			this->lblColor3->Text = L"1";
			// 
			// lblCarta3
			// 
			this->lblCarta3->AutoSize = true;
			this->lblCarta3->Location = System::Drawing::Point(5, 18);
			this->lblCarta3->Name = L"lblCarta3";
			this->lblCarta3->Size = System::Drawing::Size(12, 17);
			this->lblCarta3->TabIndex = 21;
			this->lblCarta3->Text = L".";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(338, 195);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 17);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Color 3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(337, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Carta 3";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(469, 167);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(18, 17);
			this->checkBox4->TabIndex = 28;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// lblColor4
			// 
			this->lblColor4->AutoSize = true;
			this->lblColor4->Location = System::Drawing::Point(6, 48);
			this->lblColor4->Name = L"lblColor4";
			this->lblColor4->Size = System::Drawing::Size(16, 17);
			this->lblColor4->TabIndex = 27;
			this->lblColor4->Text = L"2";
			// 
			// lblCarta4
			// 
			this->lblCarta4->AutoSize = true;
			this->lblCarta4->Location = System::Drawing::Point(6, 18);
			this->lblCarta4->Name = L"lblCarta4";
			this->lblCarta4->Size = System::Drawing::Size(12, 17);
			this->lblCarta4->TabIndex = 26;
			this->lblCarta4->Text = L".";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(494, 196);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 17);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Color 4";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(493, 166);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 17);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Carta 4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(457, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 17);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Si no hay una carta siga barajeando";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(457, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(399, 17);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Recuerde que debe colocar una carta debajo de distinto color";
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(12, 235);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(557, 28);
			this->btnIngresar->TabIndex = 31;
			this->btnIngresar->Text = L"Ingresar carta";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &MyForm::BtnIngresar_Click);
			// 
			// lblColor
			// 
			this->lblColor->AutoSize = true;
			this->lblColor->Location = System::Drawing::Point(90, 38);
			this->lblColor->Name = L"lblColor";
			this->lblColor->Size = System::Drawing::Size(12, 17);
			this->lblColor->TabIndex = 32;
			this->lblColor->Text = L".";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(457, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(285, 17);
			this->label8->TabIndex = 33;
			this->label8->Text = L"y de menor numero a la que esta en la cima";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lblCarta);
			this->groupBox1->Controls->Add(this->lblColor);
			this->groupBox1->Location = System::Drawing::Point(93, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 71);
			this->groupBox1->TabIndex = 34;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblCarta1);
			this->groupBox2->Controls->Add(this->lblColor1);
			this->groupBox2->Location = System::Drawing::Point(110, 145);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(52, 65);
			this->groupBox2->TabIndex = 35;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"1";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblCarta2);
			this->groupBox3->Controls->Add(this->lblColor2);
			this->groupBox3->Location = System::Drawing::Point(252, 145);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(55, 73);
			this->groupBox3->TabIndex = 36;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"2";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lblCarta3);
			this->groupBox4->Controls->Add(this->lblColor3);
			this->groupBox4->Location = System::Drawing::Point(397, 146);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(66, 67);
			this->groupBox4->TabIndex = 37;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"3";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->lblCarta4);
			this->groupBox5->Controls->Add(this->lblColor4);
			this->groupBox5->Location = System::Drawing::Point(553, 145);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(68, 76);
			this->groupBox5->TabIndex = 38;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 299);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->lblRandom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Lab3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Pila* pila = new Pila();
		//Carta* carta = new Carta();
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Carta* nuevaCarta = new Carta();
	/*	checkBox1->Enabled == true;
		checkBox2->Enabled == true;
		checkBox3->Enabled == true;
		checkBox4->Enabled == true;
		lblRandom->Enabled == true;
		btnIngresar->Enabled == true;
		nuevaCarta->valor = System::Convert::ToInt16(textBox1->Text);
		nuevaCarta->numero = System::Convert::ToInt16(textBox2->Text);
		pila->Apilar(*nuevaCarta);
		*/

		int num, c;
		srand(time(NULL));
		num = rand() % 12;
		nuevaCarta->valor = num;
		if (num >= 1 || num >= 13) {
			num = rand() % 12;
			nuevaCarta->valor = num;
		}

		num = 1 + rand() % 2;
		nuevaCarta->numero = num;
		pila->Apilar(*nuevaCarta);

		Carta* nuevaCarta1 = &pila->ObtenerCima();
		lblCarta->Text = nuevaCarta1->valor.ToString();
		lblColor->Text= nuevaCarta1->numero.ToString();
		MessageBox::Show("Se creo la carta correctamente");
		//dataGAylinne->Text = pila->ObtenerCima();
		//lblPrueba->Text= Convert::ToString(pila->ObtenerCima());
	
	}



	private: System::Void LblRandom_Click(System::Object^ sender, System::EventArgs^ e) {

		int num, c;
		srand(time(NULL));
		num = 1+ rand() % 11;	

		lblCarta1->Text = num.ToString();
		
		//srand(time(NULL));
		num = 1 + rand() % 11;

		lblCarta2->Text = num.ToString();

		//srand(time(NULL));
		num = 1 + rand() % 11;

		lblCarta3->Text = num.ToString();

		//srand(time(NULL));
		num = 1 + rand() % 11;

		lblCarta4->Text = num.ToString();
	}
private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void BtnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
	Carta* nuevaCarta = new Carta();
	int a = System::Convert::ToInt16(lblCarta->Text) - 1;
	int b = System::Convert::ToInt16(lblColor->Text);
	if (checkBox1->Checked == true) {
		if (System::Convert::ToInt16(lblCarta1->Text) == a && System::Convert::ToInt16(lblColor1->Text) != b) {
			nuevaCarta->valor = System::Convert::ToInt16(lblCarta1->Text);
			nuevaCarta->numero = System::Convert::ToInt16(lblColor1->Text);
			pila->Apilar(*nuevaCarta);
			MessageBox::Show("Se apilo correctamente");

			Carta* nuevaCarta1 = &pila->ObtenerCima();
			lblCarta->Text = nuevaCarta1->valor.ToString();
			lblColor->Text = nuevaCarta1->numero.ToString();

			if (System::Convert::ToInt16(lblCarta->Text) == 1) {
				MessageBox::Show("GANO LA PARTIDA :D +1000 puntos", "GANASTE");
			}
		}
	}

	if (checkBox2->Checked == true) {
		if (System::Convert::ToInt16(lblCarta2->Text) == a && System::Convert::ToInt16(lblColor2->Text) != b) {
			nuevaCarta->valor = System::Convert::ToInt16(lblCarta2->Text);
			nuevaCarta->numero = System::Convert::ToInt16(lblColor2->Text);
			pila->Apilar(*nuevaCarta);
			MessageBox::Show("Se apilo correctamente");

			Carta* nuevaCarta1 = &pila->ObtenerCima();
			lblCarta->Text = nuevaCarta1->valor.ToString();
			lblColor->Text = nuevaCarta1->numero.ToString();

			if (System::Convert::ToInt16(lblCarta->Text) == 1) {
				MessageBox::Show("GANO LA PARTIDA :D +1000 puntos", "GANASTE");
			}
		}
	}
	if (checkBox3->Checked == true) {
		if (System::Convert::ToInt16(lblCarta3->Text) == a && System::Convert::ToInt16(lblColor3->Text) != b) {
			nuevaCarta->valor = System::Convert::ToInt16(lblCarta3->Text);
			nuevaCarta->numero = System::Convert::ToInt16(lblColor3->Text);
			pila->Apilar(*nuevaCarta);
			MessageBox::Show("Se apilo correctamente");

			Carta* nuevaCarta1 = &pila->ObtenerCima();
			lblCarta->Text = nuevaCarta1->valor.ToString();
			lblColor->Text = nuevaCarta1->numero.ToString();
			if (System::Convert::ToInt16(lblCarta->Text) == 1) {
				MessageBox::Show("GANO LA PARTIDA :D +1000 puntos", "GANASTE");
			}
		}
	}

	if (checkBox4->Checked == true) {
		if (System::Convert::ToInt16(lblCarta4->Text) == a && System::Convert::ToInt16(lblColor4->Text) != b) {
			nuevaCarta->valor = System::Convert::ToInt16(lblCarta4->Text);
			nuevaCarta->numero = System::Convert::ToInt16(lblColor4->Text);
			pila->Apilar(*nuevaCarta);
			MessageBox::Show("Se apilo correctamente");

			Carta* nuevaCarta1 = &pila->ObtenerCima();
			lblCarta->Text = nuevaCarta1->valor.ToString();
			lblColor->Text = nuevaCarta1->numero.ToString();
			if (System::Convert::ToInt16(lblCarta->Text) == 1) {
				MessageBox::Show("GANO LA PARTIDA :D +1000 puntos", "GANASTE");
			}
		}
	}
	
	//VALIDARA QUE LOS CHECKBOXS no se repitan
	if (checkBox1->Checked == true && checkBox2->Checked == true){
		MessageBox::Show("Tiene dos checkboxs seleccionados", "Cuidado");
	}
	if (checkBox1->Checked == true && checkBox3->Checked == true) {
		MessageBox::Show("Tiene dos checkboxs seleccionados", "Cuidado");
	}
	if (checkBox1->Checked == true && checkBox4->Checked == true) {
		MessageBox::Show("Tiene dos checkboxs seleccionados", "Cuidado");
	}
	if (checkBox2->Checked == true && checkBox3->Checked == true) {
		MessageBox::Show("Tiene dos checkboxs seleccionados", "Cuidado");
	}
	if (checkBox2->Checked == true && checkBox4->Checked == true) {
		MessageBox::Show("Tiene dos checkboxs seleccionados", "Cuidado");
	}
	if (checkBox3->Checked == true && checkBox4->Checked == true) {
		MessageBox::Show("Tiene dos checkboxs seleccionados", "Cuidado");
	}
}
};
}
