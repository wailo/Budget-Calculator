#include "pch.h"
#include "MainWindow.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

    void
    main() {
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        BudgetCalculator::MainWindow form;
        Application::Run(% form);
    }
