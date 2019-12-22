#include "../include/pch.h"
#include "../include/OutputWindow.h"
#include <iostream>


void BudgetCalculator::OutputWindow::colorInput() {
    if (totalEssentials > ((totalIncome / 10) * 2.5)) {
        this->essentialSpending->ForeColor = System::Drawing::Color::Red;

    }
    else {
        this->essentialSpending->ForeColor = System::Drawing::Color::Green;
    }

    if (totalBills > ((totalIncome / 10) * 2.5)) {
        this->billsSpending->ForeColor = System::Drawing::Color::Red;

    }
    else {
        this->billsSpending->ForeColor = System::Drawing::Color::Green;
    }

    if (totalRecreations > ((totalIncome / 10) * 3)) {
        this->recreationsSpending->ForeColor = System::Drawing::Color::Red;

    }
    else {
        this->recreationsSpending->ForeColor = System::Drawing::Color::Green;
    }

    if (totalSavings > ((totalIncome / 10) * 2)) {
        this->savingsSpending->ForeColor = System::Drawing::Color::Red;

    }
    else {
        this->savingsSpending->ForeColor = System::Drawing::Color::Green;
    }
}

void BudgetCalculator::OutputWindow::valueInput()
{
    this->essentialAllowance->Text = Convert::ToString((totalIncome / 10) * 2.5);
    this->billsAllowance->Text = Convert::ToString((totalIncome / 10) * 2.5);
    this->recreationAllowance->Text = Convert::ToString((totalIncome / 10) * 3);
    this->savingsAllowance->Text = Convert::ToString((totalIncome / 10) * 2);
    this->totalAllowance->Text = Convert::ToString(totalIncome);
    this->essentialSpending->Text = Convert::ToString(totalEssentials);
    this->billsSpending->Text = Convert::ToString(totalBills);
    this->recreationsSpending->Text = Convert::ToString(totalRecreations);
    this->savingsSpending->Text = Convert::ToString(totalSavings);
    this->totalSpending->Text = Convert::ToString(totalSpendings);
}