#pragma once

namespace lb4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ sdadsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sdadsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->÷åğâîíèéToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sdadsToolStripMenuItem,
					this->âèõ³äToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(694, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sdadsToolStripMenuItem
			// 
			this->sdadsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òåêñòToolStripMenuItem,
					this->ôîíToolStripMenuItem
			});
			this->sdadsToolStripMenuItem->Name = L"sdadsToolStripMenuItem";
			this->sdadsToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->sdadsToolStripMenuItem->Text = L"êîë³ğ";
			this->sdadsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sdadsToolStripMenuItem_Click);
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->÷åğâîíèéToolStripMenuItem,
					this->ñèí³éToolStripMenuItem
			});
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->òåêñòToolStripMenuItem->Text = L"òåêñò";
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->÷åğâîíèéToolStripMenuItem->Text = L"÷åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->ñèí³éToolStripMenuItem->Text = L"ñèí³é";
			// 
			// ôîíToolStripMenuItem
			// 
			this->ôîíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem1,
					this->ñèí³éToolStripMenuItem1, this->çåëåíèéToolStripMenuItem
			});
			this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
			this->ôîíToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->ôîíToolStripMenuItem->Text = L"ôîí";
			// 
			// ÷åğâîíèéToolStripMenuItem1
			// 
			this->÷åğâîíèéToolStripMenuItem1->Name = L"÷åğâîíèéToolStripMenuItem1";
			this->÷åğâîíèéToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->÷åğâîíèéToolStripMenuItem1->Text = L"÷åğâîíèé ";
			this->÷åğâîíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem1_Click);
			// 
			// ñèí³éToolStripMenuItem1
			// 
			this->ñèí³éToolStripMenuItem1->Name = L"ñèí³éToolStripMenuItem1";
			this->ñèí³éToolStripMenuItem1->Size = System::Drawing::Size(165, 26);
			this->ñèí³éToolStripMenuItem1->Text = L"ñèí³é";
			this->ñèí³éToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem1_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->çåëåíèéToolStripMenuItem->Text = L"çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->âèõ³äToolStripMenuItem->Text = L"âèõ³ä";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem2,
					this->çåëåíèéToolStripMenuItem1, this->ñèí³éToolStripMenuItem2
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(150, 76);
			// 
			// ÷åğâîíèéToolStripMenuItem2
			// 
			this->÷åğâîíèéToolStripMenuItem2->Name = L"÷åğâîíèéToolStripMenuItem2";
			this->÷åğâîíèéToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->÷åğâîíèéToolStripMenuItem2->Text = L"×åğâîíèé";
			// 
			// çåëåíèéToolStripMenuItem1
			// 
			this->çåëåíèéToolStripMenuItem1->Name = L"çåëåíèéToolStripMenuItem1";
			this->çåëåíèéToolStripMenuItem1->Size = System::Drawing::Size(149, 24);
			this->çåëåíèéToolStripMenuItem1->Text = L"Çåëåíèé";
			// 
			// ñèí³éToolStripMenuItem2
			// 
			this->ñèí³éToolStripMenuItem2->Name = L"ñèí³éToolStripMenuItem2";
			this->ñèí³éToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->ñèí³éToolStripMenuItem2->Text = L"Ñèí³é";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2, this->toolStripMenuItem3
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip2";
			this->contextMenuStrip1->Size = System::Drawing::Size(150, 76);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(149, 24);
			this->toolStripMenuItem1->Text = L"×åğâîíèé";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->toolStripMenuItem2->Text = L"Çåëåíèé";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->toolStripMenuItem3->Text = L"Ñèí³é";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 424);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sdadsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void ÷åğâîíèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
}
private: System::Void ñèí³éToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;
}
private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;
}
};
}
