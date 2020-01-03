#include "EssentialsWindow.h"
#include "pch.h"

System::Void BudgetCalculator::EssentialsWindow::EssentialsSaveButton_Click(
    System::Object ^ sender, System::EventArgs ^ e) {
  essentials.inputGroceriesBill = Convert::ToInt32(GroceriesBill->Text);
  essentials.inputTransportationBill =
      Convert::ToInt32(TransportationBill->Text);
  essentials.inputChildcareBill = Convert::ToInt32(ChildcareBill->Text);
  essentials.inputPetsBill = Convert::ToInt32(PetsBill->Text);
  essentials.inputDebtsAndLoansBill = Convert::ToInt32(DebtsAndLoansBill->Text);
  essentials.inputOtherEssentials = Convert::ToInt32(OtherEssentials->Text);
  this->Hide();
}
