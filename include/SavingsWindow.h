#pragma once

#include "InputWindow.h"

int inputEmergencyBill;
int inputHomeRepairsBill;
int inputCarRepairsBill;
int inputOtherSavings;

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// Summary for SavingsWindow
/// </summary>
public
ref class SavingsWindow : public System::Windows::Forms::Form {
public:
  SavingsWindow(void) {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~SavingsWindow() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::RichTextBox ^ OtherSavings;

protected:
private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::RichTextBox ^ CarRepairBill;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::Label ^ label2;

private:
  System::Windows::Forms::RichTextBox ^ EmergencyBill;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

private:
  System::Windows::Forms::Panel ^ panel1;

private:
  System::Windows::Forms::Button ^ SavingsSaveButton;

private:
  System::Windows::Forms::Panel ^ panel2;

private:
  System::Windows::Forms::RichTextBox ^ HomeRepairBill;

private:
  System::Windows::Forms::Panel ^ panel8;

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
    this->OtherSavings = (gcnew System::Windows::Forms::RichTextBox());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->CarRepairBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->EmergencyBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->backgroundWorker1 =
        (gcnew System::ComponentModel::BackgroundWorker());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->SavingsSaveButton = (gcnew System::Windows::Forms::Button());
    this->panel2 = (gcnew System::Windows::Forms::Panel());
    this->HomeRepairBill = (gcnew System::Windows::Forms::RichTextBox());
    this->panel8 = (gcnew System::Windows::Forms::Panel());
    this->panel1->SuspendLayout();
    this->panel2->SuspendLayout();
    this->panel8->SuspendLayout();
    this->SuspendLayout();
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label9->Location = System::Drawing::Point(21, 330);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(107, 45);
    this->label9->TabIndex = 15;
    this->label9->Text = L"Other";
    //
    // OtherSavings
    //
    this->OtherSavings->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->OtherSavings->Location = System::Drawing::Point(474, 330);
    this->OtherSavings->Name = L"OtherSavings";
    this->OtherSavings->Size = System::Drawing::Size(165, 33);
    this->OtherSavings->TabIndex = 8;
    this->OtherSavings->Text = L"0";
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label4->Location = System::Drawing::Point(21, 263);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(207, 45);
    this->label4->TabIndex = 5;
    this->label4->Text = L"Car Repairs";
    //
    // CarRepairBill
    //
    this->CarRepairBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->CarRepairBill->Location = System::Drawing::Point(474, 267);
    this->CarRepairBill->Name = L"CarRepairBill";
    this->CarRepairBill->Size = System::Drawing::Size(165, 33);
    this->CarRepairBill->TabIndex = 4;
    this->CarRepairBill->Text = L"0";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label3->Location = System::Drawing::Point(21, 196);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(243, 45);
    this->label3->TabIndex = 3;
    this->label3->Text = L"Home Repairs";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label2->Location = System::Drawing::Point(21, 129);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(196, 45);
    this->label2->TabIndex = 1;
    this->label2->Text = L"Emergency";
    //
    // EmergencyBill
    //
    this->EmergencyBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->EmergencyBill->Location = System::Drawing::Point(474, 141);
    this->EmergencyBill->Name = L"EmergencyBill";
    this->EmergencyBill->Size = System::Drawing::Size(165, 33);
    this->EmergencyBill->TabIndex = 0;
    this->EmergencyBill->Text = L"0";
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
    this->label1->Size = System::Drawing::Size(146, 45);
    this->label1->TabIndex = 0;
    this->label1->Text = L"Savings";
    this->label1->Click +=
        gcnew System::EventHandler(this, &SavingsWindow::label1_Click);
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
    // SavingsSaveButton
    //
    this->SavingsSaveButton->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->SavingsSaveButton->Location = System::Drawing::Point(4, 0);
    this->SavingsSaveButton->Name = L"SavingsSaveButton";
    this->SavingsSaveButton->Size = System::Drawing::Size(833, 86);
    this->SavingsSaveButton->TabIndex = 0;
    this->SavingsSaveButton->Text = L"Save and Exit";
    this->SavingsSaveButton->UseVisualStyleBackColor = true;
    this->SavingsSaveButton->Click += gcnew System::EventHandler(
        this, &SavingsWindow::SavingsSaveButton_Click);
    //
    // panel2
    //
    this->panel2->Controls->Add(this->SavingsSaveButton);
    this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
    this->panel2->Location = System::Drawing::Point(0, 662);
    this->panel2->Name = L"panel2";
    this->panel2->Size = System::Drawing::Size(837, 86);
    this->panel2->TabIndex = 48;
    //
    // HomeRepairBill
    //
    this->HomeRepairBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->HomeRepairBill->Location = System::Drawing::Point(474, 204);
    this->HomeRepairBill->Name = L"HomeRepairBill";
    this->HomeRepairBill->Size = System::Drawing::Size(165, 33);
    this->HomeRepairBill->TabIndex = 2;
    this->HomeRepairBill->Text = L"0";
    //
    // panel8
    //
    this->panel8->BackColor = System::Drawing::Color::LimeGreen;
    this->panel8->Controls->Add(this->label9);
    this->panel8->Controls->Add(this->OtherSavings);
    this->panel8->Controls->Add(this->label4);
    this->panel8->Controls->Add(this->CarRepairBill);
    this->panel8->Controls->Add(this->label3);
    this->panel8->Controls->Add(this->HomeRepairBill);
    this->panel8->Controls->Add(this->label2);
    this->panel8->Controls->Add(this->EmergencyBill);
    this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
    this->panel8->Location = System::Drawing::Point(0, 0);
    this->panel8->Name = L"panel8";
    this->panel8->Size = System::Drawing::Size(837, 748);
    this->panel8->TabIndex = 49;
    //
    // SavingsWindow
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(837, 748);
    this->Controls->Add(this->panel1);
    this->Controls->Add(this->panel2);
    this->Controls->Add(this->panel8);
    this->Name = L"SavingsWindow";
    this->Text = L"SavingsWindow";
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->panel2->ResumeLayout(false);
    this->panel8->ResumeLayout(false);
    this->panel8->PerformLayout();
    this->ResumeLayout(false);
  }
#pragma endregion
private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void SavingsSaveButton_Click(System::Object ^ sender,
                                       System::EventArgs ^ e) {

    inputEmergencyBill = Convert::ToInt32(EmergencyBill->Text);
    inputHomeRepairsBill = Convert::ToInt32(HomeRepairBill->Text);
    inputCarRepairsBill = Convert::ToInt32(CarRepairBill->Text);
    inputOtherSavings = Convert::ToInt32(OtherSavings->Text);

    this->Hide();
  }
};
} // namespace BudgetCalculator
