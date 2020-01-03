#include "pch.h"
#include "BillsWindow.h"

System::Void
BudgetCalculator::BillsWindow::BillSaveButton_Click(System::Object ^ sender,
                                                    System::EventArgs ^ e) {
  bills.inputElectrictyBill = Convert::ToInt32(ElectricityBill->Text);
  bills.inputGasBill = Convert::ToInt32(GasBill->Text);
  bills.inputHealthInsuranceBill = Convert::ToInt32(HealthInsuranceBill->Text);
  bills.inputInternetBill = Convert::ToInt32(InternetBill->Text);
  bills.inputOtherBill = Convert::ToInt32(OtherBill->Text);
  bills.inputPhoneBill = Convert::ToInt32(PhoneBill->Text);
  bills.inputRentBill = Convert::ToInt32(RentBill->Text);
  bills.inputWaterBill = Convert::ToInt32(WaterBill->Text);
  this->Hide();
}
