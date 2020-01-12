#pragma once

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class RecreationsWindow : public System::Windows::Forms::Form {
public:
  RecreationsWindow(void) { InitializeComponent(); }

  ref struct recreationsStruct {

    int inputEatOutBill;
    int inputGymBill;
    int inputTicketsBill;
    int inputGiftsBill;
    int inputHolidaysBill;
    int inputOtherRecreations;

  } recreations;

private:
  System::Void RecreationsSaveButton_Click(System::Object ^ sender,
                                           System::EventArgs ^ e);

  System::Windows::Forms::Label ^ label9;

  System::Windows::Forms::RichTextBox ^ OtherRecreations;

  System::Windows::Forms::Label ^ label6;

  System::Windows::Forms::RichTextBox ^ HolidaysBill;

  System::Windows::Forms::Label ^ label5;

  System::Windows::Forms::RichTextBox ^ GiftsBill;

  System::Windows::Forms::Label ^ label4;

  System::Windows::Forms::RichTextBox ^ TicketsBill;

  System::Windows::Forms::Label ^ label3;

  System::Windows::Forms::Label ^ label2;

  System::Windows::Forms::RichTextBox ^ EatOutBill;

  System::Windows::Forms::Label ^ label1;

  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

  System::Windows::Forms::Panel ^ panel8;

  System::Windows::Forms::RichTextBox ^ GymBill;

  System::Windows::Forms::Button ^ RecreationsSaveButton;

  System::Windows::Forms::Panel ^ panel2;

  System::Windows::Forms::Panel ^ panel1;

  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code

  void InitializeComponent(void);
#pragma endregion
};
}
