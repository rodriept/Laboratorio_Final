#pragma once

namespace ProblemaNo1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBArregloTam;
	private: System::Windows::Forms::Button^ BIngresarArreglo;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBArregloTam = (gcnew System::Windows::Forms::TextBox());
			this->BIngresarArreglo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Utilización de clase Hashing (Problema No.1)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese el tamaño del arreglo:";
			// 
			// TBArregloTam
			// 
			this->TBArregloTam->Location = System::Drawing::Point(164, 54);
			this->TBArregloTam->Name = L"TBArregloTam";
			this->TBArregloTam->Size = System::Drawing::Size(47, 20);
			this->TBArregloTam->TabIndex = 2;
			// 
			// BIngresarArreglo
			// 
			this->BIngresarArreglo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIngresarArreglo->Location = System::Drawing::Point(217, 51);
			this->BIngresarArreglo->Name = L"BIngresarArreglo";
			this->BIngresarArreglo->Size = System::Drawing::Size(75, 23);
			this->BIngresarArreglo->TabIndex = 3;
			this->BIngresarArreglo->Text = L"Ingresar";
			this->BIngresarArreglo->UseVisualStyleBackColor = true;
			this->BIngresarArreglo->Click += gcnew System::EventHandler(this, &MyForm::BIngresarArreglo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(398, 333);
			this->Controls->Add(this->BIngresarArreglo);
			this->Controls->Add(this->TBArregloTam);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Problema No.1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<int>^ Arreglo;
		int Key;
		Hashtable^ Hashing = gcnew Hashtable;
	private: System::Void BIngresarArreglo_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			
			if (TBArregloTam->Text == nullptr)
			{
				MessageBox::Show("Ingrese un tamaño del vector", "Error: Vector inexistente", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				Arreglo = gcnew array<int>(Convert::ToInt32(TBArregloTam->Text));
				Random^ NumerosRandom = gcnew Random();
				for (int i = 0; i < Arreglo->Length; i++)
				{
					Arreglo[i] = NumerosRandom->Next(0, 100);
				}
				for (int i = 0; i < Arreglo->Length; i++)
				{
					Key = Arreglo[i] % Arreglo->Length;
					Hashing->Add(Key, Arreglo[i]);
				}
				MessageBox::Show("El arreglo ya fue llenado con números aleatorios", "Arreglo lleno", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			}
		}
		catch (...)
		{

		}
		
	}
		   
		  
	};
}
