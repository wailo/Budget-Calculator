#include "pch.h"
#include "MainWindow.h"

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

BudgetCalculator::MainWindow::MainWindow(void) { InitializeComponent(); }

void BudgetCalculator::MainWindow::InitializeComponent(void) {
  System::ComponentModel::ComponentResourceManager ^ resources =
      (gcnew System::ComponentModel::ComponentResourceManager(
          MainWindow::typeid));
  this->button1 = (gcnew System::Windows::Forms::Button());
  this->SuspendLayout();
  //
  // button1
  //
  this->button1->Font = (gcnew System::Drawing::Font(
      L"Impact", 27.75F, System::Drawing::FontStyle::Bold,
      System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
  this->button1->ForeColor = System::Drawing::SystemColors::GrayText;
  this->button1->Location = System::Drawing::Point(162, 671);
  this->button1->Name = L"button1";
  this->button1->Size = System::Drawing::Size(467, 65);
  this->button1->TabIndex = 0;
  this->button1->Text = L"Start";
  this->button1->UseVisualStyleBackColor = true;
  this->button1->Click +=
      gcnew System::EventHandler(this, &MainWindow::button1_Click);
  //
  // MainWindow
  //
  this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
  this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(
      resources->GetObject(L"$this.BackgroundImage")));
  this->ClientSize = System::Drawing::Size(837, 748);
  this->Controls->Add(this->button1);
  this->Name = L"MainWindow";
  this->Text = L"MainWindow";
  this->ResumeLayout(false);
}

System::Void
BudgetCalculator::MainWindow::button1_Click(System::Object ^ sender,
                                            System::EventArgs ^ e) {
  this->Hide();
  InputWindow ^ inputWindow = gcnew InputWindow;
  inputWindow->Show();
}
