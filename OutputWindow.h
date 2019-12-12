
#pragma once

int extern inputChildcareBill;
int extern inputDebtsAndLoansBill;
int extern inputGroceriesBill;
int extern inputTransportationBill;
int extern inputPetsBill;
int extern inputOtherEssentials;

int extern inputElectrictyBill;
int extern inputWaterBill;
int extern inputGasBill;
int extern inputRentBill;
int extern inputInternetBill;
int extern inputPhoneBill;
int extern inputHealthInsuranceBill;
int extern inputOtherBill;

int extern inputEatOutBill;
int extern inputGymBill;
int extern inputTicketsBill;
int extern inputGiftsBill;
int extern inputHolidaysBill;
int extern inputOtherRecreations;

int extern inputEmergencyBill;
int extern inputHomeRepairsBill;
int extern inputCarRepairsBill;
int extern inputOtherSavings;

int extern totalIncome;
int extern totalSpendings;
int extern totalEssentials;
int extern totalBills;
int extern totalRecreations;
int extern totalSavings;


namespace BudgetCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OutputWindow
	/// </summary>
	public ref class OutputWindow : public System::Windows::Forms::Form
	{
	public:
		OutputWindow(void)
		{
			InitializeComponent();
			colorinput();
			this->essentialAllowance->Text = Convert::ToString((totalIncome/10)*2.5);
			this->billsAllowance->Text = Convert::ToString((totalIncome / 10) * 2.5);
			this->recreationAllowance->Text = Convert::ToString((totalIncome / 10) * 3);
			this->savingsAllowance->Text = Convert::ToString((totalIncome / 10) * 2);
			this->totalAllowance->Text = Convert::ToString(totalIncome);
			this->essentialSpending->Text = Convert::ToString(totalEssentials);
			this->billsSpending->Text = Convert::ToString(totalBills);
			this->recreationsSpending->Text = Convert::ToString(totalRecreations);
			this->savingsSpending->Text = Convert::ToString(totalSavings);
			this->totalSpending->Text = Convert::ToString(totalSpendings);

			this->pieChart->Series["budget"]->Points->AddXY("Essentials", totalEssentials);
			this->pieChart->Series["budget"]->Points->AddXY("Bills", totalBills);
			this->pieChart->Series["budget"]->Points->AddXY("Recreations", totalRecreations);
			this->pieChart->Series["budget"]->Points->AddXY("Savings", totalSavings);

			this->colChart->Series["Essentials"]->Points->AddXY("Essentials", totalEssentials);
			this->colChart->Series["Bills"]->Points->AddXY("Bills", totalBills);
			this->colChart->Series["Recreations"]->Points->AddXY("Recreations", totalRecreations);
			this->colChart->Series["Savings"]->Points->AddXY("Savings", totalSavings);
			//
			//TODO: Add the constructor code here
			//
		}


	void colorinput()
	{
		if (totalEssentials > ((totalIncome / 10) * 2.5))
		{
			this->essentialSpending->ForeColor = System::Drawing::Color::Red;

		}
		else
		{
			this->essentialSpending->ForeColor = System::Drawing::Color::Green;
		}

		if (totalBills > ((totalIncome / 10) * 2.5))
		{
			this->billsSpending->ForeColor = System::Drawing::Color::Red;

		}
		else
		{
			this->billsSpending->ForeColor = System::Drawing::Color::Green;
		}

		if (totalRecreations > ((totalIncome / 10) * 3))
		{
			this->recreationsSpending->ForeColor = System::Drawing::Color::Red;

		}
		else
		{
			this->recreationsSpending->ForeColor = System::Drawing::Color::Green;
		}

		if (totalSavings > ((totalIncome / 10) * 2))
		{
			this->savingsSpending->ForeColor = System::Drawing::Color::Red;

		}
		else
		{
			this->savingsSpending->ForeColor = System::Drawing::Color::Green;
		}

	}




	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ recreationAllowance;

	private: System::Windows::Forms::Label^ savingsAllowance;

	private: System::Windows::Forms::Label^ billsAllowance;

	private: System::Windows::Forms::Label^ essentialAllowance;


	private: System::Windows::Forms::Label^ recreationsSpending;

	private: System::Windows::Forms::Label^ savingsSpending;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ AnalyzeButton;
	private: System::Windows::Forms::Label^ essentialSpending;

	private: System::Windows::Forms::Label^ billsSpending;
	private: System::Windows::Forms::Label^ totalSpending;
	private: System::Windows::Forms::Label^ totalAllowance;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ colChart;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieChart;




	private: System::Windows::Forms::Button^ button1;

	public:
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OutputWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->totalAllowance = (gcnew System::Windows::Forms::Label());
			this->essentialSpending = (gcnew System::Windows::Forms::Label());
			this->billsSpending = (gcnew System::Windows::Forms::Label());
			this->totalSpending = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->recreationAllowance = (gcnew System::Windows::Forms::Label());
			this->savingsAllowance = (gcnew System::Windows::Forms::Label());
			this->billsAllowance = (gcnew System::Windows::Forms::Label());
			this->essentialAllowance = (gcnew System::Windows::Forms::Label());
			this->recreationsSpending = (gcnew System::Windows::Forms::Label());
			this->savingsSpending = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AnalyzeButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->colChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pieChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->colChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChart))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(837, 78);
			this->panel1->TabIndex = 48;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OutputWindow::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label1->Location = System::Drawing::Point(323, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Results";
			this->label1->Click += gcnew System::EventHandler(this, &OutputWindow::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Controls->Add(this->totalAllowance);
			this->panel2->Controls->Add(this->essentialSpending);
			this->panel2->Controls->Add(this->billsSpending);
			this->panel2->Controls->Add(this->totalSpending);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->recreationAllowance);
			this->panel2->Controls->Add(this->savingsAllowance);
			this->panel2->Controls->Add(this->billsAllowance);
			this->panel2->Controls->Add(this->essentialAllowance);
			this->panel2->Controls->Add(this->recreationsSpending);
			this->panel2->Controls->Add(this->savingsSpending);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(-12, 78);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(861, 286);
			this->panel2->TabIndex = 49;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OutputWindow::panel2_Paint);
			// 
			// totalAllowance
			// 
			this->totalAllowance->AutoSize = true;
			this->totalAllowance->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalAllowance->Location = System::Drawing::Point(698, 244);
			this->totalAllowance->Name = L"totalAllowance";
			this->totalAllowance->Size = System::Drawing::Size(31, 36);
			this->totalAllowance->TabIndex = 20;
			this->totalAllowance->Text = L"0";
			this->totalAllowance->Click += gcnew System::EventHandler(this, &OutputWindow::label9_Click_1);
			// 
			// essentialSpending
			// 
			this->essentialSpending->AutoSize = true;
			this->essentialSpending->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->essentialSpending->ForeColor = System::Drawing::Color::Black;
			this->essentialSpending->Location = System::Drawing::Point(386, 64);
			this->essentialSpending->Name = L"essentialSpending";
			this->essentialSpending->Size = System::Drawing::Size(20, 23);
			this->essentialSpending->TabIndex = 19;
			this->essentialSpending->Text = L"0";
			this->essentialSpending->Click += gcnew System::EventHandler(this, &OutputWindow::essentialSpending_Click);
			// 
			// billsSpending
			// 
			this->billsSpending->AutoSize = true;
			this->billsSpending->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billsSpending->ForeColor = System::Drawing::Color::Black;
			this->billsSpending->Location = System::Drawing::Point(386, 109);
			this->billsSpending->Name = L"billsSpending";
			this->billsSpending->Size = System::Drawing::Size(20, 23);
			this->billsSpending->TabIndex = 18;
			this->billsSpending->Text = L"0";
			// 
			// totalSpending
			// 
			this->totalSpending->AutoSize = true;
			this->totalSpending->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalSpending->Location = System::Drawing::Point(381, 244);
			this->totalSpending->Name = L"totalSpending";
			this->totalSpending->Size = System::Drawing::Size(31, 36);
			this->totalSpending->TabIndex = 16;
			this->totalSpending->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(46, 244);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 36);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Total";
			// 
			// recreationAllowance
			// 
			this->recreationAllowance->AutoSize = true;
			this->recreationAllowance->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->recreationAllowance->Location = System::Drawing::Point(703, 199);
			this->recreationAllowance->Name = L"recreationAllowance";
			this->recreationAllowance->Size = System::Drawing::Size(20, 23);
			this->recreationAllowance->TabIndex = 14;
			this->recreationAllowance->Text = L"0";
			// 
			// savingsAllowance
			// 
			this->savingsAllowance->AutoSize = true;
			this->savingsAllowance->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savingsAllowance->ForeColor = System::Drawing::Color::Black;
			this->savingsAllowance->Location = System::Drawing::Point(703, 154);
			this->savingsAllowance->Name = L"savingsAllowance";
			this->savingsAllowance->Size = System::Drawing::Size(20, 23);
			this->savingsAllowance->TabIndex = 13;
			this->savingsAllowance->Text = L"0";
			this->savingsAllowance->Click += gcnew System::EventHandler(this, &OutputWindow::savingsAllowance_Click);
			// 
			// billsAllowance
			// 
			this->billsAllowance->AutoSize = true;
			this->billsAllowance->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billsAllowance->Location = System::Drawing::Point(703, 109);
			this->billsAllowance->Name = L"billsAllowance";
			this->billsAllowance->Size = System::Drawing::Size(20, 23);
			this->billsAllowance->TabIndex = 12;
			this->billsAllowance->Text = L"0";
			// 
			// essentialAllowance
			// 
			this->essentialAllowance->AutoSize = true;
			this->essentialAllowance->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->essentialAllowance->Location = System::Drawing::Point(703, 64);
			this->essentialAllowance->Name = L"essentialAllowance";
			this->essentialAllowance->Size = System::Drawing::Size(20, 23);
			this->essentialAllowance->TabIndex = 11;
			this->essentialAllowance->Text = L"0";
			// 
			// recreationsSpending
			// 
			this->recreationsSpending->AutoSize = true;
			this->recreationsSpending->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->recreationsSpending->Location = System::Drawing::Point(386, 199);
			this->recreationsSpending->Name = L"recreationsSpending";
			this->recreationsSpending->Size = System::Drawing::Size(20, 23);
			this->recreationsSpending->TabIndex = 10;
			this->recreationsSpending->Text = L"0";
			// 
			// savingsSpending
			// 
			this->savingsSpending->AutoSize = true;
			this->savingsSpending->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savingsSpending->ForeColor = System::Drawing::Color::Black;
			this->savingsSpending->Location = System::Drawing::Point(386, 154);
			this->savingsSpending->Name = L"savingsSpending";
			this->savingsSpending->Size = System::Drawing::Size(20, 23);
			this->savingsSpending->TabIndex = 9;
			this->savingsSpending->Text = L"0";
			this->savingsSpending->Click += gcnew System::EventHandler(this, &OutputWindow::label11_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(644, 6);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 36);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Allowance";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(332, 6);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 36);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Spending";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 23);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Recreations";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(48, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 23);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Savings";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 23);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Bills";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Essentials";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 36);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Category";
			this->label2->Click += gcnew System::EventHandler(this, &OutputWindow::label2_Click);
			// 
			// AnalyzeButton
			// 
			this->AnalyzeButton->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->AnalyzeButton->Location = System::Drawing::Point(0, 663);
			this->AnalyzeButton->Name = L"AnalyzeButton";
			this->AnalyzeButton->Size = System::Drawing::Size(418, 86);
			this->AnalyzeButton->TabIndex = 50;
			this->AnalyzeButton->Text = L"Adjust Budget";
			this->AnalyzeButton->UseVisualStyleBackColor = true;
			this->AnalyzeButton->Click += gcnew System::EventHandler(this, &OutputWindow::AnalyzeButton_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(419, 663);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(418, 86);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OutputWindow::button1_Click);
			// 
			// colChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->colChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->colChart->Legends->Add(legend1);
			this->colChart->Location = System::Drawing::Point(0, 364);
			this->colChart->Name = L"colChart";
			series1->ChartArea = L"ChartArea1";
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->Name = L"Essentials";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Bills";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Recreations";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Savings";
			this->colChart->Series->Add(series1);
			this->colChart->Series->Add(series2);
			this->colChart->Series->Add(series3);
			this->colChart->Series->Add(series4);
			this->colChart->Size = System::Drawing::Size(344, 300);
			this->colChart->TabIndex = 52;
			this->colChart->Text = L"colChart";
			this->colChart->Click += gcnew System::EventHandler(this, &OutputWindow::chart1_Click_1);
			// 
			// pieChart
			// 
			chartArea2->Name = L"ChartArea1";
			this->pieChart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->pieChart->Legends->Add(legend2);
			this->pieChart->Location = System::Drawing::Point(493, 364);
			this->pieChart->Name = L"pieChart";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series5->Legend = L"Legend1";
			series5->Name = L"budget";
			this->pieChart->Series->Add(series5);
			this->pieChart->Size = System::Drawing::Size(344, 300);
			this->pieChart->TabIndex = 53;
			this->pieChart->Text = L"chart2";
			title1->Name = L"Title1";
			this->pieChart->Titles->Add(title1);
			this->pieChart->Click += gcnew System::EventHandler(this, &OutputWindow::chart2_Click);
			// 
			// OutputWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 748);
			this->Controls->Add(this->pieChart);
			this->Controls->Add(this->colChart);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AnalyzeButton);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"OutputWindow";
			this->Text = L"OutputWindow";
			this->Load += gcnew System::EventHandler(this, &OutputWindow::OutputWindow_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->colChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChart))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AnalyzeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OutputWindow_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void essentialSpending_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void savingsAllowance_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
};
}
