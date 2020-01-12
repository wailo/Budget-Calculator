#include "pch.h"
#include "BillsWindow.h"

System::Void
BudgetCalculator::BillsWindow::BillSaveButton_Click(System::Object ^ sender,
                                                    System::EventArgs ^ e) {
  bills.inputElectrictyBill = Convert::ToInt32(ElectricityBill->Text);
  bills.inputGasBill = Convert::ToInt32(GasBill->Text);
  bills.inputHealthInsuranceBill = Convert::ToInt32(HealthInsuranceBill->Text);
  bills.inputInternetBill = Convert::ToInt32(InternetBill->Text);
  bills.inputOtherBill = Convert::ToInt32(OtherBill->Text);
  bills.inputPhoneBill = Convert::ToInt32(PhoneBill->Text);
  bills.inputRentBill = Convert::ToInt32(RentBill->Text);
  bills.inputWaterBill = Convert::ToInt32(WaterBill->Text);
  this->Hide();
}

void BudgetCalculator::BillsWindow::InitializeComponent(void) {
  this->panel1 = (gcnew System::Windows::Forms::Panel());
  this->label1 = (gcnew System::Windows::Forms::Label());
  this->panel2 = (gcnew System::Windows::Forms::Panel());
  this->BillSaveButton = (gcnew System::Windows::Forms::Button());
  this->panel8 = (gcnew System::Windows::Forms::Panel());
  this->label9 = (gcnew System::Windows::Forms::Label());
  this->OtherBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label8 = (gcnew System::Windows::Forms::Label());
  this->HealthInsuranceBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label7 = (gcnew System::Windows::Forms::Label());
  this->PhoneBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label6 = (gcnew System::Windows::Forms::Label());
  this->InternetBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label5 = (gcnew System::Windows::Forms::Label());
  this->RentBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label4 = (gcnew System::Windows::Forms::Label());
  this->GasBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label3 = (gcnew System::Windows::Forms::Label());
  this->WaterBill = (gcnew System::Windows::Forms::RichTextBox());
  this->label2 = (gcnew System::Windows::Forms::Label());
  this->ElectricityBill = (gcnew System::Windows::Forms::RichTextBox());
  this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
  this->panel1->SuspendLayout();
  this->panel2->SuspendLayout();
  this->panel8->SuspendLayout();
  this->SuspendLayout();
  //
  // panel1
  //
  this->panel1->BackColor = System::Drawing::Color::Gainsboro;
  this->panel1->Controls->Add(this->label1);
  this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
  this->panel1->ForeColor = System::Drawing::SystemColors::HotTrack;
  this->panel1->Location = System::Drawing::Point(0, 0);
  this->panel1->Name = L"panel1";
  this->panel1->Size = System::Drawing::Size(837, 78);
  this->panel1->TabIndex = 40;
  //
  // label1
  //
  this->label1->AutoSize = true;
  this->label1->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
  this->label1->Location = System::Drawing::Point(363, 20);
  this->label1->Name = L"label1";
  this->label1->Size = System::Drawing::Size(92, 45);
  this->label1->TabIndex = 0;
  this->label1->Text = L"Bills";
  //
  // panel2
  //
  this->panel2->Controls->Add(this->BillSaveButton);
  this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
  this->panel2->Location = System::Drawing::Point(0, 662);
  this->panel2->Name = L"panel2";
  this->panel2->Size = System::Drawing::Size(837, 86);
  this->panel2->TabIndex = 41;
  //
  // BillSaveButton
  //
  this->BillSaveButton->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->BillSaveButton->Location = System::Drawing::Point(4, 0);
  this->BillSaveButton->Name = L"BillSaveButton";
  this->BillSaveButton->Size = System::Drawing::Size(833, 86);
  this->BillSaveButton->TabIndex = 0;
  this->BillSaveButton->Text = L"Save and Exit";
  this->BillSaveButton->UseVisualStyleBackColor = true;
  this->BillSaveButton->Click +=
      gcnew System::EventHandler(this, &BillsWindow::BillSaveButton_Click);
  //
  // panel8
  //
  this->panel8->BackColor = System::Drawing::Color::Brown;
  this->panel8->Controls->Add(this->label9);
  this->panel8->Controls->Add(this->OtherBill);
  this->panel8->Controls->Add(this->label8);
  this->panel8->Controls->Add(this->HealthInsuranceBill);
  this->panel8->Controls->Add(this->label7);
  this->panel8->Controls->Add(this->PhoneBill);
  this->panel8->Controls->Add(this->label6);
  this->panel8->Controls->Add(this->InternetBill);
  this->panel8->Controls->Add(this->label5);
  this->panel8->Controls->Add(this->RentBill);
  this->panel8->Controls->Add(this->label4);
  this->panel8->Controls->Add(this->GasBill);
  this->panel8->Controls->Add(this->label3);
  this->panel8->Controls->Add(this->WaterBill);
  this->panel8->Controls->Add(this->label2);
  this->panel8->Controls->Add(this->ElectricityBill);
  this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
  this->panel8->Location = System::Drawing::Point(0, 0);
  this->panel8->Name = L"panel8";
  this->panel8->Size = System::Drawing::Size(837, 748);
  this->panel8->TabIndex = 46;
  //
  // label9
  //
  this->label9->AutoSize = true;
  this->label9->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label9->Location = System::Drawing::Point(12, 556);
  this->label9->Name = L"label9";
  this->label9->Size = System::Drawing::Size(107, 45);
  this->label9->TabIndex = 15;
  this->label9->Text = L"Other";
  //
  // OtherBill
  //
  this->OtherBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->OtherBill->Location = System::Drawing::Point(474, 554);
  this->OtherBill->Name = L"OtherBill";
  this->OtherBill->Size = System::Drawing::Size(165, 33);
  this->OtherBill->TabIndex = 14;
  this->OtherBill->Text = L"0";
  //
  // label8
  //
  this->label8->AutoSize = true;
  this->label8->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label8->Location = System::Drawing::Point(12, 490);
  this->label8->Name = L"label8";
  this->label8->Size = System::Drawing::Size(296, 45);
  this->label8->TabIndex = 13;
  this->label8->Text = L"Health Insurance";
  //
  // HealthInsuranceBill
  //
  this->HealthInsuranceBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->HealthInsuranceBill->Location = System::Drawing::Point(474, 490);
  this->HealthInsuranceBill->Name = L"HealthInsuranceBill";
  this->HealthInsuranceBill->Size = System::Drawing::Size(165, 33);
  this->HealthInsuranceBill->TabIndex = 12;
  this->HealthInsuranceBill->Text = L"0";
  //
  // label7
  //
  this->label7->AutoSize = true;
  this->label7->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label7->Location = System::Drawing::Point(12, 424);
  this->label7->Name = L"label7";
  this->label7->Size = System::Drawing::Size(120, 45);
  this->label7->TabIndex = 11;
  this->label7->Text = L"Phone";
  //
  // PhoneBill
  //
  this->PhoneBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->PhoneBill->Location = System::Drawing::Point(474, 426);
  this->PhoneBill->Name = L"PhoneBill";
  this->PhoneBill->Size = System::Drawing::Size(165, 33);
  this->PhoneBill->TabIndex = 10;
  this->PhoneBill->Text = L"0";
  //
  // label6
  //
  this->label6->AutoSize = true;
  this->label6->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label6->Location = System::Drawing::Point(12, 358);
  this->label6->Name = L"label6";
  this->label6->Size = System::Drawing::Size(150, 45);
  this->label6->TabIndex = 9;
  this->label6->Text = L"Internet";
  //
  // InternetBill
  //
  this->InternetBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->InternetBill->Location = System::Drawing::Point(474, 362);
  this->InternetBill->Name = L"InternetBill";
  this->InternetBill->Size = System::Drawing::Size(165, 33);
  this->InternetBill->TabIndex = 8;
  this->InternetBill->Text = L"0";
  //
  // label5
  //
  this->label5->AutoSize = true;
  this->label5->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label5->Location = System::Drawing::Point(12, 292);
  this->label5->Name = L"label5";
  this->label5->Size = System::Drawing::Size(264, 45);
  this->label5->TabIndex = 7;
  this->label5->Text = L"Rent/Mortgage";
  //
  // RentBill
  //
  this->RentBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->RentBill->Location = System::Drawing::Point(474, 298);
  this->RentBill->Name = L"RentBill";
  this->RentBill->Size = System::Drawing::Size(165, 33);
  this->RentBill->TabIndex = 6;
  this->RentBill->Text = L"0";
  //
  // label4
  //
  this->label4->AutoSize = true;
  this->label4->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label4->Location = System::Drawing::Point(12, 226);
  this->label4->Name = L"label4";
  this->label4->Size = System::Drawing::Size(79, 45);
  this->label4->TabIndex = 5;
  this->label4->Text = L"Gas";
  //
  // GasBill
  //
  this->GasBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->GasBill->Location = System::Drawing::Point(474, 234);
  this->GasBill->Name = L"GasBill";
  this->GasBill->Size = System::Drawing::Size(165, 33);
  this->GasBill->TabIndex = 4;
  this->GasBill->Text = L"0";
  //
  // label3
  //
  this->label3->AutoSize = true;
  this->label3->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label3->Location = System::Drawing::Point(12, 160);
  this->label3->Name = L"label3";
  this->label3->Size = System::Drawing::Size(116, 45);
  this->label3->TabIndex = 3;
  this->label3->Text = L"Water";
  //
  // WaterBill
  //
  this->WaterBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->WaterBill->Location = System::Drawing::Point(474, 170);
  this->WaterBill->Name = L"WaterBill";
  this->WaterBill->Size = System::Drawing::Size(165, 33);
  this->WaterBill->TabIndex = 2;
  this->WaterBill->Text = L"0";
  //
  // label2
  //
  this->label2->AutoSize = true;
  this->label2->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->label2->Location = System::Drawing::Point(12, 94);
  this->label2->Name = L"label2";
  this->label2->Size = System::Drawing::Size(184, 45);
  this->label2->TabIndex = 1;
  this->label2->Text = L"Electricity";
  //
  // ElectricityBill
  //
  this->ElectricityBill->Font = (gcnew System::Drawing::Font(
      L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
  this->ElectricityBill->Location = System::Drawing::Point(474, 106);
  this->ElectricityBill->Name = L"ElectricityBill";
  this->ElectricityBill->Size = System::Drawing::Size(165, 33);
  this->ElectricityBill->TabIndex = 0;
  this->ElectricityBill->Text = L"0";
  //
  // BillsWindow
  //
  this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
  this->ClientSize = System::Drawing::Size(837, 748);
  this->Controls->Add(this->panel1);
  this->Controls->Add(this->panel2);
  this->Controls->Add(this->panel8);
  this->Name = L"BillsWindow";
  this->Text = L"BillsWindow";
  this->panel1->ResumeLayout(false);
  this->panel1->PerformLayout();
  this->panel2->ResumeLayout(false);
  this->panel8->ResumeLayout(false);
  this->panel8->PerformLayout();
  this->ResumeLayout(false);
}
