#pragma once
#include <math.h>

namespace zadanie6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OknoGlowne
	/// </summary>
	public ref class OknoGlowne : public System::Windows::Forms::Form
	{
	public:
		OknoGlowne(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~OknoGlowne()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnWczytaj;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblZeroX;
	private: System::Windows::Forms::TextBox^ txtZeroX;

	private: System::Windows::Forms::Label^ lblZeroY;
	private: System::Windows::Forms::TextBox^ txtZeroY;

	private: System::Windows::Forms::Label^ lblZero;
	private: System::Windows::Forms::Label^ lblOsX;
	private: System::Windows::Forms::TextBox^ txtJednostkiX;
	private: System::Windows::Forms::Label^ lblJednostkiX;
	private: System::Windows::Forms::Label^ lblOsY;
	private: System::Windows::Forms::TextBox^ txtJednostkiY;
	private: System::Windows::Forms::Label^ lblJednostkiY;
	private: System::Windows::Forms::RadioButton^ rdbLogarytmicznaX;

	private: System::Windows::Forms::RadioButton^ rdbNormalna;
	private: System::Windows::Forms::Label^ lblRodzaj;
	private: System::Windows::Forms::RadioButton^ rdbWyborX;
	private: System::Windows::Forms::RadioButton^ rdbWyborY;
	private: System::Windows::Forms::RadioButton^ rdbWyborZero;
	private: System::Windows::Forms::TextBox^ txtOsXdane;

	private: System::Windows::Forms::TextBox^ txtOsYdane;


	private: System::Windows::Forms::Label^ lblWyniki;

	private: System::Windows::Forms::Label^ lblWynikX;
	private: System::Windows::Forms::Label^ lblWynikY;
	private: System::Windows::Forms::RadioButton^ rdbLogarytmicznaY;
	private: System::Windows::Forms::RadioButton^ rdbLogarytmicznaXY;
	private: System::Windows::Forms::Button^ btnCzysc;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listX;
	private: System::Windows::Forms::ListBox^ listY;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ lblXp;
	private: System::Windows::Forms::TextBox^ txtXp;
	private: System::Windows::Forms::TextBox^ txtYp;
	private: System::Windows::Forms::Label^ lblYp;





	private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;





	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnWczytaj = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblZeroX = (gcnew System::Windows::Forms::Label());
			this->txtZeroX = (gcnew System::Windows::Forms::TextBox());
			this->lblZeroY = (gcnew System::Windows::Forms::Label());
			this->txtZeroY = (gcnew System::Windows::Forms::TextBox());
			this->lblZero = (gcnew System::Windows::Forms::Label());
			this->lblOsX = (gcnew System::Windows::Forms::Label());
			this->txtJednostkiX = (gcnew System::Windows::Forms::TextBox());
			this->lblJednostkiX = (gcnew System::Windows::Forms::Label());
			this->lblOsY = (gcnew System::Windows::Forms::Label());
			this->txtJednostkiY = (gcnew System::Windows::Forms::TextBox());
			this->lblJednostkiY = (gcnew System::Windows::Forms::Label());
			this->rdbLogarytmicznaX = (gcnew System::Windows::Forms::RadioButton());
			this->rdbNormalna = (gcnew System::Windows::Forms::RadioButton());
			this->lblRodzaj = (gcnew System::Windows::Forms::Label());
			this->rdbWyborX = (gcnew System::Windows::Forms::RadioButton());
			this->rdbWyborY = (gcnew System::Windows::Forms::RadioButton());
			this->rdbWyborZero = (gcnew System::Windows::Forms::RadioButton());
			this->txtOsXdane = (gcnew System::Windows::Forms::TextBox());
			this->txtOsYdane = (gcnew System::Windows::Forms::TextBox());
			this->lblWyniki = (gcnew System::Windows::Forms::Label());
			this->lblWynikX = (gcnew System::Windows::Forms::Label());
			this->lblWynikY = (gcnew System::Windows::Forms::Label());
			this->rdbLogarytmicznaY = (gcnew System::Windows::Forms::RadioButton());
			this->rdbLogarytmicznaXY = (gcnew System::Windows::Forms::RadioButton());
			this->btnCzysc = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listX = (gcnew System::Windows::Forms::ListBox());
			this->listY = (gcnew System::Windows::Forms::ListBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->lblXp = (gcnew System::Windows::Forms::Label());
			this->txtXp = (gcnew System::Windows::Forms::TextBox());
			this->txtYp = (gcnew System::Windows::Forms::TextBox());
			this->lblYp = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnWczytaj
			// 
			this->btnWczytaj->Location = System::Drawing::Point(233, 27);
			this->btnWczytaj->Name = L"btnWczytaj";
			this->btnWczytaj->Size = System::Drawing::Size(117, 23);
			this->btnWczytaj->TabIndex = 0;
			this->btnWczytaj->Text = L"Wczytaj wykres";
			this->btnWczytaj->UseVisualStyleBackColor = true;
			this->btnWczytaj->Click += gcnew System::EventHandler(this, &OknoGlowne::wczytaj_click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &OknoGlowne::panel_click);
			// 
			// lblZeroX
			// 
			this->lblZeroX->AutoSize = true;
			this->lblZeroX->Location = System::Drawing::Point(657, 70);
			this->lblZeroX->Name = L"lblZeroX";
			this->lblZeroX->Size = System::Drawing::Size(15, 13);
			this->lblZeroX->TabIndex = 2;
			this->lblZeroX->Text = L"x:";
			// 
			// txtZeroX
			// 
			this->txtZeroX->Location = System::Drawing::Point(678, 70);
			this->txtZeroX->Name = L"txtZeroX";
			this->txtZeroX->Size = System::Drawing::Size(100, 20);
			this->txtZeroX->TabIndex = 3;
			// 
			// lblZeroY
			// 
			this->lblZeroY->AutoSize = true;
			this->lblZeroY->Location = System::Drawing::Point(656, 97);
			this->lblZeroY->Name = L"lblZeroY";
			this->lblZeroY->Size = System::Drawing::Size(15, 13);
			this->lblZeroY->TabIndex = 4;
			this->lblZeroY->Text = L"y:";
			// 
			// txtZeroY
			// 
			this->txtZeroY->Location = System::Drawing::Point(677, 97);
			this->txtZeroY->Name = L"txtZeroY";
			this->txtZeroY->Size = System::Drawing::Size(100, 20);
			this->txtZeroY->TabIndex = 5;
			// 
			// lblZero
			// 
			this->lblZero->AutoSize = true;
			this->lblZero->Location = System::Drawing::Point(656, 54);
			this->lblZero->Name = L"lblZero";
			this->lblZero->Size = System::Drawing::Size(180, 13);
			this->lblZero->TabIndex = 6;
			this->lblZero->Text = L"Wspó³rzêdne punktu pocz¹tkowego";
			// 
			// lblOsX
			// 
			this->lblOsX->AutoSize = true;
			this->lblOsX->Location = System::Drawing::Point(678, 134);
			this->lblOsX->Name = L"lblOsX";
			this->lblOsX->Size = System::Drawing::Size(30, 13);
			this->lblOsX->TabIndex = 7;
			this->lblOsX->Text = L"Oœ X";
			// 
			// txtJednostkiX
			// 
			this->txtJednostkiX->Location = System::Drawing::Point(677, 171);
			this->txtJednostkiX->Name = L"txtJednostkiX";
			this->txtJednostkiX->Size = System::Drawing::Size(100, 20);
			this->txtJednostkiX->TabIndex = 8;
			// 
			// lblJednostkiX
			// 
			this->lblJednostkiX->AutoSize = true;
			this->lblJednostkiX->Location = System::Drawing::Point(681, 152);
			this->lblJednostkiX->Name = L"lblJednostkiX";
			this->lblJednostkiX->Size = System::Drawing::Size(78, 13);
			this->lblJednostkiX->TabIndex = 9;
			this->lblJednostkiX->Text = L"Iloœæ jednostek";
			// 
			// lblOsY
			// 
			this->lblOsY->AutoSize = true;
			this->lblOsY->Location = System::Drawing::Point(677, 243);
			this->lblOsY->Name = L"lblOsY";
			this->lblOsY->Size = System::Drawing::Size(30, 13);
			this->lblOsY->TabIndex = 10;
			this->lblOsY->Text = L"Oœ Y";
			// 
			// txtJednostkiY
			// 
			this->txtJednostkiY->Location = System::Drawing::Point(677, 280);
			this->txtJednostkiY->Name = L"txtJednostkiY";
			this->txtJednostkiY->Size = System::Drawing::Size(100, 20);
			this->txtJednostkiY->TabIndex = 11;
			// 
			// lblJednostkiY
			// 
			this->lblJednostkiY->AutoSize = true;
			this->lblJednostkiY->Location = System::Drawing::Point(677, 261);
			this->lblJednostkiY->Name = L"lblJednostkiY";
			this->lblJednostkiY->Size = System::Drawing::Size(78, 13);
			this->lblJednostkiY->TabIndex = 12;
			this->lblJednostkiY->Text = L"Iloœæ jednostek";
			// 
			// rdbLogarytmicznaX
			// 
			this->rdbLogarytmicznaX->AutoSize = true;
			this->rdbLogarytmicznaX->Location = System::Drawing::Point(678, 389);
			this->rdbLogarytmicznaX->Name = L"rdbLogarytmicznaX";
			this->rdbLogarytmicznaX->Size = System::Drawing::Size(97, 17);
			this->rdbLogarytmicznaX->TabIndex = 13;
			this->rdbLogarytmicznaX->TabStop = true;
			this->rdbLogarytmicznaX->Text = L"logarytmiczna x";
			this->rdbLogarytmicznaX->UseVisualStyleBackColor = true;
			// 
			// rdbNormalna
			// 
			this->rdbNormalna->AutoSize = true;
			this->rdbNormalna->Location = System::Drawing::Point(678, 366);
			this->rdbNormalna->Name = L"rdbNormalna";
			this->rdbNormalna->Size = System::Drawing::Size(68, 17);
			this->rdbNormalna->TabIndex = 14;
			this->rdbNormalna->TabStop = true;
			this->rdbNormalna->Text = L"normalna";
			this->rdbNormalna->UseVisualStyleBackColor = true;
			// 
			// lblRodzaj
			// 
			this->lblRodzaj->AutoSize = true;
			this->lblRodzaj->Location = System::Drawing::Point(753, 350);
			this->lblRodzaj->Name = L"lblRodzaj";
			this->lblRodzaj->Size = System::Drawing::Size(56, 13);
			this->lblRodzaj->TabIndex = 15;
			this->lblRodzaj->Text = L"Rodzaj osi";
			// 
			// rdbWyborX
			// 
			this->rdbWyborX->AutoSize = true;
			this->rdbWyborX->Location = System::Drawing::Point(803, 148);
			this->rdbWyborX->Name = L"rdbWyborX";
			this->rdbWyborX->Size = System::Drawing::Size(82, 17);
			this->rdbWyborX->TabIndex = 16;
			this->rdbWyborX->TabStop = true;
			this->rdbWyborX->Text = L"Wybór osi X";
			this->rdbWyborX->UseVisualStyleBackColor = true;
			// 
			// rdbWyborY
			// 
			this->rdbWyborY->AutoSize = true;
			this->rdbWyborY->Location = System::Drawing::Point(803, 259);
			this->rdbWyborY->Name = L"rdbWyborY";
			this->rdbWyborY->Size = System::Drawing::Size(82, 17);
			this->rdbWyborY->TabIndex = 17;
			this->rdbWyborY->TabStop = true;
			this->rdbWyborY->Text = L"Wybór osi Y";
			this->rdbWyborY->UseVisualStyleBackColor = true;
			// 
			// rdbWyborZero
			// 
			this->rdbWyborZero->AutoSize = true;
			this->rdbWyborZero->Location = System::Drawing::Point(790, 83);
			this->rdbWyborZero->Name = L"rdbWyborZero";
			this->rdbWyborZero->Size = System::Drawing::Size(159, 17);
			this->rdbWyborZero->TabIndex = 18;
			this->rdbWyborZero->TabStop = true;
			this->rdbWyborZero->Text = L"Wybór puntu pocz¹tkowego";
			this->rdbWyborZero->UseVisualStyleBackColor = true;
			// 
			// txtOsXdane
			// 
			this->txtOsXdane->Location = System::Drawing::Point(803, 171);
			this->txtOsXdane->Name = L"txtOsXdane";
			this->txtOsXdane->Size = System::Drawing::Size(100, 20);
			this->txtOsXdane->TabIndex = 19;
			// 
			// txtOsYdane
			// 
			this->txtOsYdane->Location = System::Drawing::Point(803, 279);
			this->txtOsYdane->Name = L"txtOsYdane";
			this->txtOsYdane->Size = System::Drawing::Size(100, 20);
			this->txtOsYdane->TabIndex = 20;
			// 
			// lblWyniki
			// 
			this->lblWyniki->AutoSize = true;
			this->lblWyniki->Location = System::Drawing::Point(770, 409);
			this->lblWyniki->Name = L"lblWyniki";
			this->lblWyniki->Size = System::Drawing::Size(39, 13);
			this->lblWyniki->TabIndex = 23;
			this->lblWyniki->Text = L"Wyniki";
			// 
			// lblWynikX
			// 
			this->lblWynikX->AutoSize = true;
			this->lblWynikX->Location = System::Drawing::Point(678, 424);
			this->lblWynikX->Name = L"lblWynikX";
			this->lblWynikX->Size = System::Drawing::Size(15, 13);
			this->lblWynikX->TabIndex = 24;
			this->lblWynikX->Text = L"x:";
			// 
			// lblWynikY
			// 
			this->lblWynikY->AutoSize = true;
			this->lblWynikY->Location = System::Drawing::Point(801, 422);
			this->lblWynikY->Name = L"lblWynikY";
			this->lblWynikY->Size = System::Drawing::Size(15, 13);
			this->lblWynikY->TabIndex = 25;
			this->lblWynikY->Text = L"y:";
			// 
			// rdbLogarytmicznaY
			// 
			this->rdbLogarytmicznaY->AutoSize = true;
			this->rdbLogarytmicznaY->Location = System::Drawing::Point(801, 366);
			this->rdbLogarytmicznaY->Name = L"rdbLogarytmicznaY";
			this->rdbLogarytmicznaY->Size = System::Drawing::Size(97, 17);
			this->rdbLogarytmicznaY->TabIndex = 26;
			this->rdbLogarytmicznaY->TabStop = true;
			this->rdbLogarytmicznaY->Text = L"logarytmiczna y";
			this->rdbLogarytmicznaY->UseVisualStyleBackColor = true;
			// 
			// rdbLogarytmicznaXY
			// 
			this->rdbLogarytmicznaXY->AutoSize = true;
			this->rdbLogarytmicznaXY->Location = System::Drawing::Point(801, 389);
			this->rdbLogarytmicznaXY->Name = L"rdbLogarytmicznaXY";
			this->rdbLogarytmicznaXY->Size = System::Drawing::Size(102, 17);
			this->rdbLogarytmicznaXY->TabIndex = 27;
			this->rdbLogarytmicznaXY->TabStop = true;
			this->rdbLogarytmicznaXY->Text = L"logarytmiczna xy";
			this->rdbLogarytmicznaXY->UseVisualStyleBackColor = true;
			// 
			// btnCzysc
			// 
			this->btnCzysc->Location = System::Drawing::Point(755, 631);
			this->btnCzysc->Name = L"btnCzysc";
			this->btnCzysc->Size = System::Drawing::Size(75, 23);
			this->btnCzysc->TabIndex = 28;
			this->btnCzysc->Text = L"Czyœæ";
			this->btnCzysc->UseVisualStyleBackColor = true;
			this->btnCzysc->Click += gcnew System::EventHandler(this, &OknoGlowne::btnCzysc_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->oProgramieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(949, 24);
			this->menuStrip1->TabIndex = 29;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zapiszToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"&Plik";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->zapiszToolStripMenuItem->Text = L"&Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoGlowne::zapiszToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"&O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &OknoGlowne::oProgramieToolStripMenuItem_Click);
			// 
			// listX
			// 
			this->listX->FormattingEnabled = true;
			this->listX->Location = System::Drawing::Point(675, 438);
			this->listX->Name = L"listX";
			this->listX->Size = System::Drawing::Size(99, 186);
			this->listX->TabIndex = 30;
			// 
			// listY
			// 
			this->listY->FormattingEnabled = true;
			this->listY->Location = System::Drawing::Point(798, 438);
			this->listY->Name = L"listY";
			this->listY->Size = System::Drawing::Size(100, 186);
			this->listY->TabIndex = 31;
			// 
			// lblXp
			// 
			this->lblXp->AutoSize = true;
			this->lblXp->Location = System::Drawing::Point(675, 198);
			this->lblXp->Name = L"lblXp";
			this->lblXp->Size = System::Drawing::Size(108, 13);
			this->lblXp->TabIndex = 32;
			this->lblXp->Text = L"Wartoœæ pocz¹tkowa";
			// 
			// txtXp
			// 
			this->txtXp->Location = System::Drawing::Point(678, 215);
			this->txtXp->Name = L"txtXp";
			this->txtXp->Size = System::Drawing::Size(100, 20);
			this->txtXp->TabIndex = 33;
			// 
			// txtYp
			// 
			this->txtYp->Location = System::Drawing::Point(678, 319);
			this->txtYp->Name = L"txtYp";
			this->txtYp->Size = System::Drawing::Size(100, 20);
			this->txtYp->TabIndex = 34;
			// 
			// lblYp
			// 
			this->lblYp->AutoSize = true;
			this->lblYp->Location = System::Drawing::Point(678, 303);
			this->lblYp->Name = L"lblYp";
			this->lblYp->Size = System::Drawing::Size(108, 13);
			this->lblYp->TabIndex = 35;
			this->lblYp->Text = L"Wartoœæ pocz¹tkowa";
			// 
			// OknoGlowne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 678);
			this->Controls->Add(this->lblYp);
			this->Controls->Add(this->txtYp);
			this->Controls->Add(this->txtXp);
			this->Controls->Add(this->lblXp);
			this->Controls->Add(this->listY);
			this->Controls->Add(this->listX);
			this->Controls->Add(this->btnCzysc);
			this->Controls->Add(this->rdbLogarytmicznaXY);
			this->Controls->Add(this->rdbLogarytmicznaY);
			this->Controls->Add(this->lblWynikY);
			this->Controls->Add(this->lblWynikX);
			this->Controls->Add(this->lblWyniki);
			this->Controls->Add(this->txtOsYdane);
			this->Controls->Add(this->txtOsXdane);
			this->Controls->Add(this->rdbWyborZero);
			this->Controls->Add(this->rdbWyborY);
			this->Controls->Add(this->rdbWyborX);
			this->Controls->Add(this->lblRodzaj);
			this->Controls->Add(this->rdbNormalna);
			this->Controls->Add(this->rdbLogarytmicznaX);
			this->Controls->Add(this->lblJednostkiY);
			this->Controls->Add(this->txtJednostkiY);
			this->Controls->Add(this->lblOsY);
			this->Controls->Add(this->lblJednostkiX);
			this->Controls->Add(this->txtJednostkiX);
			this->Controls->Add(this->lblOsX);
			this->Controls->Add(this->lblZero);
			this->Controls->Add(this->txtZeroY);
			this->Controls->Add(this->lblZeroY);
			this->Controls->Add(this->txtZeroX);
			this->Controls->Add(this->lblZeroX);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnWczytaj);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"OknoGlowne";
			this->Text = L"OknoGlowne";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void wczytaj_click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ plik = gcnew OpenFileDialog();

		if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pictureBox1->Image = Image::FromFile(plik->FileName);
		}
	}
	private: System::Void panel_click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (rdbWyborZero->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			int x = klik->X;
			int y = klik->Y;
			txtZeroX->Text = x.ToString();
			txtZeroY->Text = y.ToString();
		}
		else if (rdbWyborX->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			int x = klik->X;
			txtOsXdane->Text = x.ToString();
		}
		else if (rdbWyborY->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			int y = klik->Y;
			txtOsYdane->Text = y.ToString();
		}
		else if (rdbNormalna->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			double x = klik->X;
			double y = klik->Y;
			double x0 = Convert::ToDouble(txtZeroX->Text);
			double y0 = Convert::ToDouble(txtZeroY->Text);
			double osx = Convert::ToDouble(txtOsXdane->Text);
			double osy = Convert::ToDouble(txtOsYdane->Text);
			double jx = Convert::ToDouble(txtJednostkiX->Text);
			double jy = Convert::ToDouble(txtJednostkiY->Text);
			double xp = Convert::ToDouble(txtXp->Text);
			double yp = Convert::ToDouble(txtYp->Text);
			double xw = (x - x0) * (jx / (osx - x0)) + xp;
			double yw = (y0 - y) * (jy / (y0 - osy)) + yp;
			listX->Items->Add(xw.ToString());
			listY->Items->Add(yw.ToString());
		}
		else if (rdbLogarytmicznaX->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			int x = klik->X;
			int y = klik->Y;
			double x0 = Convert::ToDouble(txtZeroX->Text);
			double y0 = Convert::ToDouble(txtZeroY->Text);
			double osx = Convert::ToDouble(txtOsXdane->Text);
			double osy = Convert::ToDouble(txtOsYdane->Text);
			double jx = Convert::ToDouble(txtJednostkiX->Text);
			double jy = Convert::ToDouble(txtJednostkiY->Text);
			double xp = Convert::ToDouble(txtXp->Text);
			double yp = Convert::ToDouble(txtYp->Text);
			double xw = (x - x0) * (jx / (osx - x0)) + xp;
			double xl = pow(10, xw);
			double yw = (y0 - y) * (jy / (y0 - osy)) + yp;
			listX->Items->Add(xw.ToString());
			listY->Items->Add(yw.ToString());
		}
		else if (rdbLogarytmicznaY->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			int x = klik->X;
			int y = klik->Y;
			double x0 = Convert::ToDouble(txtZeroX->Text);
			double y0 = Convert::ToDouble(txtZeroY->Text);
			double osx = Convert::ToDouble(txtOsXdane->Text);
			double osy = Convert::ToDouble(txtOsYdane->Text);
			double jx = Convert::ToDouble(txtJednostkiX->Text);
			double jy = Convert::ToDouble(txtJednostkiY->Text);
			double xp = Convert::ToDouble(txtXp->Text);
			double yp = Convert::ToDouble(txtYp->Text);
			double xw = (x - x0) * (jx / (osx - x0)) + xp;
			double yw = (y0 - y) * (jy / (y0 - osy)) + yp;
			double yl = pow(10, yw);
			listX->Items->Add(xw.ToString());
			listY->Items->Add(yw.ToString());
		}
		else if (rdbLogarytmicznaXY->Checked == true) {
			MouseEventArgs^ klik = (MouseEventArgs^)e;
			int x = klik->X;
			int y = klik->Y;
			double x0 = Convert::ToDouble(txtZeroX->Text);
			double y0 = Convert::ToDouble(txtZeroY->Text);
			double osx = Convert::ToDouble(txtOsXdane->Text);
			double osy = Convert::ToDouble(txtOsYdane->Text);
			double jx = Convert::ToDouble(txtJednostkiX->Text);
			double jy = Convert::ToDouble(txtJednostkiY->Text);
			double xp = Convert::ToDouble(txtXp->Text);
			double yp = Convert::ToDouble(txtYp->Text);
			double xw = (x - x0) * (jx / (osx - x0)) + xp;
			double xl = pow(10,xw);
			double yw = (y0 - y) * (jy / (y0 - osy)) + yp;
			double yl = pow(10, yw);
			listX->Items->Add(xw.ToString());
			listY->Items->Add(yw.ToString());
		}
	}
	private: System::Void zapiszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
		
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1 -> FileName);

			for (int i(0); i < listX->Items->Count; i++) {
				sw->WriteLine(listX->Items[i]->ToString() + " " + listY->Items[i]->ToString());
			}
			sw->Close();
		}
		
	}
	private: System::Void btnCzysc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listX->Items->Count > 0) {
			listX->Items->RemoveAt(listX->Items->Count - 1);
			listY->Items->RemoveAt(listY->Items->Count - 1);
		}
	}
	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("W przypadku skali logarytmicznej iloœæ jednostek i wartoœæ pocz¹tkowa oznaczaj¹ wyk³adniki.", "Oznaczenia", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
