#pragma once

#include "InputWindow.h"
#include "pch.h"

int inputGroceriesBill;
int inputTransportationBill;
int inputChildcareBill;
int inputPetsBill;
int inputDebtsAndLoansBill;
int inputOtherEssentials;

namespace BudgetCalculator {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
string int_GroceriesBill = "0";
/// <summary>
/// Summary for EssentialsWindow
/// </summary>
public
ref class EssentialsWindow : public System::Windows::Forms::Form {

public:
  EssentialsWindow() {
    InitializeComponent();
    //
    // TODO: Add the constructor code here
    //
  }

protected:
  /// <summary>
  /// Clean up any resources being used.
  /// </summary>
  ~EssentialsWindow() {
    if (components) {
      delete components;
    }
  }

private:
  System::Windows::Forms::RichTextBox ^ OtherEssentials;

protected:
protected:
private:
  System::Windows::Forms::RichTextBox ^ DebtsAndLoansBill;

private:
  System::Windows::Forms::RichTextBox ^ PetsBill;

private:
  System::Windows::Forms::RichTextBox ^ ChildcareBill;

private:
  System::Windows::Forms::RichTextBox ^ GroceriesBill;

private:
  System::Windows::Forms::Label ^ label1;

private:
  System::ComponentModel::BackgroundWorker ^ backgroundWorker1;

private:
  System::Windows::Forms::Panel ^ panel8;

private:
  System::Windows::Forms::RichTextBox ^ TransportationBill;

private:
  System::Windows::Forms::Button ^ EssentialsSaveButton;

private:
  System::Windows::Forms::Panel ^ panel2;

private:
  System::Windows::Forms::Panel ^ panel1;

private:
  System::Windows::Forms::Label ^ label9;

private:
  System::Windows::Forms::Label ^ label7;

private:
  System::Windows::Forms::Label ^ label6;

private:
  System::Windows::Forms::Label ^ label4;

private:
  System::Windows::Forms::Label ^ label3;

private:
  System::Windows::Forms::Label ^ label2;

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
  void InitializeComponent() {
    this->OtherEssentials = (gcnew System::Windows::Forms::RichTextBox());
    this->DebtsAndLoansBill = (gcnew System::Windows::Forms::RichTextBox());
    this->PetsBill = (gcnew System::Windows::Forms::RichTextBox());
    this->ChildcareBill = (gcnew System::Windows::Forms::RichTextBox());
    this->GroceriesBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->backgroundWorker1 =
        (gcnew System::ComponentModel::BackgroundWorker());
    this->panel8 = (gcnew System::Windows::Forms::Panel());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->TransportationBill = (gcnew System::Windows::Forms::RichTextBox());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->EssentialsSaveButton = (gcnew System::Windows::Forms::Button());
    this->panel2 = (gcnew System::Windows::Forms::Panel());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->panel8->SuspendLayout();
    this->panel2->SuspendLayout();
    this->panel1->SuspendLayout();
    this->SuspendLayout();
    //
    // OtherEssentials
    //
    this->OtherEssentials->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->OtherEssentials->Location = System::Drawing::Point(474, 401);
    this->OtherEssentials->Name = L"OtherEssentials";
    this->OtherEssentials->Size = System::Drawing::Size(165, 33);
    this->OtherEssentials->TabIndex = 14;
    this->OtherEssentials->Text = L"0";
    this->OtherEssentials->TextChanged += gcnew System::EventHandler(
        this, &EssentialsWindow::OtherEssentials_TextChanged);
    //
    // DebtsAndLoansBill
    //
    this->DebtsAndLoansBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->DebtsAndLoansBill->Location = System::Drawing::Point(474, 342);
    this->DebtsAndLoansBill->Name = L"DebtsAndLoansBill";
    this->DebtsAndLoansBill->Size = System::Drawing::Size(165, 33);
    this->DebtsAndLoansBill->TabIndex = 8;
    this->DebtsAndLoansBill->Text = L"0";
    //
    // PetsBill
    //
    this->PetsBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->PetsBill->Location = System::Drawing::Point(474, 283);
    this->PetsBill->Name = L"PetsBill";
    this->PetsBill->Size = System::Drawing::Size(165, 33);
    this->PetsBill->TabIndex = 6;
    this->PetsBill->Text = L"0";
    //
    // ChildcareBill
    //
    this->ChildcareBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->ChildcareBill->Location = System::Drawing::Point(474, 224);
    this->ChildcareBill->Name = L"ChildcareBill";
    this->ChildcareBill->Size = System::Drawing::Size(165, 33);
    this->ChildcareBill->TabIndex = 4;
    this->ChildcareBill->Text = L"0";
    //
    // GroceriesBill
    //
    this->GroceriesBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->GroceriesBill->Location = System::Drawing::Point(474, 106);
    this->GroceriesBill->Name = L"GroceriesBill";
    this->GroceriesBill->Size = System::Drawing::Size(165, 33);
    this->GroceriesBill->TabIndex = 0;
    this->GroceriesBill->Text = L"0";
    this->GroceriesBill->TextChanged += gcnew System::EventHandler(
        this, &EssentialsWindow::GroceriesBill_TextChanged);
    //
    // label1
    //
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label1->ForeColor =
        System::Drawing::SystemColors::InactiveCaptionText;
    this->label1->Location = System::Drawing::Point(323, 18);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(184, 45);
    this->label1->TabIndex = 0;
    this->label1->Text = L"Essentials";
    this->label1->Click +=
        gcnew System::EventHandler(this, &EssentialsWindow::label1_Click);
    //
    // panel8
    //
    this->panel8->BackColor = System::Drawing::Color::LightSkyBlue;
    this->panel8->Controls->Add(this->label9);
    this->panel8->Controls->Add(this->OtherEssentials);
    this->panel8->Controls->Add(this->label7);
    this->panel8->Controls->Add(this->label6);
    this->panel8->Controls->Add(this->DebtsAndLoansBill);
    this->panel8->Controls->Add(this->PetsBill);
    this->panel8->Controls->Add(this->label4);
    this->panel8->Controls->Add(this->ChildcareBill);
    this->panel8->Controls->Add(this->label3);
    this->panel8->Controls->Add(this->TransportationBill);
    this->panel8->Controls->Add(this->label2);
    this->panel8->Controls->Add(this->GroceriesBill);
    this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
    this->panel8->Location = System::Drawing::Point(0, 78);
    this->panel8->Name = L"panel8";
    this->panel8->Size = System::Drawing::Size(837, 584);
    this->panel8->TabIndex = 49;
    //
    // label9
    //
    this->label9->AutoSize = true;
    this->label9->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label9->Location = System::Drawing::Point(20, 404);
    this->label9->Name = L"label9";
    this->label9->Size = System::Drawing::Size(107, 45);
    this->label9->TabIndex = 15;
    this->label9->Text = L"Other";
    //
    // label7
    //
    this->label7->AutoSize = true;
    this->label7->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label7->Location = System::Drawing::Point(20, 342);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(280, 45);
    this->label7->TabIndex = 11;
    this->label7->Text = L"Debts and Loans";
    //
    // label6
    //
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label6->Location = System::Drawing::Point(20, 280);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(90, 45);
    this->label6->TabIndex = 9;
    this->label6->Text = L"Pets";
    //
    // label4
    //
    this->label4->AutoSize = true;
    this->label4->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label4->Location = System::Drawing::Point(20, 218);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(176, 45);
    this->label4->TabIndex = 5;
    this->label4->Text = L"Childcare";
    //
    // label3
    //
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label3->Location = System::Drawing::Point(20, 156);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(260, 45);
    this->label3->TabIndex = 3;
    this->label3->Text = L"Transportation";
    //
    // TransportationBill
    //
    this->TransportationBill->Font = (gcnew System::Drawing::Font(
        L"Impact", 16.75F, System::Drawing::FontStyle::Bold));
    this->TransportationBill->Location = System::Drawing::Point(474, 165);
    this->TransportationBill->Name = L"TransportationBill";
    this->TransportationBill->Size = System::Drawing::Size(165, 33);
    this->TransportationBill->TabIndex = 2;
    this->TransportationBill->Text = L"0";
    //
    // label2
    //
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->label2->Location = System::Drawing::Point(20, 94);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(177, 45);
    this->label2->TabIndex = 1;
    this->label2->Text = L"Groceries";
    this->label2->Click +=
        gcnew System::EventHandler(this, &EssentialsWindow::label2_Click);
    //
    // EssentialsSaveButton
    //
    this->EssentialsSaveButton->Font = (gcnew System::Drawing::Font(
        L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
    this->EssentialsSaveButton->Location = System::Drawing::Point(4, 0);
    this->EssentialsSaveButton->Name = L"EssentialsSaveButton";
    this->EssentialsSaveButton->Size = System::Drawing::Size(833, 86);
    this->EssentialsSaveButton->TabIndex = 0;
    this->EssentialsSaveButton->Text = L"Save and Exit";
    this->EssentialsSaveButton->UseVisualStyleBackColor = true;
    this->EssentialsSaveButton->Click += gcnew System::EventHandler(
        this, &EssentialsWindow::EssentialsSaveButton_Click);
    //
    // panel2
    //
    this->panel2->Controls->Add(this->EssentialsSaveButton);
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
    // EssentialsWindow
    //
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(837, 748);
    this->Controls->Add(this->panel8);
    this->Controls->Add(this->panel2);
    this->Controls->Add(this->panel1);
    this->Name = L"EssentialsWindow";
    this->Text = L"EssentialsWindow";
    this->panel8->ResumeLayout(false);
    this->panel8->PerformLayout();
    this->panel2->ResumeLayout(false);
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->ResumeLayout(false);
  }
#pragma endregion
private:
  System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {}

private:
  System::Void GroceriesBill_TextChanged(System::Object ^ sender,
                                         System::EventArgs ^ e) {}

private:
  System::Void OtherEssentials_TextChanged(System::Object ^ sender,
                                           System::EventArgs ^ e) {}

private:
  System::Void EssentialsSaveButton_Click(System::Object ^ sender,
                                          System::EventArgs ^ e) {
    inputGroceriesBill = Convert::ToInt32(GroceriesBill->Text);
    inputTransportationBill = Convert::ToInt32(TransportationBill->Text);
    inputChildcareBill = Convert::ToInt32(ChildcareBill->Text);
    inputPetsBill = Convert::ToInt32(PetsBill->Text);
    inputDebtsAndLoansBill = Convert::ToInt32(DebtsAndLoansBill->Text);
    inputOtherEssentials = Convert::ToInt32(OtherEssentials->Text);
    std::cout << to_string(inputChildcareBill + inputDebtsAndLoansBill +
                           inputGroceriesBill + inputTransportationBill +
                           inputPetsBill + inputOtherEssentials)
              << endl;

    this->Hide();
  }

private:
  System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {}
};
} // namespace BudgetCalculator
