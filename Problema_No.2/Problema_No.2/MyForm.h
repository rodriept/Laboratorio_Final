#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include <iomanip>
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "ListaPoligonos.h"
#include "ListaConString.h"

namespace ProblemaNo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int Ancho;
		int Largo;
		int Altura;
		int Base;
		int Lado;
		int Perimetro;
		int Area;
		int Id;
	public: 
		//Listas para datos de tipo int
		ListaPoligonos* GuardarId = new ListaPoligonos();
		ListaPoligonos* GuardarAreas = new ListaPoligonos();
		ListaPoligonos* GuardarPerimetro = new ListaPoligonos();
		//Listas Para datos de tipo string
		ListaConString* GuardarColor = new ListaConString();
		ListaConString* GuardarFigura = new ListaConString();
	private: System::Windows::Forms::Button^ BMostrarFiguras;



		   
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
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
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
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
			this->BMostrarFiguras = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(359, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Problema No.2 Figuras geom?tricas";
			// 
			// LBParaID
			// 
			this->LBParaID->FormattingEnabled = true;
			this->LBParaID->Location = System::Drawing::Point(25, 178);
			this->LBParaID->Name = L"LBParaID";
			this->LBParaID->Size = System::Drawing::Size(68, 212);
			this->LBParaID->TabIndex = 1;
			// 
			// LBTipo
			// 
			this->LBTipo->FormattingEnabled = true;
			this->LBTipo->Location = System::Drawing::Point(99, 178);
			this->LBTipo->Name = L"LBTipo";
			this->LBTipo->Size = System::Drawing::Size(72, 212);
			this->LBTipo->TabIndex = 2;
			// 
			// LBArea
			// 
			this->LBArea->FormattingEnabled = true;
			this->LBArea->Location = System::Drawing::Point(268, 178);
			this->LBArea->Name = L"LBArea";
			this->LBArea->Size = System::Drawing::Size(77, 212);
			this->LBArea->TabIndex = 3;
			// 
			// LBPerimetro
			// 
			this->LBPerimetro->FormattingEnabled = true;
			this->LBPerimetro->Location = System::Drawing::Point(177, 178);
			this->LBPerimetro->Name = L"LBPerimetro";
			this->LBPerimetro->Size = System::Drawing::Size(85, 212);
			this->LBPerimetro->TabIndex = 4;
			// 
			// LBColor
			// 
			this->LBColor->FormattingEnabled = true;
			this->LBColor->Location = System::Drawing::Point(351, 178);
			this->LBColor->Name = L"LBColor";
			this->LBColor->Size = System::Drawing::Size(78, 212);
			this->LBColor->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Tipo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(174, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Per?metro:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(265, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Area:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(348, 162);
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
			this->BRectangulo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BRectangulo->Location = System::Drawing::Point(168, 97);
			this->BRectangulo->Name = L"BRectangulo";
			this->BRectangulo->Size = System::Drawing::Size(85, 36);
			this->BRectangulo->TabIndex = 17;
			this->BRectangulo->Text = L"Ingresar Rectangulo";
			this->BRectangulo->UseVisualStyleBackColor = true;
			this->BRectangulo->Visible = false;
			this->BRectangulo->Click += gcnew System::EventHandler(this, &MyForm::BRectangulo_Click);
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
			this->BTriangulo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTriangulo->Location = System::Drawing::Point(270, 97);
			this->BTriangulo->Name = L"BTriangulo";
			this->BTriangulo->Size = System::Drawing::Size(75, 36);
			this->BTriangulo->TabIndex = 22;
			this->BTriangulo->Text = L"Ingresar Triangulo";
			this->BTriangulo->UseVisualStyleBackColor = true;
			this->BTriangulo->Visible = false;
			this->BTriangulo->Click += gcnew System::EventHandler(this, &MyForm::BTriangulo_Click);
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
			this->BCuadrado->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BCuadrado->Location = System::Drawing::Point(351, 97);
			this->BCuadrado->Name = L"BCuadrado";
			this->BCuadrado->Size = System::Drawing::Size(73, 36);
			this->BCuadrado->TabIndex = 25;
			this->BCuadrado->Text = L"Ingresar Cuadrado";
			this->BCuadrado->UseVisualStyleBackColor = true;
			this->BCuadrado->Visible = false;
			this->BCuadrado->Click += gcnew System::EventHandler(this, &MyForm::BCuadrado_Click);
			// 
			// BMostrarFiguras
			// 
			this->BMostrarFiguras->Enabled = false;
			this->BMostrarFiguras->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BMostrarFiguras->Location = System::Drawing::Point(25, 395);
			this->BMostrarFiguras->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BMostrarFiguras->Name = L"BMostrarFiguras";
			this->BMostrarFiguras->Size = System::Drawing::Size(108, 21);
			this->BMostrarFiguras->TabIndex = 26;
			this->BMostrarFiguras->Text = L"Mostrar Figuras";
			this->BMostrarFiguras->UseVisualStyleBackColor = true;
			this->BMostrarFiguras->Click += gcnew System::EventHandler(this, &MyForm::BMostrarFiguras_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 462);
			this->Controls->Add(this->BMostrarFiguras);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Ejercicio No.2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//Seleccion de figura para ingresar
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
	}//dependiendo de que seleccione en el ComboBox se mostrar donde puede ingresar los datos

    private: System::Void BRectangulo_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		//Ingresar un rectangulo
		string Color = "Azul";
		string tipoFigura = "Rectangulo";
		Ancho = Convert::ToInt32(TBAnchoRec->Text);
		Largo = Convert::ToInt32(TBLargoRec->Text);
		if (TBAnchoRec->Text == "" || TBLargoRec->Text == "")
		{
			MessageBox::Show("Debe ingresar los datos de la figura", "Error: datos no ingresados", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (TBAnchoRec->Text == TBLargoRec->Text)
		{
			MessageBox::Show("Est? ingresando datos con las caracter?sticas de un cuadrado, ingrese dos valores distintos", "Error: ingreso de valores iguales", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			//Calculo del ?rea y perimetro de la figura y su ID
			Rectangulo rectangulo(Ancho, Largo);
			Perimetro = rectangulo.perimetro();
			Area = rectangulo.area();
			Id++;
			rectangulo.SetId(Id);
			
			//Agregar los datos a las listas correspondientes
			GuardarAreas->add(Area);
			GuardarPerimetro->add(Perimetro);
			GuardarId->add(rectangulo.GetId());
			GuardarColor->add(Color);
			GuardarFigura->add(tipoFigura);
			BMostrarFiguras->Enabled = true;
		}
    }
    private: System::Void BTriangulo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Ingresar un triangulo 
		string Color = "Amarillo";
		string tipoFigura = "Triangulo";
		
		Altura = Convert::ToInt32(TBAlturaTria->Text);
		Base = Convert::ToInt32(TBBaseTria->Text);
		if (TBAlturaTria->Text == "" || TBBaseTria->Text == "")
		{
			MessageBox::Show("Ingrese los datos para la figura geom?trica", "Error: Datos no ingresados", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			//Calculo del ?rea y perimetro de la figura y su ID
			Triangulo triangulo(Altura,Base);
			triangulo.SetArista(Altura);
			triangulo.Setarista2(Base);
			triangulo.SetLado();
			Perimetro = triangulo.ObtenerPerimetro();
			Area = triangulo.ObtenerArea();
			Id++;
			triangulo.SetId(Id);
			//Agregar los datos a las listas correspondientes
			GuardarAreas->add(Area);
			GuardarPerimetro->add(Perimetro);
			GuardarId->add(triangulo.GetId());
			GuardarColor->add(Color);
			GuardarFigura->add(tipoFigura);
			BMostrarFiguras->Enabled = true;
		}
		
    }
    private: System::Void BCuadrado_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		string TipoFigura = "Cuadrado";
		string Color = "Rojo";

		Lado = Convert::ToInt32(TBLadoCuadrado->Text);
		if (TBLadoCuadrado->Text == "")
		{
			MessageBox::Show("Ingrese los datos para la figura geom?trica", "Error: Datos no ingresados", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			//Calculo del ?rea y perimetro de la figura y su ID
			Cuadrado cuadrado(Lado, Lado);
			Perimetro = cuadrado.perimetro();
			Area = cuadrado.area();
			Id++;
			cuadrado.SetId(Id);
			
			//Agregar los datos a las listas correspondientes
			GuardarAreas->add(Area);
			GuardarPerimetro->add(Perimetro);
			GuardarId->add(cuadrado.GetId());
			GuardarColor->add(Color);
			GuardarFigura->add(TipoFigura);
			BMostrarFiguras->Enabled = true;
		}
		
		
    }
    private: System::Void BMostrarFiguras_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		while (!GuardarPerimetro->empty() && !GuardarAreas->empty() && !GuardarId->empty())
		{
			//Llenar los list box que tiene datos enteros llamando cada uno su respectiva lista
			LBArea->Items->Add(GuardarAreas->pop());
			LBPerimetro->Items->Add(GuardarPerimetro->pop());
			LBParaID->Items->Add(GuardarId->pop());
		}
		string colores;
		string Tipos;
		String^ ImprimirColores;
		String^ ImprimirTipos;
		while (!GuardarColor->empty() && !GuardarFigura->empty())
		{
			//Llenar los list box que tiene datos tipo string llamando cada uno a su respectiva lista
			colores = GuardarColor->pop();
			Tipos = GuardarFigura->pop();

			ImprimirColores = gcnew String(colores.c_str());
			ImprimirTipos = gcnew String(Tipos.c_str());
			LBColor->Items->Add(ImprimirColores);
			LBTipo->Items->Add(ImprimirTipos);
			this->Refresh();
		}
    }
};
}
