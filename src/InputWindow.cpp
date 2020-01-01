#include "pch.h"
#include "InputWindow.h"

int BudgetCalculator::InputWindow::getTotalEssentials() {

  return essentialswindow->essentials.inputChildcareBill +
         essentialswindow->essentials.inputDebtsAndLoansBill +
         essentialswindow->essentials.inputGroceriesBill +
         essentialswindow->essentials.inputOtherEssentials +
         essentialswindow->essentials.inputPetsBill +
         essentialswindow->essentials.inputTransportationBill;
}

int BudgetCalculator::InputWindow::getTotalBills() {
  return billswindow->bills.inputElectrictyBill +
         billswindow->bills.inputGasBill +
         billswindow->bills.inputHealthInsuranceBill +
         billswindow->bills.inputInternetBill +
         billswindow->bills.inputInternetBill +
         billswindow->bills.inputOtherBill + billswindow->bills.inputPhoneBill +
         billswindow->bills.inputRentBill + billswindow->bills.inputWaterBill;
}

int BudgetCalculator::InputWindow::getTotalRecreations() {
  return recreatiosnwindow->recreations.inputEatOutBill +
         recreatiosnwindow->recreations.inputGiftsBill +
         recreatiosnwindow->recreations.inputGymBill +
         recreatiosnwindow->recreations.inputHolidaysBill +
         recreatiosnwindow->recreations.inputOtherRecreations +
         recreatiosnwindow->recreations.inputTicketsBill;
}

int BudgetCalculator::InputWindow::getTotalSavings() {

  return savingswindow->savings.inputCarRepairsBill +
         savingswindow->savings.inputEmergencyBill +
         savingswindow->savings.inputHomeRepairsBill +
         savingswindow->savings.inputOtherSavings;
}

int BudgetCalculator::InputWindow::getTotalSpendings(int totalEssentials,
                                                     int totalBills,
                                                     int totalRecreations,
                                                     int totalSavings) {
  totalEssentials = getTotalEssentials();
  totalBills = getTotalBills();
  totalRecreations = getTotalRecreations();
  totalSavings = getTotalSavings();
  return totalEssentials + totalBills + totalRecreations + totalSavings;
}
