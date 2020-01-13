
#pragma once

#include "BillsWindow.h"
#include "EssentialsWindow.h"
#include "OutputWindow.h"
#include "RecreationsWindow.h"
#include "SavingsWindow.h"

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class InputWindow : public System::Windows::Forms::Form {
public:
  // Declare class member data
  int totalIncome;
  int totalSpendings;
  int totalEssentials;
  int totalBills;
  int totalRecreations;
  int totalSavings;
  // Declare instances of each window (bills, savings, recreations, essentials)
  BillsWindow ^ billswindow = gcnew BillsWindow();
  SavingsWindow ^ savingswindow = gcnew SavingsWindow();
  RecreationsWindow ^ recreatiosnwindow = gcnew RecreationsWindow();
  EssentialsWindow ^ essentialswindow = gcnew EssentialsWindow();
  // Constructor
  InputWindow(void);
  // Function to get the total value of essential bills
  int getTotalEssentials();
  // Function to get the total value of bill bills
  int getTotalBills();
  // Function to get the total value of recreation bills
  int getTotalRecreations();
  // Function to get the total value of saving bills
  int getTotalSavings();
  // Function to get the total value of all bills
  int getTotalSpendings(int totalEssentials, int totalBills,
                        int totalRecreations, int totalSavings);

private:
  // Window elements declarations
  System::Windows::Forms::Label ^ label1;

  System::ComponentModel::Container ^ components;

  System::Windows::Forms::Panel ^ panel2;

  System::Windows::Forms::Panel ^ panel5;

  System::Windows::Forms::Button ^ EssentialsButton;

  System::Windows::Forms::Panel ^ panel6;

  System::Windows::Forms::Button ^ BillsButton;

  System::Windows::Forms::Panel ^ panel7;

  System::Windows::Forms::Button ^ SavingsButton;

  System::Windows::Forms::Panel ^ panel3;

  System::Windows::Forms::Button ^ RecreationsButton;

  System::Windows::Forms::Panel ^ panel8;

  System::Windows::Forms::RichTextBox ^ income;

  System::Windows::Forms::Button ^ AnalyzeButton;

  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

  System::Windows::Forms::Panel ^ panel1;

#pragma region Windows Form Designer generated code
  // Function to initialize window elements.
  void InitializeComponent(void);
#pragma endregion
  // Function executed on clicking bills button event.
  System::Void BillsButton_Click(System::Object ^ sender,
                                 System::EventArgs ^ e);
  // Function executed on clicking savings button event.
  System::Void SavingsButton_Click(System::Object ^ sender,
                                   System::EventArgs ^ e);
  // Function executed on clicking recreations button event.
  System::Void RecreationsButton_Click(System::Object ^ sender,
                                       System::EventArgs ^ e);
  // Function executed on clicking essentials button event.
  System::Void EssentialsButton_Click(System::Object ^ sender,
                                      System::EventArgs ^ e);
  // Function executed on clicking analyze button event.
  System::Void AnalyzeButton_Click(System::Object ^ sender,
                                   System::EventArgs ^ e);
};
} // namespace BudgetCalculator
