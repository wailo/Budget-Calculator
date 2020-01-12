
#pragma once

#include "InputWindow.h"

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class MainWindow : public System::Windows::Forms::Form {
public:
  MainWindow(void);

private:
  System::Windows::Forms::Button ^ button1;

  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code

  void InitializeComponent(void);
#pragma endregion
private:
  System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e);
};
} // namespace BudgetCalculator
