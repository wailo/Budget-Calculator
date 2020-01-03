#include "pch.h"
#include "OutputWindow.h"

void BudgetCalculator::OutputWindow::getVariables(
    int totalIncome, int totalSpendings, int totalEssentials, int totalBills,
    int totalRecreations, int totalSavings) {

  outputVariables.outputIncome = totalIncome;
  outputVariables.outputBills = totalBills;
  outputVariables.outputEssentials = totalEssentials;
  outputVariables.outputRecreations = totalRecreations;
  outputVariables.outputSavings = totalSavings;
  outputVariables.outputSpendings = totalSpendings;
}

void BudgetCalculator::OutputWindow::colorInput(
    int totalIncome, int totalSpendings, int totalEssentials, int totalBills,
    int totalRecreations, int totalSavings) {
  if (outputVariables.outputEssentials >
      ((outputVariables.outputIncome / 10) * 2.5)) {
    this->essentialSpending->ForeColor = System::Drawing::Color::Red;

  } else {
    this->essentialSpending->ForeColor = System::Drawing::Color::Green;
  }

  if (outputVariables.outputBills >
      ((outputVariables.outputIncome / 10) * 2.5)) {
    this->billsSpending->ForeColor = System::Drawing::Color::Red;

  } else {
    this->billsSpending->ForeColor = System::Drawing::Color::Green;
  }

  if (outputVariables.outputRecreations >
      ((outputVariables.outputIncome / 10) * 3)) {
    this->recreationsSpending->ForeColor = System::Drawing::Color::Red;

  } else {
    this->recreationsSpending->ForeColor = System::Drawing::Color::Green;
  }

  if (outputVariables.outputSavings >
      ((outputVariables.outputIncome / 10) * 2)) {
    this->savingsSpending->ForeColor = System::Drawing::Color::Red;

  } else {
    this->savingsSpending->ForeColor = System::Drawing::Color::Green;
  }
}

void BudgetCalculator::OutputWindow::valueInput(
    int totalIncome, int totalSpendings, int totalEssentials, int totalBills,
    int totalRecreations, int totalSavings) {
  this->essentialAllowance->Text =
      Convert::ToString((outputVariables.outputIncome / 10) * 2.5);
  this->billsAllowance->Text =
      Convert::ToString((outputVariables.outputIncome / 10) * 2.5);
  this->recreationAllowance->Text =
      Convert::ToString((outputVariables.outputIncome / 10) * 3);
  this->savingsAllowance->Text =
      Convert::ToString((outputVariables.outputIncome / 10) * 2);
  this->totalAllowance->Text = Convert::ToString(outputVariables.outputIncome);
  this->essentialSpending->Text =
      Convert::ToString(outputVariables.outputEssentials);
  this->billsSpending->Text = Convert::ToString(outputVariables.outputBills);
  this->recreationsSpending->Text =
      Convert::ToString(outputVariables.outputRecreations);
  this->savingsSpending->Text =
      Convert::ToString(outputVariables.outputSavings);
  this->totalSpending->Text =
      Convert::ToString(outputVariables.outputSpendings);
}
