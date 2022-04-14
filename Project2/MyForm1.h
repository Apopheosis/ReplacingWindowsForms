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
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;




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
		   this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		   this->menuStrip1->SuspendLayout();
		   this->SuspendLayout();
		   // 
		   // menuStrip1
		   // 
		   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
			   this->�������������ToolStripMenuItem1,
				   this->��������ToolStripMenuItem, this->������ToolStripMenuItem, this->�����ToolStripMenuItem
		   });
		   this->menuStrip1->Location = System::Drawing::Point(0, 0);
		   this->menuStrip1->Name = L"menuStrip1";
		   this->menuStrip1->Size = System::Drawing::Size(884, 24);
		   this->menuStrip1->TabIndex = 0;
		   this->menuStrip1->Text = L"menuStrip1";
		   // 
		   // �������������ToolStripMenuItem1
		   // 
		   this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
		   this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(71, 20);
		   this->�������������ToolStripMenuItem1->Text = L"��������";
		   this->�������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::�������������ToolStripMenuItem1_Click);
		   // 
		   // ��������ToolStripMenuItem
		   // 
		   this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
		   this->��������ToolStripMenuItem->Size = System::Drawing::Size(71, 20);
		   this->��������ToolStripMenuItem->Text = L"��������";
		   this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
		   // 
		   // �����ToolStripMenuItem
		   // 
		   this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
		   this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
		   this->�����ToolStripMenuItem->Text = L"�����";
		   this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click_1);
		   // 
		   // ������ToolStripMenuItem
		   // 
		   this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
		   this->������ToolStripMenuItem->Size = System::Drawing::Size(72, 20);
		   this->������ToolStripMenuItem->Text = L"��������";
		   this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
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

private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int L = Convert::ToInt32(textBox1->Text);
	Add2(L);
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	change();
	listBox1->Items->Clear();
	View2();
};
private: System::Void �������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
}
private: System::Void ��������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void �����ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};