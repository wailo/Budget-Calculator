#include "pch.h"
#include "InputWindow.h"

int BudgetCalculator::InputWindow::getTotalEssentials() {

  return essentialswindow->essentials.inputChildcareBill +
         essentialswindow->essentials.inputDebtsAndLoansBill +
         essentialswindow->essentials.inputGroceriesBill +
         essentialswindow->essentials.inputOtherEssentials +
         essentialswindow->essentials.inputPetsBill +
         essentialswindow->essentials.inputTransportationBill;
}

int BudgetCalculator::InputWindow::getTotalBills() {
  return billswindow->bills.inputElectrictyBill +
         billswindow->bills.inputGasBill +
         billswindow->bills.inputHealthInsuranceBill +
         billswindow->bills.inputInternetBill +
         billswindow->bills.inputInternetBill +
         billswindow->bills.inputOtherBill + billswindow->bills.inputPhoneBill +
         billswindow->bills.inputRentBill + billswindow->bills.inputWaterBill;
}

int BudgetCalculator::InputWindow::getTotalRecreations() {
  return recreatiosnwindow->recreations.inputEatOutBill +
         recreatiosnwindow->recreations.inputGiftsBill +
         recreatiosnwindow->recreations.inputGymBill +
         recreatiosnwindow->recreations.inputHolidaysBill +
         recreatiosnwindow->recreations.inputOtherRecreations +
         recreatiosnwindow->recreations.inputTicketsBill;
}

int BudgetCalculator::InputWindow::getTotalSavings() {

  return savingswindow->savings.inputCarRepairsBill +
         savingswindow->savings.inputEmergencyBill +
         savingswindow->savings.inputHomeRepairsBill +
         savingswindow->savings.inputOtherSavings;
}

int BudgetCalculator::InputWindow::getTotalSpendings(int totalEssentials,
                                                     int totalBills,
                                                     int totalRecreations,
                                                     int totalSavings) {
  totalEssentials = getTotalEssentials();
  totalBills = getTotalBills();
  totalRecreations = getTotalRecreations();
  totalSavings = getTotalSavings();
  return totalEssentials + totalBills + totalRecreations + totalSavings;
}

