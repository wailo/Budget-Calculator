#pragma once
#include "pch.h"
namespace BudgetCalculator
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

ref class EssentialsWindow : public System::Windows::Forms::Form
{

  public:
    /**
     * Constructor
     */
    EssentialsWindow();

    // Structure to store essential bills values.
    ref struct essentialsStruct
    {
        //! Groceries bill
        int inputGroceriesBill;

        //! Transportation bill
        int inputTransportationBill;

        //! Childcare bill
        int inputChildcareBill;

        //! Pets bill
        int inputPetsBill;

        //! Debts and loans bill
        int inputDebtsAndLoansBill;

        //! Other essentials
        int inputOtherEssentials;

    } essentials;

  private:
    /**
     * Saves user's essential bills input
     *
     * @param sender, object that initiated the event
     * @param e, event object
     */
    System::Void EssentialsSaveButton_Click(System::Object ^ sender, System::EventArgs ^ e);

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

    /**
     * Initializes window components and items
     */
    void InitializeComponent();
#pragma endregion
};
} // namespace BudgetCalculator
