#pragma once

//#include "InputWindow.h"

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for RecreationsWindow
/// </summary>
public
ref class RecreationsWindow : public System::Windows::Forms::Form {
public:
  RecreationsWindow(void) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }
  ref struct recreationsStruct {

      int inputEatOutBill;
      int inputGymBill;
      int inputTicketsBill;
      int inputGiftsBill;
      int inputHolidaysBill;
      int inputOtherRecreations;

  } recreations;

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~RecreationsWindow() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::RichTextBox ^ OtherRecreations;

protected:
private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::RichTextBox ^ HolidaysBill;

private:
  System::Windows::Forms::Label ^ label5;

private:
  System::Windows::Forms::RichTextBox ^ GiftsBill;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::RichTextBox ^ TicketsBill;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::RichTextBox ^ EatOutBill;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

private:
  System::Windows::Forms::Panel ^ panel8;

private:
  System::Windows::Forms::RichTextBox ^ GymBill;

private:
  System::Windows::Forms::Button ^ RecreationsSaveButton;

private:
  System::Windows::Forms::Panel ^ panel2;

private:
  System::Windows::Forms::Panel ^ panel1;

private:
  /// <summary>
  /// Required designer variable.
  /// </summary>
  System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
  /// <summary>
  /// Required method for Designer support - do not modify
  /// the contents of this method with the code editor.
  /// </summary>
  void InitializeComponent(void) {
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->OtherRecreations = (gcnew System::Windows::Forms::RichTextBox());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->HolidaysBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->GiftsBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->TicketsBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->EatOutBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->backgroundWorker1 =
        (gcnew System::ComponentModel::BackgroundWorker());
    this->panel8 = (gcnew System::Windows::Forms::Panel());
    this->GymBill = (gcnew System::Windows::Forms::RichTextBox());
    this->RecreationsSaveButton = (gcnew System::Windows::Forms::Button());
    this->panel2 = (gcnew System::Windows::Forms::Panel());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->panel8->SuspendLayout();
    this->panel2->SuspendLayout();
    this->panel1->SuspendLayout();
    this->SuspendLayout();
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label9->Location = System::Drawing::Point(22, 368);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(107, 45);
    this->label9->TabIndex = 15;
    this->label9->Text = L"Other";
    //
    // OtherRecreations
    //
    this->OtherRecreations->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->OtherRecreations->Location = System::Drawing::Point(473, 370);
    this->OtherRecreations->Name = L"OtherRecreations";
    this->OtherRecreations->Size = System::Drawing::Size(165, 33);
    this->OtherRecreations->TabIndex = 10;
    this->OtherRecreations->Text = L"0";
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label6->Location = System::Drawing::Point(22, 302);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(160, 45);
    this->label6->TabIndex = 9;
    this->label6->Text = L"Holidays";
    //
    // HolidaysBill
    //
    this->HolidaysBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->HolidaysBill->Location = System::Drawing::Point(473, 306);
    this->HolidaysBill->Name = L"HolidaysBill";
    this->HolidaysBill->Size = System::Drawing::Size(165, 33);
    this->HolidaysBill->TabIndex = 8;
    this->HolidaysBill->Text = L"0";
    //
    // label5
    //
    this->label5->AutoSize = true;
    this->label5->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label5->Location = System::Drawing::Point(22, 236);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(94, 45);
    this->label5->TabIndex = 7;
    this->label5->Text = L"Gifts";
    //
    // GiftsBill
    //
    this->GiftsBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->GiftsBill->Location = System::Drawing::Point(473, 242);
    this->GiftsBill->Name = L"GiftsBill";
    this->GiftsBill->Size = System::Drawing::Size(165, 33);
    this->GiftsBill->TabIndex = 6;
    this->GiftsBill->Text = L"0";
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label4->Location = System::Drawing::Point(22, 170);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(137, 45);
    this->label4->TabIndex = 5;
    this->label4->Text = L"Tickets";
    //
    // TicketsBill
    //
    this->TicketsBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->TicketsBill->Location = System::Drawing::Point(473, 178);
    this->TicketsBill->Name = L"TicketsBill";
    this->TicketsBill->Size = System::Drawing::Size(165, 33);
    this->TicketsBill->TabIndex = 4;
    this->TicketsBill->Text = L"0";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label3->Location = System::Drawing::Point(22, 104);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(88, 45);
    this->label3->TabIndex = 3;
    this->label3->Text = L"Gym";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label2->Location = System::Drawing::Point(22, 38);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(133, 45);
    this->label2->TabIndex = 1;
    this->label2->Text = L"Eat-Out";
    //
    // EatOutBill
    //
    this->EatOutBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->EatOutBill->Location = System::Drawing::Point(473, 50);
    this->EatOutBill->Name = L"EatOutBill";
    this->EatOutBill->Size = System::Drawing::Size(165, 33);
    this->EatOutBill->TabIndex = 0;
    this->EatOutBill->Text = L"0";
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label1->ForeColor =
        System::Drawing::SystemColors::InactiveCaptionText;
    this->label1->Location = System::Drawing::Point(363, 20);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(215, 45);
    this->label1->TabIndex = 0;
    this->label1->Text = L"Recreations";
    this->label1->Click +=
        gcnew System::EventHandler(this, &RecreationsWindow::label1_Click);
    //
    // panel8
    //
    this->panel8->BackColor = System::Drawing::Color::Goldenrod;
    this->panel8->Controls->Add(this->label9);
    this->panel8->Controls->Add(this->OtherRecreations);
    this->panel8->Controls->Add(this->label6);
    this->panel8->Controls->Add(this->HolidaysBill);
    this->panel8->Controls->Add(this->label5);
    this->panel8->Controls->Add(this->GiftsBill);
    this->panel8->Controls->Add(this->label4);
    this->panel8->Controls->Add(this->TicketsBill);
    this->panel8->Controls->Add(this->label3);
    this->panel8->Controls->Add(this->GymBill);
    this->panel8->Controls->Add(this->label2);
    this->panel8->Controls->Add(this->EatOutBill);
    this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
    this->panel8->Location = System::Drawing::Point(0, 78);
    this->panel8->Name = L"panel8";
    this->panel8->Size = System::Drawing::Size(837, 584);
    this->panel8->TabIndex = 49;
    //
    // GymBill
    //
    this->GymBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->GymBill->Location = System::Drawing::Point(473, 114);
    this->GymBill->Name = L"GymBill";
    this->GymBill->Size = System::Drawing::Size(165, 33);
    this->GymBill->TabIndex = 2;
    this->GymBill->Text = L"0";
    //
    // RecreationsSaveButton
    //
    this->RecreationsSaveButton->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->RecreationsSaveButton->Location = System::Drawing::Point(4, 0);
    this->RecreationsSaveButton->Name = L"RecreationsSaveButton";
    this->RecreationsSaveButton->Size = System::Drawing::Size(833, 86);
    this->RecreationsSaveButton->TabIndex = 0;
    this->RecreationsSaveButton->Text = L"Save and Exit";
    this->RecreationsSaveButton->UseVisualStyleBackColor = true;
    this->RecreationsSaveButton->Click += gcnew System::EventHandler(
        this, &RecreationsWindow::RecreationsSaveButton_Click);
    //
    // panel2
    //
    this->panel2->Controls->Add(this->RecreationsSaveButton);
    this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
    this->panel2->Location = System::Drawing::Point(0, 662);
    this->panel2->Name = L"panel2";
    this->panel2->Size = System::Drawing::Size(837, 86);
    this->panel2->TabIndex = 48;
    //
    // panel1
    //
    this->panel1->BackColor = System::Drawing::Color::Gainsboro;
    this->panel1->Controls->Add(this->label1);
    this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
    this->panel1->ForeColor = System::Drawing::SystemColors::HotTrack;
    this->panel1->Location = System::Drawing::Point(0, 0);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(837, 78);
    this->panel1->TabIndex = 47;
    //
    // RecreationsWindow
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(837, 748);
    this->Controls->Add(this->panel8);
    this->Controls->Add(this->panel2);
    this->Controls->Add(this->panel1);
    this->Name = L"RecreationsWindow";
    this->Text = L"RecreationsWindow";
    this->panel8->ResumeLayout(false);
    this->panel8->PerformLayout();
    this->panel2->ResumeLayout(false);
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->ResumeLayout(false);
  }
#pragma endregion
private:
  System::Void RecreationsSaveButton_Click(System::Object ^ sender,
                                           System::EventArgs ^ e) {
    //recreations->inputEatOutBill = Convert::ToInt32(EatOutBill->Text);
    //inputGymBill = Convert::ToInt32(GymBill->Text);
    //inputTicketsBill = Convert::ToInt32(TicketsBill->Text);
    //inputGiftsBill = Convert::ToInt32(GiftsBill->Text);
    //inputHolidaysBill = Convert::ToInt32(HolidaysBill->Text);
    //inputOtherRecreations = Convert::ToInt32(OtherRecreations->Text);
    this->Hide();
  }

private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}
};
} // namespace BudgetCalculator
