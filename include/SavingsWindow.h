#pragma once

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class SavingsWindow : public System::Windows::Forms::Form {
public:
  // Constructor
  SavingsWindow(void);
  // Structure to store saving bills values.
  ref struct savingsStruct {

    int inputEmergencyBill;
    int inputHomeRepairsBill;
    int inputCarRepairsBill;
    int inputOtherSavings;

  } savings;

private:
  // Function executed on clicking save button event.
  System::Void SavingsSaveButton_Click(System::Object ^ sender,
                                       System::EventArgs ^ e);
  // Window elements declarations
  System::Windows::Forms::Label ^ label9;

  System::Windows::Forms::RichTextBox ^ OtherSavings;

  System::Windows::Forms::Label ^ label4;

  System::Windows::Forms::RichTextBox ^ CarRepairBill;

  System::Windows::Forms::Label ^ label3;

  System::Windows::Forms::Label ^ label2;

  System::Windows::Forms::RichTextBox ^ EmergencyBill;

  System::Windows::Forms::Label ^ label1;

  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

  System::Windows::Forms::Panel ^ panel1;

  System::Windows::Forms::Button ^ SavingsSaveButton;

  System::Windows::Forms::Panel ^ panel2;

  System::Windows::Forms::RichTextBox ^ HomeRepairBill;

  System::Windows::Forms::Panel ^ panel8;

  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
  // Function to initialize window elements.
  void InitializeComponent(void);
#pragma endregion
};
} // namespace BudgetCalculator
