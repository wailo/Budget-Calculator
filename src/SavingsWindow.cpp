#include "SavingsWindow.h"
#include "pch.h"

System::Void BudgetCalculator::SavingsWindow::SavingsSaveButton_Click(
    System::Object ^ sender, System::EventArgs ^ e) {
  savings.inputEmergencyBill = Convert::ToInt32(EmergencyBill->Text);
  savings.inputHomeRepairsBill = Convert::ToInt32(HomeRepairBill->Text);
  savings.inputCarRepairsBill = Convert::ToInt32(CarRepairBill->Text);
  savings.inputOtherSavings = Convert::ToInt32(OtherSavings->Text);

  this->Hide();
}
