#include "RecreationsWindow.h"
#include "pch.h"

System::Void BudgetCalculator::RecreationsWindow::RecreationsSaveButton_Click(
    System::Object ^ sender, System::EventArgs ^ e) {
  recreations.inputEatOutBill = Convert::ToInt32(EatOutBill->Text);
  recreations.inputGymBill = Convert::ToInt32(GymBill->Text);
  recreations.inputTicketsBill = Convert::ToInt32(TicketsBill->Text);
  recreations.inputGiftsBill = Convert::ToInt32(GiftsBill->Text);
  recreations.inputHolidaysBill = Convert::ToInt32(HolidaysBill->Text);
  recreations.inputOtherRecreations = Convert::ToInt32(OtherRecreations->Text);
  this->Hide();
}
