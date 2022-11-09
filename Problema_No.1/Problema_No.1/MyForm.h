#pragma once

namespace ProblemaNo1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TBBuscarNumArreglo;

	private: System::Windows::Forms::Button^ Bbuscar;
	private: System::Windows::Forms::ComboBox^ CBElegirBusqueda;





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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TBBuscarNumArreglo = (gcnew System::Windows::Forms::TextBox());
			this->Bbuscar = (gcnew System::Windows::Forms::Button());
			this->CBElegirBusqueda = (gcnew System::Windows::Forms::ComboBox());
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese el tamaño del arreglo:";
			// 
			// TBArregloTam
			// 
			this->TBArregloTam->Location = System::Drawing::Point(189, 58);
			this->TBArregloTam->Name = L"TBArregloTam";
			this->TBArregloTam->Size = System::Drawing::Size(47, 20);
			this->TBArregloTam->TabIndex = 2;
			// 
			// BIngresarArreglo
			// 
			this->BIngresarArreglo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BIngresarArreglo->Location = System::Drawing::Point(242, 56);
			this->BIngresarArreglo->Name = L"BIngresarArreglo";
			this->BIngresarArreglo->Size = System::Drawing::Size(75, 23);
			this->BIngresarArreglo->TabIndex = 3;
			this->BIngresarArreglo->Text = L"Ingresar";
			this->BIngresarArreglo->UseVisualStyleBackColor = true;
			this->BIngresarArreglo->Click += gcnew System::EventHandler(this, &MyForm::BIngresarArreglo_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Buscar un número generado:";
			// 
			// TBBuscarNumArreglo
			// 
			this->TBBuscarNumArreglo->Location = System::Drawing::Point(15, 177);
			this->TBBuscarNumArreglo->Name = L"TBBuscarNumArreglo";
			this->TBBuscarNumArreglo->Size = System::Drawing::Size(47, 20);
			this->TBBuscarNumArreglo->TabIndex = 5;
			// 
			// Bbuscar
			// 
			this->Bbuscar->Enabled = false;
			this->Bbuscar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Bbuscar->Location = System::Drawing::Point(68, 174);
			this->Bbuscar->Name = L"Bbuscar";
			this->Bbuscar->Size = System::Drawing::Size(88, 23);
			this->Bbuscar->TabIndex = 6;
			this->Bbuscar->Text = L"Buscar número";
			this->Bbuscar->UseVisualStyleBackColor = true;
			this->Bbuscar->Click += gcnew System::EventHandler(this, &MyForm::Bbuscar_Click);
			// 
			// CBElegirBusqueda
			// 
			this->CBElegirBusqueda->FormattingEnabled = true;
			this->CBElegirBusqueda->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Secuencial", L"Binaria" });
			this->CBElegirBusqueda->Location = System::Drawing::Point(15, 136);
			this->CBElegirBusqueda->Name = L"CBElegirBusqueda";
			this->CBElegirBusqueda->Size = System::Drawing::Size(121, 21);
			this->CBElegirBusqueda->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(398, 333);
			this->Controls->Add(this->CBElegirBusqueda);
			this->Controls->Add(this->Bbuscar);
			this->Controls->Add(this->TBBuscarNumArreglo);
			this->Controls->Add(this->label3);
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
		Stopwatch^ TimerControler = gcnew Stopwatch();
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
					Arreglo[i] = NumerosRandom->Next(0, 10);
				}
				
				for (int i = 0; i < Arreglo->Length; i++)
				{
					int j = 0;
					Key = Arreglo[i] % Arreglo->Length;
					while (Hashing->Contains(Key))
					{
						j++;
						Key++;
						Key %= Arreglo->Length;
					}
					Hashing->Add(Key, Arreglo[i]);
			
				}
	
				MessageBox::Show("El arreglo ya fue llenado con números aleatorios", "Arreglo lleno", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				Bbuscar->Enabled = true;
			}
		}
		catch (...)
		{

		}
		
	}
		   
		  
	private: System::Void Bbuscar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int opcion = CBElegirBusqueda->SelectedIndex;
		int EncontrarNum, cont = 0;
		array<int>^ ArregloTemp = gcnew array<int>(Arreglo->Length);
		if (opcion == 1 || opcion == 0)
		{
			switch (opcion)
			{
			case 0:
				EncontrarNum = Convert::ToInt32(TBBuscarNumArreglo->Text);
				for (int i = 0; i < Arreglo->Length; i++)
				{
					if (Arreglo[i] == EncontrarNum)
					{
					  MessageBox::Show("El Número" + EncontrarNum + " se encuentra en la posicón: " + i, "Número encontrado", MessageBoxButtons::OK);
					}
					else
					{
					  cont++;
					}

				}
				if (cont == Arreglo->Length)
				{
					MessageBox::Show("El Número" + EncontrarNum +" no se encuentra en el arreglo", "Error: Número no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				break;
			case 1:
				EncontrarNum = Convert::ToInt32(TBBuscarNumArreglo->Text);
				int inf = 0, sup = ArregloTemp->Length, mitad;

				for (int i = 0; i < Arreglo->Length; i++)
				{
					ArregloTemp[i] = Arreglo[i];
				}
				for (int i = 0; i < ArregloTemp->Length; i++) //Ordenar el arreglo Temporal
				{
					for (int j = i + 1; j < ArregloTemp->Length; j++)
					{
						if (ArregloTemp[i] > ArregloTemp[j])
						{
							int Temporal = ArregloTemp[i];
							ArregloTemp[i] = ArregloTemp[j];
							ArregloTemp[j] = Temporal;
						}
					}
				}
				while (inf <= sup)
				{
					mitad = (inf + sup) / 2;
					if (ArregloTemp[mitad] == EncontrarNum)
					{
						MessageBox::Show("El número" + EncontrarNum + " se encuentra en la posición : " + mitad, "Número Encontrado", MessageBoxButtons::OK);
					}
					if(ArregloTemp[mitad] > EncontrarNum)
					{
						sup = mitad;
						mitad = (inf + sup) / 2;
					}
					if (ArregloTemp[mitad]< EncontrarNum)
					{
						inf = mitad; 
						mitad = (inf + sup) / 2;
					}
				}
				break;
			}
		}
		else
		{
			MessageBox::Show("Ingrese una opcion para buscar el número", "Error: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
};
}
