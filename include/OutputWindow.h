#pragma once

namespace BudgetCalculator
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class OutputWindow : public System::Windows::Forms::Form
{

  public:
    /**
     * Constructor
     *
     * @param totalIncome, totalSpendings, totalEssentials, totalBills, totalRecreations, totalSavings.
     * @return NA.
     */
    OutputWindow(int totalIncome, int totalSpendings, int totalEssentials, int totalBills, int totalRecreations,
                 int totalSavings);

    // Structure to store calculated bills values.
    ref struct outputStruct
    {
        int outputIncome;
        int outputSpendings;
        int outputEssentials;
        int outputBills;
        int outputRecreations;
        int outputSavings;
    } outputVariables;

    /**
     * Assigns outputVariables structure to the user input variables from InputWindow
     *
     * @param totalIncome, totalSpendings, totalEssentials, totalBills, totalRecreations, totalSavings.
     * @return NA.
     */
    void getVariables(int const totalIncome, int const totalSpendings, int const totalEssentials, int const totalBills,
                      int const totalRecreations, int const totalSavings);

    /**
     * Colors the values by red or green depending if the specific budget exceeds allowance or not.
     *
     * @param NA.
     * @return NA.
     */
    void colorInput();

    /**
     * Assigns OutputWindow text items to the variables of outputVariables structure.
     *
     * @param NA.
     * @return NA.
     */
    void valueInput();

  private:
    // Window elements declarations
    System::Windows::Forms::Panel ^ panel1;

    System::Windows::Forms::Label ^ label1;

    System::Windows::Forms::Panel ^ panel2;

    System::Windows::Forms::Label ^ label17;

    System::Windows::Forms::Label ^ recreationAllowance;

    System::Windows::Forms::Label ^ savingsAllowance;

    System::Windows::Forms::Label ^ billsAllowance;

    System::Windows::Forms::Label ^ essentialAllowance;

    System::Windows::Forms::Label ^ recreationsSpending;

    System::Windows::Forms::Label ^ savingsSpending;

    System::Windows::Forms::Label ^ label8;

    System::Windows::Forms::Label ^ label7;

    System::Windows::Forms::Label ^ label6;

    System::Windows::Forms::Label ^ label5;

    System::Windows::Forms::Label ^ label4;

    System::Windows::Forms::Label ^ label3;

    System::Windows::Forms::Label ^ label2;

    System::Windows::Forms::Button ^ AnalyzeButton;

    System::Windows::Forms::Label ^ essentialSpending;

    System::Windows::Forms::Label ^ billsSpending;

    System::Windows::Forms::Label ^ totalSpending;

    System::Windows::Forms::Label ^ totalAllowance;

    System::Windows::Forms::DataVisualization::Charting::Chart ^ colChart;

    System::Windows::Forms::DataVisualization::Charting::Chart ^ pieChart;

    System::Windows::Forms::Button ^ button1;

    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code

    /**
     * Initializes window components and items.
     */
    void InitializeComponent(void);

#pragma endregion

    /**
     * Redirects back to inputWindow window.
     *
     * @param sender, object that initiated the event
     * @param e, event object
     * @return NA.
     */
    System::Void AnalyzeButton_Click(System::Object ^ sender, System::EventArgs ^ e);

    /**
     * Exits the application.
     *
     * @param sender, object that initiated the event
     * @param e, event object
     */
    System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e);
};
} // namespace BudgetCalculator
