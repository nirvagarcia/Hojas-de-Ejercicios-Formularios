//este es mi Form principal
#pragma once
#include "MyForm2.h"
#include "MyForm.h"
#include <iostream>
namespace Ejercicio2RGBWindows {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRojo;
	private: System::Windows::Forms::Button^ buttonRandom;
	private: System::Windows::Forms::Button^ buttonVerde;
	private: System::Windows::Forms::Button^ buttonPredeterminado;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->buttonRojo = (gcnew System::Windows::Forms::Button());
			this->buttonRandom = (gcnew System::Windows::Forms::Button());
			this->buttonVerde = (gcnew System::Windows::Forms::Button());
			this->buttonPredeterminado = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonRojo
			// 
			this->buttonRojo->BackColor = System::Drawing::Color::DarkRed;
			this->buttonRojo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRojo->Location = System::Drawing::Point(74, 109);
			this->buttonRojo->Name = L"buttonRojo";
			this->buttonRojo->Size = System::Drawing::Size(125, 42);
			this->buttonRojo->TabIndex = 0;
			this->buttonRojo->Text = L"Rojas";
			this->buttonRojo->UseVisualStyleBackColor = false;
			this->buttonRojo->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// buttonRandom
			// 
			this->buttonRandom->BackColor = System::Drawing::Color::Goldenrod;
			this->buttonRandom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRandom->Location = System::Drawing::Point(225, 109);
			this->buttonRandom->Name = L"buttonRandom";
			this->buttonRandom->Size = System::Drawing::Size(125, 42);
			this->buttonRandom->TabIndex = 1;
			this->buttonRandom->Text = L"Random";
			this->buttonRandom->UseVisualStyleBackColor = false;
			this->buttonRandom->Click += gcnew System::EventHandler(this, &MyForm1::buttonRandom_Click);
			// 
			// buttonVerde
			// 
			this->buttonVerde->BackColor = System::Drawing::Color::Green;
			this->buttonVerde->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonVerde->Location = System::Drawing::Point(74, 173);
			this->buttonVerde->Name = L"buttonVerde";
			this->buttonVerde->Size = System::Drawing::Size(125, 42);
			this->buttonVerde->TabIndex = 2;
			this->buttonVerde->Text = L"Verdes";
			this->buttonVerde->UseVisualStyleBackColor = false;
			this->buttonVerde->Click += gcnew System::EventHandler(this, &MyForm1::buttonVerde_Click);
			// 
			// buttonPredeterminado
			// 
			this->buttonPredeterminado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonPredeterminado->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPredeterminado->Location = System::Drawing::Point(225, 173);
			this->buttonPredeterminado->Name = L"buttonPredeterminado";
			this->buttonPredeterminado->Size = System::Drawing::Size(125, 42);
			this->buttonPredeterminado->TabIndex = 3;
			this->buttonPredeterminado->Text = L"Predeterminado";
			this->buttonPredeterminado->UseVisualStyleBackColor = false;
			this->buttonPredeterminado->Click += gcnew System::EventHandler(this, &MyForm1::buttonPredeterminado_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(120, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 37);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Forms RGB";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(428, 265);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonPredeterminado);
			this->Controls->Add(this->buttonVerde);
			this->Controls->Add(this->buttonRandom);
			this->Controls->Add(this->buttonRojo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Forms RGB";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
        private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			
				MyForm2^ formrojo = gcnew MyForm2();
				formrojo->BackColor = Color::Red;
				formrojo->Show();
			
			
 
        }
        private: System::Void buttonRandom_Click(System::Object^ sender, System::EventArgs^ e) {
					
			int r = rand() % 11;
			MyForm2^ formrojo = gcnew MyForm2();
			switch (r) {
			case 0:formrojo->BackColor = Color::Red; break;
			case 1:formrojo->BackColor = Color::Orange; break;
			case 2:formrojo->BackColor = Color::Gold; break;
			case 3:formrojo->BackColor = Color::Green; break;
			case 4:formrojo->BackColor = Color::Gray; break;
			case 5:formrojo->BackColor = Color::Blue; break;
			case 6:formrojo->BackColor = Color::Purple; break;
			case 7:formrojo->BackColor = Color::Pink; break;
			case 8:formrojo->BackColor = Color::Aquamarine; break;
			case 9:formrojo->BackColor = Color::MediumVioletRed; break;
			case 10:formrojo->BackColor = Color::DarkOliveGreen; break;
			case 11:formrojo->BackColor = Color::WhiteSmoke; break;
			}

			formrojo->Show();			
        }

        private: System::Void buttonVerde_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm2^ formrojo = gcnew MyForm2();
			formrojo->BackColor = Color::Green;
			formrojo->Show();			
        }

        private: System::Void buttonPredeterminado_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm^ formp = gcnew MyForm();			
			formp->ShowDialog();		
			
        }

};
}