void BudgetCalculator::InputWindow::InitializeComponent(void) {
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
  this->label1->Font = (gcnew System::Drawing::Font(
      L"Impact", 20.25F, System::Drawing::FontStyle::Bold,
      System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
  this->label1->Location = System::Drawing::Point(138, 22);
  this->label1->Name = L"label1";
  this->label1->Size = System::Drawing::Size(250, 34);
  this->label1->TabIndex = 1;
  this->label1->Text = L"Take-Home Income:";

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

  //
  // income
  //
  this->income->Font = (gcnew System::Drawing::Font(
      L"Impact", 18, System::Drawing::FontStyle::Bold,
      System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
  this->income->Location = System::Drawing::Point(394, 23);
  this->income->Name = L"income";
  this->income->Size = System::Drawing::Size(224, 35);
  this->income->TabIndex = 6;
  this->income->Text = L"0";
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
  this->AnalyzeButton->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->AnalyzeButton->Location = System::Drawing::Point(4, 0);
  this->AnalyzeButton->Name = L"AnalyzeButton";
  this->AnalyzeButton->Size = System::Drawing::Size(833, 86);
  this->AnalyzeButton->TabIndex = 0;
  this->AnalyzeButton->Text = L"Analyze";
  this->AnalyzeButton->UseVisualStyleBackColor = true;
  this->AnalyzeButton->Click +=
      gcnew System::EventHandler(this, &InputWindow::AnalyzeButton_Click);
  //
  // panel5
  //
  this->panel5->BackColor = System::Drawing::Color::FromArgb(
      static_cast<System::Int32>(static_cast<System::Byte>(24)),
      static_cast<System::Int32>(static_cast<System::Byte>(163)),
      static_cast<System::Int32>(static_cast<System::Byte>(246)));
  this->panel5->Controls->Add(this->EssentialsButton);
  this->panel5->Location = System::Drawing::Point(116, 128);
  this->panel5->Name = L"panel5";
  this->panel5->Size = System::Drawing::Size(292, 251);
  this->panel5->TabIndex = 35;
  //
  // EssentialsButton
  //
  this->EssentialsButton->BackColor = System::Drawing::Color::FromArgb(
      static_cast<System::Int32>(static_cast<System::Byte>(24)),
      static_cast<System::Int32>(static_cast<System::Byte>(163)),
      static_cast<System::Int32>(static_cast<System::Byte>(246)));
  this->EssentialsButton->FlatAppearance->BorderColor =
      System::Drawing::Color::FromArgb(
          static_cast<System::Int32>(static_cast<System::Byte>(0)),
          static_cast<System::Int32>(static_cast<System::Byte>(192)),
          static_cast<System::Int32>(static_cast<System::Byte>(0)));
  this->EssentialsButton->FlatAppearance->BorderSize = 0;
  this->EssentialsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
  this->EssentialsButton->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold,
      System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
  this->EssentialsButton->Location = System::Drawing::Point(0, 3);
  this->EssentialsButton->Name = L"EssentialsButton";
  this->EssentialsButton->Size = System::Drawing::Size(289, 251);
  this->EssentialsButton->TabIndex = 0;
  this->EssentialsButton->Text = L"Essentials";
  this->EssentialsButton->UseVisualStyleBackColor = false;
  this->EssentialsButton->Click +=
      gcnew System::EventHandler(this, &InputWindow::EssentialsButton_Click);
  //
  // panel6
  //
  this->panel6->BackColor = System::Drawing::Color::FromArgb(
      static_cast<System::Int32>(static_cast<System::Byte>(255)),
      static_cast<System::Int32>(static_cast<System::Byte>(5)),
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
  this->BillsButton->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->BillsButton->Location = System::Drawing::Point(0, 3);
  this->BillsButton->Name = L"BillsButton";
  this->BillsButton->Size = System::Drawing::Size(289, 254);
  this->BillsButton->TabIndex = 39;
  this->BillsButton->Text = L"Bills";
  this->BillsButton->UseVisualStyleBackColor = true;
  this->BillsButton->Click +=
      gcnew System::EventHandler(this, &InputWindow::BillsButton_Click);
  //
  // panel7
  //
  this->panel7->BackColor = System::Drawing::Color::FromArgb(
      static_cast<System::Int32>(static_cast<System::Byte>(0)),
      static_cast<System::Int32>(static_cast<System::Byte>(201)),
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
  this->SavingsButton->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->SavingsButton->Location = System::Drawing::Point(3, 3);
  this->SavingsButton->Name = L"SavingsButton";
  this->SavingsButton->Size = System::Drawing::Size(296, 245);
  this->SavingsButton->TabIndex = 0;
  this->SavingsButton->Text = L"Savings";
  this->SavingsButton->UseVisualStyleBackColor = true;
  this->SavingsButton->Click +=
      gcnew System::EventHandler(this, &InputWindow::SavingsButton_Click);
  //
  // panel3
  //
  this->panel3->BackColor = System::Drawing::Color::FromArgb(
      static_cast<System::Int32>(static_cast<System::Byte>(255)),
      static_cast<System::Int32>(static_cast<System::Byte>(185)),
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
  this->RecreationsButton->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
  this->RecreationsButton->Location = System::Drawing::Point(3, 3);
  this->RecreationsButton->Name = L"RecreationsButton";
  this->RecreationsButton->Size = System::Drawing::Size(293, 254);
  this->RecreationsButton->TabIndex = 0;
  this->RecreationsButton->Text = L"Recreations";
  this->RecreationsButton->UseVisualStyleBackColor = true;
  this->RecreationsButton->Click +=
      gcnew System::EventHandler(this, &InputWindow::RecreationsButton_Click);
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

System::Void
BudgetCalculator::InputWindow::BillsButton_Click(System::Object ^ sender,
                                                 System::EventArgs ^ e) {
  BillsWindow ^ billswindow = gcnew BillsWindow();
  billswindow->Show();
}

System::Void
BudgetCalculator::InputWindow::SavingsButton_Click(System::Object ^ sender,
                                                   System::EventArgs ^ e) {
  SavingsWindow ^ savingswindow = gcnew SavingsWindow();
  savingswindow->Show();
}

System::Void
BudgetCalculator::InputWindow::RecreationsButton_Click(System::Object ^ sender,
                                                       System::EventArgs ^ e) {
  RecreationsWindow ^ savingswindow = gcnew RecreationsWindow();
  recreatiosnwindow->Show();
}

System::Void
BudgetCalculator::InputWindow::EssentialsButton_Click(System::Object ^ sender,
                                                      System::EventArgs ^ e) {
  EssentialsWindow ^ essentialswindow = gcnew EssentialsWindow();
  essentialswindow->Show();
}

System::Void
BudgetCalculator::InputWindow::AnalyzeButton_Click(System::Object ^ sender,
                                                   System::EventArgs ^ e) {
  totalIncome = Convert::ToInt32(this->income->Text);

  if (totalIncome <= 0) {
    MessageBox::Show("Take-Home income cannot be 0 or negative.");
    this->income->BackColor = System::Drawing::Color::Red;
  } else {
    totalEssentials = getTotalEssentials();

    totalBills = getTotalBills();

    totalRecreations = getTotalRecreations();

    totalSavings = getTotalSavings();

    totalSpendings = getTotalSpendings(totalEssentials, totalBills,
                                       totalRecreations, totalSavings);
    OutputWindow ^ outputwindow =
        gcnew OutputWindow(totalIncome, totalSpendings, totalEssentials,
                           totalBills, totalRecreations, totalSavings);
    outputwindow->Show();
  }
}
