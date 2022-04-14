using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#pragma once
value struct List2 {
	int inf;
	List2^ prev;
	List2^ next;
};
public ref class Form1 : public System::Windows::Forms::Form {
public:
	Form1(void) {
		InitializeComponent();


	}
private:
	List2^ right, ^ left, ^ current;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::ToolStripMenuItem^ èíèöèàëèçàöèÿToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàíèåToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ çàìåíàToolStripMenuItem;




private: System::Windows::Forms::TextBox^ textBox1;

	   void Init2() {
		   right = left = nullptr;
	   }
	   void Add2(int n) {
		   List2^ work = gcnew List2;
		   work->inf = n;
		   if (left) {
			   work->next = nullptr;
			   work->prev = right;
			   right->next = work;
			   right = work;
		   }
		   else {
			   work->prev = work->next = nullptr;
			   left = right = work;
		   }
		   listBox1->Items->Add(n);
	   }
	   void View2() {
		   if (left) {
			   current = left;
			   while (current) {
				   listBox1->Items->Add(current->inf);
				   current = current->next;
			   }
		   }
		   else MessageBox::Show("List is empty");
	   }
	   void change() {
		   int max = -100000;
		   int sum = 0;
		   List2^ smax, ^ asum;
		   current = left;
		   while (current) {
			   if (current->inf > max) {
				   max = current->inf;
				   smax = current;
			   }
			   if (current->inf > 0) {
				   sum = sum + current->inf;
				   asum = current;
			   }
			   current = current->next;
		   }
		   smax->inf = sum;
	   }
	   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	   void InitializeComponent(void) {
		   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		   this->èíèöèàëèçàöèÿToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->ñîçäàíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->çàìåíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		   this->menuStrip1->SuspendLayout();
		   this->SuspendLayout();
		   // 
		   // menuStrip1
		   // 
		   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			   this->èíèöèàëèçàöèÿToolStripMenuItem1,
				   this->ñîçäàíèåToolStripMenuItem, this->çàìåíàToolStripMenuItem, this->âûõîäToolStripMenuItem
		   });
		   this->menuStrip1->Location = System::Drawing::Point(0, 0);
		   this->menuStrip1->Name = L"menuStrip1";
		   this->menuStrip1->Size = System::Drawing::Size(884, 24);
		   this->menuStrip1->TabIndex = 0;
		   this->menuStrip1->Text = L"menuStrip1";
		   // 
		   // èíèöèàëèçàöèÿToolStripMenuItem1
		   // 
		   this->èíèöèàëèçàöèÿToolStripMenuItem1->Name = L"èíèöèàëèçàöèÿToolStripMenuItem1";
		   this->èíèöèàëèçàöèÿToolStripMenuItem1->Size = System::Drawing::Size(71, 20);
		   this->èíèöèàëèçàöèÿToolStripMenuItem1->Text = L"Î÷èñòèòü";
		   this->èíèöèàëèçàöèÿToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::èíèöèàëèçàöèÿToolStripMenuItem1_Click);
		   // 
		   // ñîçäàíèåToolStripMenuItem
		   // 
		   this->ñîçäàíèåToolStripMenuItem->Name = L"ñîçäàíèåToolStripMenuItem";
		   this->ñîçäàíèåToolStripMenuItem->Size = System::Drawing::Size(71, 20);
		   this->ñîçäàíèåToolStripMenuItem->Text = L"Äîáàâèòü";
		   this->ñîçäàíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñîçäàíèåToolStripMenuItem_Click);
		   // 
		   // âûõîäToolStripMenuItem
		   // 
		   this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
		   this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
		   this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
		   this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âûõîäToolStripMenuItem_Click_1);
		   // 
		   // çàìåíàToolStripMenuItem
		   // 
		   this->çàìåíàToolStripMenuItem->Name = L"çàìåíàToolStripMenuItem";
		   this->çàìåíàToolStripMenuItem->Size = System::Drawing::Size(72, 20);
		   this->çàìåíàToolStripMenuItem->Text = L"Çàìåíèòü";
		   this->çàìåíàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::çàìåíàToolStripMenuItem_Click);
		   // 
		   // listBox1
		   // 
		   this->listBox1->FormattingEnabled = true;
		   this->listBox1->Location = System::Drawing::Point(12, 44);
		   this->listBox1->Name = L"listBox1";
		   this->listBox1->Size = System::Drawing::Size(120, 95);
		   this->listBox1->TabIndex = 1;
		   // 
		   // textBox1
		   // 
		   this->textBox1->Location = System::Drawing::Point(21, 160);
		   this->textBox1->Name = L"textBox1";
		   this->textBox1->Size = System::Drawing::Size(220, 20);
		   this->textBox1->TabIndex = 2;
		   // 
		   // Form1
		   // 
		   this->ClientSize = System::Drawing::Size(884, 352);
		   this->Controls->Add(this->textBox1);
		   this->Controls->Add(this->listBox1);
		   this->Controls->Add(this->menuStrip1);
		   this->MainMenuStrip = this->menuStrip1;
		   this->Name = L"Form1";
		   this->menuStrip1->ResumeLayout(false);
		   this->menuStrip1->PerformLayout();
		   this->ResumeLayout(false);
		   this->PerformLayout();

	   }
#pragma endregion

private: System::Void ñîçäàíèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int L = Convert::ToInt32(textBox1->Text);
	Add2(L);
}
private: System::Void çàìåíàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	change();
	listBox1->Items->Clear();
	View2();
};
private: System::Void èíèöèàëèçàöèÿToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
}
private: System::Void ïğîñìîòğToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void âûõîäToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};