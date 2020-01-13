#pragma once
#include "pch.h"
namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

ref class EssentialsWindow : public System::Windows::Forms::Form {

public:
  // Constructor
  EssentialsWindow();
  // Structure to store essential bills values.
  ref struct essentialsStruct {
    int inputGroceriesBill;
    int inputTransportationBill;
    int inputChildcareBill;
    int inputPetsBill;
    int inputDebtsAndLoansBill;
    int inputOtherEssentials;
  } essentials;

private:
  // Function executed on clicking save button event.
  System::Void EssentialsSaveButton_Click(System::Object ^ sender,
                                          System::EventArgs ^ e);
  // Window elements declarations

  System::Windows::Forms::RichTextBox ^ OtherEssentials;

  System::Windows::Forms::RichTextBox ^ DebtsAndLoansBill;

  System::Windows::Forms::RichTextBox ^ PetsBill;

  System::Windows::Forms::RichTextBox ^ ChildcareBill;

  System::Windows::Forms::RichTextBox ^ GroceriesBill;

  System::Windows::Forms::Label ^ label1;

  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

  System::Windows::Forms::Panel ^ panel8;

  System::Windows::Forms::RichTextBox ^ TransportationBill;

  System::Windows::Forms::Button ^ EssentialsSaveButton;

  System::Windows::Forms::Panel ^ panel2;

  System::Windows::Forms::Panel ^ panel1;

  System::Windows::Forms::Label ^ label9;

  System::Windows::Forms::Label ^ label7;

  System::Windows::Forms::Label ^ label6;

  System::Windows::Forms::Label ^ label4;

  System::Windows::Forms::Label ^ label3;

  System::Windows::Forms::Label ^ label2;

  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
  // Function to initialize window elements.
  void InitializeComponent();
#pragma endregion
};
} // namespace BudgetCalculator
