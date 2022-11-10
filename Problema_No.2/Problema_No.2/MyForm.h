#pragma once

namespace ProblemaNo2 {

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
	private: System::Windows::Forms::ListBox^ LBParaID;
	private: System::Windows::Forms::ListBox^ LBTipo;
	private: System::Windows::Forms::ListBox^ LBArea;
	private: System::Windows::Forms::ListBox^ LBPerimetro;
	private: System::Windows::Forms::ListBox^ LBColor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ CBSeleccionarFigura;
	private: System::Windows::Forms::Label^ LAncho;
	private: System::Windows::Forms::Label^ LBLargo;



	private: System::Windows::Forms::TextBox^ TBAnchoRec;
	private: System::Windows::Forms::TextBox^ TBLargoRec;
	private: System::Windows::Forms::Button^ BRectangulo;

	private: System::Windows::Forms::Label^ LAltura;
	private: System::Windows::Forms::Label^ LBase;


	private: System::Windows::Forms::TextBox^ TBAlturaTria;
	private: System::Windows::Forms::TextBox^ TBBaseTria;
	private: System::Windows::Forms::Button^ BTriangulo;

	private: System::Windows::Forms::Label^ LBLado;


	private: System::Windows::Forms::TextBox^ TBLadoCuadrado;
	private: System::Windows::Forms::Button^ BCuadrado;


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
			this->LBParaID = (gcnew System::Windows::Forms::ListBox());
			this->LBTipo = (gcnew System::Windows::Forms::ListBox());
			this->LBArea = (gcnew System::Windows::Forms::ListBox());
			this->LBPerimetro = (gcnew System::Windows::Forms::ListBox());
			this->LBColor = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CBSeleccionarFigura = (gcnew System::Windows::Forms::ComboBox());
			this->LAncho = (gcnew System::Windows::Forms::Label());
			this->LBLargo = (gcnew System::Windows::Forms::Label());
			this->TBAnchoRec = (gcnew System::Windows::Forms::TextBox());
			this->TBLargoRec = (gcnew System::Windows::Forms::TextBox());
			this->BRectangulo = (gcnew System::Windows::Forms::Button());
			this->LAltura = (gcnew System::Windows::Forms::Label());
			this->LBase = (gcnew System::Windows::Forms::Label());
			this->TBAlturaTria = (gcnew System::Windows::Forms::TextBox());
			this->TBBaseTria = (gcnew System::Windows::Forms::TextBox());
			this->BTriangulo = (gcnew System::Windows::Forms::Button());
			this->LBLado = (gcnew System::Windows::Forms::Label());
			this->TBLadoCuadrado = (gcnew System::Windows::Forms::TextBox());
			this->BCuadrado = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(119, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Problema No.2";
			// 
			// LBParaID
			// 
			this->LBParaID->FormattingEnabled = true;
			this->LBParaID->Location = System::Drawing::Point(12, 178);
			this->LBParaID->Name = L"LBParaID";
			this->LBParaID->Size = System::Drawing::Size(68, 212);
			this->LBParaID->TabIndex = 1;
			// 
			// LBTipo
			// 
			this->LBTipo->FormattingEnabled = true;
			this->LBTipo->Location = System::Drawing::Point(86, 178);
			this->LBTipo->Name = L"LBTipo";
			this->LBTipo->Size = System::Drawing::Size(58, 212);
			this->LBTipo->TabIndex = 2;
			// 
			// LBArea
			// 
			this->LBArea->FormattingEnabled = true;
			this->LBArea->Location = System::Drawing::Point(224, 178);
			this->LBArea->Name = L"LBArea";
			this->LBArea->Size = System::Drawing::Size(68, 212);
			this->LBArea->TabIndex = 3;
			// 
			// LBPerimetro
			// 
			this->LBPerimetro->FormattingEnabled = true;
			this->LBPerimetro->Location = System::Drawing::Point(150, 178);
			this->LBPerimetro->Name = L"LBPerimetro";
			this->LBPerimetro->Size = System::Drawing::Size(68, 212);
			this->LBPerimetro->TabIndex = 4;
			// 
			// LBColor
			// 
			this->LBColor->FormattingEnabled = true;
			this->LBColor->Location = System::Drawing::Point(298, 178);
			this->LBColor->Name = L"LBColor";
			this->LBColor->Size = System::Drawing::Size(68, 212);
			this->LBColor->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Tipo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(147, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Perímetro:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(221, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Area:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(295, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Color:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Ingresar figura";
			// 
			// CBSeleccionarFigura
			// 
			this->CBSeleccionarFigura->FormattingEnabled = true;
			this->CBSeleccionarFigura->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Triangulo", L"Rectangulo", L"Cuadrado" });
			this->CBSeleccionarFigura->Location = System::Drawing::Point(15, 70);
			this->CBSeleccionarFigura->Name = L"CBSeleccionarFigura";
			this->CBSeleccionarFigura->Size = System::Drawing::Size(121, 21);
			this->CBSeleccionarFigura->TabIndex = 12;
			this->CBSeleccionarFigura->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// LAncho
			// 
			this->LAncho->AutoSize = true;
			this->LAncho->Location = System::Drawing::Point(165, 54);
			this->LAncho->Name = L"LAncho";
			this->LAncho->Size = System::Drawing::Size(38, 13);
			this->LAncho->TabIndex = 13;
			this->LAncho->Text = L"Ancho";
			this->LAncho->Visible = false;
			// 
			// LBLargo
			// 
			this->LBLargo->AutoSize = true;
			this->LBLargo->Location = System::Drawing::Point(219, 54);
			this->LBLargo->Name = L"LBLargo";
			this->LBLargo->Size = System::Drawing::Size(34, 13);
			this->LBLargo->TabIndex = 14;
			this->LBLargo->Text = L"Largo";
			this->LBLargo->Visible = false;
			// 
			// TBAnchoRec
			// 
			this->TBAnchoRec->Location = System::Drawing::Point(168, 71);
			this->TBAnchoRec->Name = L"TBAnchoRec";
			this->TBAnchoRec->Size = System::Drawing::Size(35, 20);
			this->TBAnchoRec->TabIndex = 15;
			this->TBAnchoRec->Visible = false;
			// 
			// TBLargoRec
			// 
			this->TBLargoRec->Location = System::Drawing::Point(218, 71);
			this->TBLargoRec->Name = L"TBLargoRec";
			this->TBLargoRec->Size = System::Drawing::Size(35, 20);
			this->TBLargoRec->TabIndex = 16;
			this->TBLargoRec->Visible = false;
			// 
			// BRectangulo
			// 
			this->BRectangulo->Location = System::Drawing::Point(168, 97);
			this->BRectangulo->Name = L"BRectangulo";
			this->BRectangulo->Size = System::Drawing::Size(85, 36);
			this->BRectangulo->TabIndex = 17;
			this->BRectangulo->Text = L"Ingresar Rectangulo";
			this->BRectangulo->UseVisualStyleBackColor = true;
			this->BRectangulo->Visible = false;
			// 
			// LAltura
			// 
			this->LAltura->AutoSize = true;
			this->LAltura->Location = System::Drawing::Point(271, 54);
			this->LAltura->Name = L"LAltura";
			this->LAltura->Size = System::Drawing::Size(34, 13);
			this->LAltura->TabIndex = 18;
			this->LAltura->Text = L"Altura";
			this->LAltura->Visible = false;
			// 
			// LBase
			// 
			this->LBase->AutoSize = true;
			this->LBase->Location = System::Drawing::Point(307, 54);
			this->LBase->Name = L"LBase";
			this->LBase->Size = System::Drawing::Size(31, 13);
			this->LBase->TabIndex = 19;
			this->LBase->Text = L"Base";
			this->LBase->Visible = false;
			// 
			// TBAlturaTria
			// 
			this->TBAlturaTria->Location = System::Drawing::Point(270, 71);
			this->TBAlturaTria->Name = L"TBAlturaTria";
			this->TBAlturaTria->Size = System::Drawing::Size(35, 20);
			this->TBAlturaTria->TabIndex = 20;
			this->TBAlturaTria->Visible = false;
			// 
			// TBBaseTria
			// 
			this->TBBaseTria->Location = System::Drawing::Point(310, 71);
			this->TBBaseTria->Name = L"TBBaseTria";
			this->TBBaseTria->Size = System::Drawing::Size(35, 20);
			this->TBBaseTria->TabIndex = 21;
			this->TBBaseTria->Visible = false;
			// 
			// BTriangulo
			// 
			this->BTriangulo->Location = System::Drawing::Point(270, 97);
			this->BTriangulo->Name = L"BTriangulo";
			this->BTriangulo->Size = System::Drawing::Size(75, 36);
			this->BTriangulo->TabIndex = 22;
			this->BTriangulo->Text = L"Ingresar Triangulo";
			this->BTriangulo->UseVisualStyleBackColor = true;
			this->BTriangulo->Visible = false;
			// 
			// LBLado
			// 
			this->LBLado->AutoSize = true;
			this->LBLado->Location = System::Drawing::Point(367, 54);
			this->LBLado->Name = L"LBLado";
			this->LBLado->Size = System::Drawing::Size(31, 13);
			this->LBLado->TabIndex = 23;
			this->LBLado->Text = L"Lado";
			this->LBLado->Visible = false;
			// 
			// TBLadoCuadrado
			// 
			this->TBLadoCuadrado->Location = System::Drawing::Point(363, 71);
			this->TBLadoCuadrado->Name = L"TBLadoCuadrado";
			this->TBLadoCuadrado->Size = System::Drawing::Size(35, 20);
			this->TBLadoCuadrado->TabIndex = 24;
			this->TBLadoCuadrado->Visible = false;
			// 
			// BCuadrado
			// 
			this->BCuadrado->Location = System::Drawing::Point(351, 97);
			this->BCuadrado->Name = L"BCuadrado";
			this->BCuadrado->Size = System::Drawing::Size(73, 36);
			this->BCuadrado->TabIndex = 25;
			this->BCuadrado->Text = L"Ingresar Cuadrado";
			this->BCuadrado->UseVisualStyleBackColor = true;
			this->BCuadrado->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 462);
			this->Controls->Add(this->BCuadrado);
			this->Controls->Add(this->TBLadoCuadrado);
			this->Controls->Add(this->LBLado);
			this->Controls->Add(this->BTriangulo);
			this->Controls->Add(this->TBBaseTria);
			this->Controls->Add(this->TBAlturaTria);
			this->Controls->Add(this->LBase);
			this->Controls->Add(this->LAltura);
			this->Controls->Add(this->BRectangulo);
			this->Controls->Add(this->TBLargoRec);
			this->Controls->Add(this->TBAnchoRec);
			this->Controls->Add(this->LBLargo);
			this->Controls->Add(this->LAncho);
			this->Controls->Add(this->CBSeleccionarFigura);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LBColor);
			this->Controls->Add(this->LBPerimetro);
			this->Controls->Add(this->LBArea);
			this->Controls->Add(this->LBTipo);
			this->Controls->Add(this->LBParaID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Ejercicio No.2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		switch (CBSeleccionarFigura->SelectedIndex)
		{
		case 0:
			LBase->Visible = true;
			LAltura->Visible = true;
			TBAlturaTria->Visible = true;
			TBBaseTria->Visible = true;
			BTriangulo->Visible = true;

			LAncho->Visible = false;
			LBLargo->Visible = false;
			TBAnchoRec->Visible = false;
			TBLargoRec->Visible = false;
			BRectangulo->Visible = false;

			LBLado->Visible = false;
			TBLadoCuadrado->Visible = false;
			BCuadrado->Visible = false;
			break;
		case 1:
			LBase->Visible = false;
			LAltura->Visible = false;
			TBAlturaTria->Visible = false;
			TBBaseTria->Visible = false;
			BTriangulo->Visible = false;

			LAncho->Visible = true;
			LBLargo->Visible = true;
			TBAnchoRec->Visible = true;
			TBLargoRec->Visible = true;
			BRectangulo->Visible = true;

			LBLado->Visible = false;
			TBLadoCuadrado->Visible = false;
			BCuadrado->Visible = false;
			break;
		case 2:
			LBase->Visible = false;
			LAltura->Visible = false;
			TBAlturaTria->Visible = false;
			TBBaseTria->Visible = false;
			BTriangulo->Visible = false;

			LAncho->Visible = false;
			LBLargo->Visible = false;
			TBAnchoRec->Visible = false;
			TBLargoRec->Visible = false;
			BRectangulo->Visible = false;

			LBLado->Visible = true;
			TBLadoCuadrado->Visible = true;
			BCuadrado->Visible = true;
			break;
		default:
			break;
		}
	}

};
}
