#include "../include/pch.h"
#include "../include/InputWindow.h"


int BudgetCalculator::InputWindow::getTotalEssentials(
    int inputChildcareBill, int inputDebtsAndLoansBill, int inputGroceriesBill,
    int inputTransportationBill, int inputPetsBill, int inputOtherEssentials) {
  totalEssentials =
      (inputChildcareBill + inputDebtsAndLoansBill + inputGroceriesBill +
       inputTransportationBill + inputPetsBill + inputOtherEssentials);
  return totalEssentials;
}

int BudgetCalculator::InputWindow::getTotalBills(
    int inputElectrictyBill, int inputWaterBill, int inputGasBill,
    int inputRentBill, int inputInternetBill, int inputPhoneBill,
    int inputHealthInsuranceBill, int inputOtherBill) {
  totalBills = (inputElectrictyBill + inputWaterBill + inputGasBill +
                inputRentBill + inputInternetBill + inputPhoneBill +
                inputHealthInsuranceBill + inputOtherBill);
  return totalBills;
}

int BudgetCalculator::InputWindow::getTotalRecreations(
    int inputEatOutBill, int inputGymBill, int inputTicketsBill,
    int inputGiftsBill, int inputHolidaysBill, int inputOtherRecreations) {
  totalRecreations =
      (inputEatOutBill + inputGymBill + inputTicketsBill + inputGiftsBill +
       inputHolidaysBill + inputOtherRecreations);
  return totalRecreations;
}

int BudgetCalculator::InputWindow::getTotalSavings(int inputEmergencyBill,
                                                   int inputHomeRepairsBill,
                                                   int inputCarRepairsBill,
                                                   int inputOtherSavings) {

  totalSavings = (inputEmergencyBill + inputHomeRepairsBill +
                  inputCarRepairsBill + inputOtherSavings);
  return totalSavings;
}

int BudgetCalculator::InputWindow::getTotalSpendings(int totalEssentials,
                                                     int totalBills,
                                                     int totalRecreations,
                                                     int totalSavings) {
  totalSpendings =
      (totalEssentials + totalBills + totalRecreations + totalSavings);
  return totalSpendings;
}
