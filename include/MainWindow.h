
#pragma once

#include "InputWindow.h"

namespace BudgetCalculator
{

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class MainWindow : public System::Windows::Forms::Form
{
  public:
    /**
     * Constructor
     *
     * @param NA.
     * @return NA.
     */
    MainWindow(void);

  private:
    // Window elements declarations
    System::Windows::Forms::Button ^ button1;

    System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code

    /**
     * Initializes window components and items.
     *
     * @param NA.
     * @return NA.
     */
    void InitializeComponent(void);
#pragma endregion
  private:
    /**
     * Starts the application
     *
     * @param Click object, event arguement.
     * @return NA.
     */
    System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e);
};
} // namespace BudgetCalculator
