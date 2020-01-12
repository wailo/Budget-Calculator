
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
  int totalIncome;
  int totalSpendings;
  int totalEssentials;
  int totalBills;
  int totalRecreations;
  int totalSavings;
  BillsWindow ^ billswindow = gcnew BillsWindow();
  SavingsWindow ^ savingswindow = gcnew SavingsWindow();
  RecreationsWindow ^ recreatiosnwindow = gcnew RecreationsWindow();
  EssentialsWindow ^ essentialswindow = gcnew EssentialsWindow();
  InputWindow(void) { InitializeComponent(); }

  int getTotalEssentials();
  int getTotalBills();
  int getTotalRecreations();
  int getTotalSavings();
  int getTotalSpendings(int totalEssentials, int totalBills,
                        int totalRecreations, int totalSavings);

private:
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

  void InitializeComponent(void);
#pragma endregion

  System::Void BillsButton_Click(System::Object ^ sender,
                                 System::EventArgs ^ e);

  System::Void SavingsButton_Click(System::Object ^ sender,
                                   System::EventArgs ^ e);

  System::Void RecreationsButton_Click(System::Object ^ sender,
                                       System::EventArgs ^ e);

  System::Void EssentialsButton_Click(System::Object ^ sender,
                                      System::EventArgs ^ e);

  System::Void AnalyzeButton_Click(System::Object ^ sender,
                                   System::EventArgs ^ e);
};
}
