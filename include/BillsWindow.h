#pragma once

namespace BudgetCalculator
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class BillsWindow : public System::Windows::Forms::Form
{
  public:
    /**
     * Constructor
     *
     * @param NA.
     * @return NA.
     */
    BillsWindow(void);

    // Structure to store bill values
    ref struct billsStruct
    {
        //! Electricity bill
        int inputElectrictyBill;

        //! Water bill
        int inputWaterBill;

        //! Gas bill
        int inputGasBill;

        //! Rent bill
        int inputRentBill;

        //! Internet bill
        int inputInternetBill;

        //! Phone bill
        int inputPhoneBill;

        //! Health insurance bill
        int inputHealthInsuranceBill;

        //! Other bill
        int inputOtherBill;

    } bills;

  private:
    /**
     * Saves user's bill bills input
     *
     * @param sender, object that initiated the event
     * @param e, event object
     */
    System::Void BudgetCalculator::BillsWindow::BillSaveButton_Click(System::Object ^ sender, System::EventArgs ^ e);

    // Window forms declarations
    System::Windows::Forms::Panel ^ panel1;

    System::Windows::Forms::Panel ^ panel2;

    System::Windows::Forms::Button ^ BillSaveButton;

    System::Windows::Forms::Panel ^ panel8;

    System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

    System::Windows::Forms::Label ^ label1;

    System::Windows::Forms::RichTextBox ^ ElectricityBill;

    System::Windows::Forms::Label ^ label7;

    System::Windows::Forms::RichTextBox ^ PhoneBill;

    System::Windows::Forms::Label ^ label6;

    System::Windows::Forms::RichTextBox ^ InternetBill;

    System::Windows::Forms::Label ^ label5;

    System::Windows::Forms::RichTextBox ^ RentBill;

    System::Windows::Forms::Label ^ label4;

    System::Windows::Forms::RichTextBox ^ GasBill;

    System::Windows::Forms::Label ^ label3;

    System::Windows::Forms::RichTextBox ^ WaterBill;

    System::Windows::Forms::Label ^ label2;

    System::Windows::Forms::Label ^ label9;

    System::Windows::Forms::RichTextBox ^ OtherBill;

    System::Windows::Forms::Label ^ label8;

    System::Windows::Forms::RichTextBox ^ HealthInsuranceBill;

    System::ComponentModel::Container ^ components;

    /**
     * Initializes window components and items.
     */
    void InitializeComponent(void);
#pragma endregion
};
} // namespace BudgetCalculator
