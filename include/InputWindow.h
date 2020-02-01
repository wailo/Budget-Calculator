
#pragma once

#include "BillsWindow.h"
#include "EssentialsWindow.h"
#include "OutputWindow.h"
#include "RecreationsWindow.h"
#include "SavingsWindow.h"

namespace BudgetCalculator
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class InputWindow : public System::Windows::Forms::Form
{
  public:
    //! User's income.
    int totalIncome;

    //! The sum of user's total spendings.
    int totalSpendings;

    //! The sum of user's total essentials.
    int totalEssentials;

    //! The sum of user's total bills.
    int totalBills;

    //! The sum of user's total recreations.
    int totalRecreations;

    //! The sum of user's total savings.
    int totalSavings;

    // Declare instances of each window (bills, savings, recreations, essentials)
    BillsWindow ^ billswindow = gcnew BillsWindow();
    SavingsWindow ^ savingswindow = gcnew SavingsWindow();
    RecreationsWindow ^ recreatiosnwindow = gcnew RecreationsWindow();
    EssentialsWindow ^ essentialswindow = gcnew EssentialsWindow();

    /**
     * Constructor
     */
    InputWindow(void);

    /**
     * Sums the essential bills values
     *
     * @return integer of total essential bills.
     */
    int getTotalEssentials();

    /**
     * Sums the bill bills values
     *
     * @return integer of total bill bills.
     */
    int getTotalBills();

    /**
     * Sums the recreation bills values
     *
     * @return integer of total recreation bills.
     */
    int getTotalRecreations();

    /**
     * Sums the saving bills values
     *
     * @return integer of total saving bills.
     */
    int getTotalSavings();

    /**
     * Sums all bills values
     *
     * @return integer of total  bills.
     */
    int getTotalSpendings();

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

    /**
     * Sums the essential bills values
     *
     * @return integer of total essential bills.
     */
    void InitializeComponent(void);

#pragma endregion

    /**
     * Shows bills window
     *
     * @param sender, object that initiated the event
     * @param e, event object
     */
    System::Void BillsButton_Click(System::Object ^ sender, System::EventArgs ^ e);

    /**
     * Shows saving window
     *
     * @param sender, object that initiated the event
     * @param e, event object
     */
    System::Void SavingsButton_Click(System::Object ^ sender, System::EventArgs ^ e);

    /**
     * Shows recreation window
     *
     * @param Click object, Event argument.
     */
    System::Void RecreationsButton_Click(System::Object ^ sender, System::EventArgs ^ e);

    /**
     * Shows essential window
     *
     * @param Click object, Event argument.
     */
    System::Void EssentialsButton_Click(System::Object ^ sender, System::EventArgs ^ e);

    /**
     * Calculates user inputs
     *
     * @param Click object, Event argument.
     */
    System::Void AnalyzeButton_Click(System::Object ^ sender, System::EventArgs ^ e);
};
} // namespace BudgetCalculator
