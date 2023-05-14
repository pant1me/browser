#pragma once

namespace browser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"сайт:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(677, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"перейти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(520, 20);
			this->textBox1->TabIndex = 2;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(13, 43);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(739, 448);
			this->webBrowser1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"<<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(61, 9);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L">>";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonFd_click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 503);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"browser";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public:
			String^ url_back;
			String^ url_fd;

	private: System::Void button1_click(System::Object^ sender, System::EventArgs^ e) {
		this->url_back = Convert::ToString(this->webBrowser1->Url);
		this->webBrowser1->Navigate(this->textBox1->Text);
		this->Text = "на сайте " + this->textBox1->Text;
	}

	private: System::Void buttonBack_click(System::Object^ sender, System::EventArgs^ e) {
		this->url_fd  = Convert::ToString(this->webBrowser1->Url);
		this->webBrowser1->Navigate(this->url_back);
	}

	private: System::Void buttonFd_click(System::Object^ sender, System::EventArgs^ e) {
		this->url_back = Convert::ToString(this->webBrowser1->Url);
		this->webBrowser1->Navigate(this->url_fd);
	}
#pragma endregion
	};
}