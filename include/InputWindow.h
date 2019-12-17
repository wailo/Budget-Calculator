
#pragma once

#include"EssentialsWindow.h"
#include"RecreationsWindow.h"
#include"SavingsWindow.h"
#include"OutputWindow.h"
#include"BillsWindow.h"

int extern inputChildcareBill;
int extern inputDebtsAndLoansBill;
int extern inputGroceriesBill;
int extern inputTransportationBill;
int extern inputPetsBill;
int extern inputOtherEssentials;

int extern inputElectrictyBill;
int extern inputWaterBill;
int extern inputGasBill;
int extern inputRentBill;
int extern inputInternetBill;
int extern inputPhoneBill;
int extern inputHealthInsuranceBill;
int extern inputOtherBill;

int extern inputEatOutBill;
int extern inputGymBill;
int extern inputTicketsBill;
int extern inputGiftsBill;
int extern inputHolidaysBill;
int extern inputOtherRecreations;

int extern inputEmergencyBill;
int extern inputHomeRepairsBill;
int extern inputCarRepairsBill;
int extern inputOtherSavings;

int totalIncome;
int totalSpendings;
int totalEssentials;
int totalBills;
int totalRecreations;
int totalSavings;


namespace BudgetCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputWindow
	/// </summary>
	public ref class InputWindow : public System::Windows::Forms::Form
	{
	public:
		InputWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		BillsWindow^ billswindow = gcnew BillsWindow();
		SavingsWindow^ savingswindow = gcnew SavingsWindow();
		RecreationsWindow^ recreatiosnwindow = gcnew RecreationsWindow();
		EssentialsWindow^ essentialswindow = gcnew EssentialsWindow();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	
	private: System::Windows::Forms::Label^ label1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ EssentialsButton;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ BillsButton;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ SavingsButton;

	private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ RecreationsButton;
private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::RichTextBox^ income;

private: System::Windows::Forms::Button^ AnalyzeButton;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::Panel^ panel1;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->income = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->AnalyzeButton = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->EssentialsButton = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->BillsButton = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->SavingsButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->RecreationsButton = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(138, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Take-Home Income:";
			this->label1->Click += gcnew System::EventHandler(this, &InputWindow::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->income);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(837, 78);
			this->panel1->TabIndex = 31;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InputWindow::panel1_Paint);
			// 
			// income
			// 
			this->income->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->income->Location = System::Drawing::Point(394, 23);
			this->income->Name = L"income";
			this->income->Size = System::Drawing::Size(224, 35);
			this->income->TabIndex = 6;
			this->income->Text = L"0";
			this->income->TextChanged += gcnew System::EventHandler(this, &InputWindow::richTextBox1_TextChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->AnalyzeButton);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 662);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(837, 86);
			this->panel2->TabIndex = 32;
			// 
			// AnalyzeButton
			// 
			this->AnalyzeButton->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->AnalyzeButton->Location = System::Drawing::Point(4, 0);
			this->AnalyzeButton->Name = L"AnalyzeButton";
			this->AnalyzeButton->Size = System::Drawing::Size(833, 86);
			this->AnalyzeButton->TabIndex = 0;
			this->AnalyzeButton->Text = L"Analyze";
			this->AnalyzeButton->UseVisualStyleBackColor = true;
			this->AnalyzeButton->Click += gcnew System::EventHandler(this, &InputWindow::AnalyzeButton_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->panel5->Controls->Add(this->EssentialsButton);
			this->panel5->Location = System::Drawing::Point(116, 128);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(292, 251);
			this->panel5->TabIndex = 35;
			// 
			// EssentialsButton
			// 
			this->EssentialsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->EssentialsButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EssentialsButton->FlatAppearance->BorderSize = 0;
			this->EssentialsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EssentialsButton->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EssentialsButton->Location = System::Drawing::Point(0, 3);
			this->EssentialsButton->Name = L"EssentialsButton";
			this->EssentialsButton->Size = System::Drawing::Size(289, 251);
			this->EssentialsButton->TabIndex = 0;
			this->EssentialsButton->Text = L"Essentials";
			this->EssentialsButton->UseVisualStyleBackColor = false;
			this->EssentialsButton->Click += gcnew System::EventHandler(this, &InputWindow::EssentialsButton_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->panel6->Controls->Add(this->BillsButton);
			this->panel6->Location = System::Drawing::Point(116, 388);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(292, 260);
			this->panel6->TabIndex = 36;
			// 
			// BillsButton
			// 
			this->BillsButton->FlatAppearance->BorderSize = 0;
			this->BillsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BillsButton->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->BillsButton->Location = System::Drawing::Point(0, 3);
			this->BillsButton->Name = L"BillsButton";
			this->BillsButton->Size = System::Drawing::Size(289, 254);
			this->BillsButton->TabIndex = 39;
			this->BillsButton->Text = L"Bills";
			this->BillsButton->UseVisualStyleBackColor = true;
			this->BillsButton->Click += gcnew System::EventHandler(this, &InputWindow::BillsButton_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->Controls->Add(this->SavingsButton);
			this->panel7->Location = System::Drawing::Point(414, 128);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(299, 251);
			this->panel7->TabIndex = 37;
			// 
			// SavingsButton
			// 
			this->SavingsButton->FlatAppearance->BorderSize = 0;
			this->SavingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SavingsButton->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->SavingsButton->Location = System::Drawing::Point(3, 3);
			this->SavingsButton->Name = L"SavingsButton";
			this->SavingsButton->Size = System::Drawing::Size(296, 245);
			this->SavingsButton->TabIndex = 0;
			this->SavingsButton->Text = L"Savings";
			this->SavingsButton->UseVisualStyleBackColor = true;
			this->SavingsButton->Click += gcnew System::EventHandler(this, &InputWindow::SavingsButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Controls->Add(this->RecreationsButton);
			this->panel3->Location = System::Drawing::Point(414, 388);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(299, 260);
			this->panel3->TabIndex = 38;
			// 
			// RecreationsButton
			// 
			this->RecreationsButton->FlatAppearance->BorderSize = 0;
			this->RecreationsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RecreationsButton->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->RecreationsButton->Location = System::Drawing::Point(3, 3);
			this->RecreationsButton->Name = L"RecreationsButton";
			this->RecreationsButton->Size = System::Drawing::Size(293, 254);
			this->RecreationsButton->TabIndex = 0;
			this->RecreationsButton->Text = L"Recreations";
			this->RecreationsButton->UseVisualStyleBackColor = true;
			this->RecreationsButton->Click += gcnew System::EventHandler(this, &InputWindow::RecreationsButton_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(837, 748);
			this->panel8->TabIndex = 39;
			// 
			// InputWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 748);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel8);
			this->Name = L"InputWindow";
			this->Text = L"InputWindow";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//	 
	//	 //int inputSalary = Convert::ToInt32(income->Text);
	//	 //int inputHome = Convert::ToInt32(home->Text);
	//	 //int inputBills = Convert::ToInt32(bills->Text);
	//	 //int inputFood = Convert::ToInt32(food->Text);
	//	 //int inputChildren = Convert::ToInt32(children->Text);
	//	 //int inputTransport = Convert::ToInt32(transport->Text);
	//	 //int inputPets = Convert::ToInt32(pets->Text);

	//	 //int inputInvest = Convert::ToInt32(invest->Text);
	//	 //int inputCredit = Convert::ToInt32(credit->Text);
	//	 //int inputHealth = Convert::ToInt32(health->Text);
	//	 //int inputIncidentials = Convert::ToInt32(incidentials->Text);
	//	 //int inputGifts = Convert::ToInt32(gifts->Text);


	//	 //int totalEssentials = inputHome + inputBills + inputFood + inputChildren + inputTransport + inputPets;

	//	 //int totalRecreation = inputInvest + inputCredit + inputHealth + inputIncidentials + inputGifts;


	//	 this->Hide();
	//	 OutputWindow^ outputWindow = gcnew OutputWindow();
	//	 outputWindow->Show();


	//}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void BillsButton_Click(System::Object^ sender, System::EventArgs^ e) {

	billswindow->Show();
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SavingsButton_Click(System::Object^ sender, System::EventArgs^ e) {

	savingswindow->Show();
}
private: System::Void RecreationsButton_Click(System::Object^ sender, System::EventArgs^ e) {

	recreatiosnwindow->Show();
}
private: System::Void EssentialsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	essentialswindow->Show();
}
private: System::Void AnalyzeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	totalIncome = Convert::ToInt32(this->income->Text);
	totalEssentials = (inputChildcareBill + inputDebtsAndLoansBill + inputGroceriesBill + inputTransportationBill + inputPetsBill + inputOtherEssentials);
	totalBills = (inputElectrictyBill + inputWaterBill + inputGasBill + inputRentBill + inputInternetBill + inputPhoneBill + inputHealthInsuranceBill + inputOtherBill);
	totalRecreations = (inputEatOutBill + inputGymBill + inputTicketsBill + inputGiftsBill + inputHolidaysBill + inputOtherRecreations);
	totalSavings = (inputEmergencyBill + inputHomeRepairsBill + inputCarRepairsBill + inputOtherSavings);
	totalSpendings = (totalEssentials + totalBills + totalRecreations + totalSavings);
	std::cout << totalSpendings << endl;

	OutputWindow^ outputwindow = gcnew OutputWindow();
	outputwindow->Show();
}
};
}
