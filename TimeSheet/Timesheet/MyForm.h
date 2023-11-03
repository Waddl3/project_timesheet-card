#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainTitleLabel;
	protected:
	private: System::Windows::Forms::Label^ morningLabel;
	private: System::Windows::Forms::Label^ lunchOutLabel;
	private: System::Windows::Forms::Label^ eveningOutLabel;
	private: System::Windows::Forms::Label^ lunchInLabel;
	private: System::Windows::Forms::TextBox^ mornigTextBox;
	private: System::Windows::Forms::TextBox^ lunchOutTextBox;
	private: System::Windows::Forms::TextBox^ lunchInTextBox;
	private: System::Windows::Forms::TextBox^ eveningTextBox;
	private: System::Windows::Forms::Label^ employeeNameLabel;
	private: System::Windows::Forms::TextBox^ employeeNameTextBox;
	private: System::Windows::Forms::Button^ punchButton;
	private: System::Windows::Forms::Label^ dayOneLabel;
	private: System::Windows::Forms::Label^ dayTwoLabel;
	private: System::Windows::Forms::TextBox^ dayOneTextBox;
	private: System::Windows::Forms::TextBox^ dayTwoTextBox;
	private: System::Windows::Forms::Label^ totalHoursLabel;
	private: System::Windows::Forms::TextBox^ totalHoursTextBox;
	private: System::Windows::Forms::Label^ wageLabel;
	private: System::Windows::Forms::TextBox^ wageTextBox;

	private: System::Windows::Forms::Label^ salaryLabel;
	private: System::Windows::Forms::TextBox^ salaryTextBox;
	private: System::Windows::Forms::TextBox^ dayTwoEveningOutTextBox;
	private: System::Windows::Forms::TextBox^ dayTwoLunchInTextBox;
	private: System::Windows::Forms::TextBox^ dayTwoLunchOutTextBox;
	private: System::Windows::Forms::TextBox^ dayTwoMorningTextBox;
	private: System::Windows::Forms::Label^ dayTwoEveningOutLabel;
	private: System::Windows::Forms::Label^ dayTwoLunchInLabel;
	private: System::Windows::Forms::Label^ dayTwoLunchOutLabel;
	private: System::Windows::Forms::Label^ dayTwoMorningLabel;
	private: System::Windows::Forms::Label^ dayOneLabelSet;
	private: System::Windows::Forms::Label^ dayTwoLabelSet;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainTitleLabel = (gcnew System::Windows::Forms::Label());
			this->morningLabel = (gcnew System::Windows::Forms::Label());
			this->lunchOutLabel = (gcnew System::Windows::Forms::Label());
			this->eveningOutLabel = (gcnew System::Windows::Forms::Label());
			this->lunchInLabel = (gcnew System::Windows::Forms::Label());
			this->mornigTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lunchOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lunchInTextBox = (gcnew System::Windows::Forms::TextBox());
			this->eveningTextBox = (gcnew System::Windows::Forms::TextBox());
			this->employeeNameLabel = (gcnew System::Windows::Forms::Label());
			this->employeeNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->punchButton = (gcnew System::Windows::Forms::Button());
			this->dayOneLabel = (gcnew System::Windows::Forms::Label());
			this->dayTwoLabel = (gcnew System::Windows::Forms::Label());
			this->dayOneTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dayTwoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->totalHoursLabel = (gcnew System::Windows::Forms::Label());
			this->totalHoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->wageLabel = (gcnew System::Windows::Forms::Label());
			this->wageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->salaryLabel = (gcnew System::Windows::Forms::Label());
			this->salaryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dayTwoEveningOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dayTwoLunchInTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dayTwoLunchOutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dayTwoMorningTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dayTwoEveningOutLabel = (gcnew System::Windows::Forms::Label());
			this->dayTwoLunchInLabel = (gcnew System::Windows::Forms::Label());
			this->dayTwoLunchOutLabel = (gcnew System::Windows::Forms::Label());
			this->dayTwoMorningLabel = (gcnew System::Windows::Forms::Label());
			this->dayOneLabelSet = (gcnew System::Windows::Forms::Label());
			this->dayTwoLabelSet = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mainTitleLabel
			// 
			this->mainTitleLabel->AutoSize = true;
			this->mainTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTitleLabel->Location = System::Drawing::Point(315, 9);
			this->mainTitleLabel->Name = L"mainTitleLabel";
			this->mainTitleLabel->Size = System::Drawing::Size(189, 42);
			this->mainTitleLabel->TabIndex = 0;
			this->mainTitleLabel->Text = L"TimeCard";
			// 
			// morningLabel
			// 
			this->morningLabel->AutoSize = true;
			this->morningLabel->Location = System::Drawing::Point(76, 141);
			this->morningLabel->Name = L"morningLabel";
			this->morningLabel->Size = System::Drawing::Size(60, 13);
			this->morningLabel->TabIndex = 1;
			this->morningLabel->Text = L"Morning In:";
			// 
			// lunchOutLabel
			// 
			this->lunchOutLabel->AutoSize = true;
			this->lunchOutLabel->Location = System::Drawing::Point(76, 177);
			this->lunchOutLabel->Name = L"lunchOutLabel";
			this->lunchOutLabel->Size = System::Drawing::Size(60, 13);
			this->lunchOutLabel->TabIndex = 2;
			this->lunchOutLabel->Text = L"Lunch Out:";
			// 
			// eveningOutLabel
			// 
			this->eveningOutLabel->AutoSize = true;
			this->eveningOutLabel->Location = System::Drawing::Point(67, 254);
			this->eveningOutLabel->Name = L"eveningOutLabel";
			this->eveningOutLabel->Size = System::Drawing::Size(69, 13);
			this->eveningOutLabel->TabIndex = 4;
			this->eveningOutLabel->Text = L"Evening Out:";
			// 
			// lunchInLabel
			// 
			this->lunchInLabel->AutoSize = true;
			this->lunchInLabel->Location = System::Drawing::Point(84, 216);
			this->lunchInLabel->Name = L"lunchInLabel";
			this->lunchInLabel->Size = System::Drawing::Size(52, 13);
			this->lunchInLabel->TabIndex = 3;
			this->lunchInLabel->Text = L"Lunch In:";
			// 
			// mornigTextBox
			// 
			this->mornigTextBox->Location = System::Drawing::Point(142, 138);
			this->mornigTextBox->Name = L"mornigTextBox";
			this->mornigTextBox->Size = System::Drawing::Size(100, 20);
			this->mornigTextBox->TabIndex = 5;
			this->mornigTextBox->Text = L"9:00 AM";
			// 
			// lunchOutTextBox
			// 
			this->lunchOutTextBox->Location = System::Drawing::Point(142, 174);
			this->lunchOutTextBox->Name = L"lunchOutTextBox";
			this->lunchOutTextBox->Size = System::Drawing::Size(100, 20);
			this->lunchOutTextBox->TabIndex = 6;
			this->lunchOutTextBox->Text = L"1:00 PM";
			// 
			// lunchInTextBox
			// 
			this->lunchInTextBox->Location = System::Drawing::Point(142, 213);
			this->lunchInTextBox->Name = L"lunchInTextBox";
			this->lunchInTextBox->Size = System::Drawing::Size(100, 20);
			this->lunchInTextBox->TabIndex = 7;
			this->lunchInTextBox->Text = L"1:30 PM";
			// 
			// eveningTextBox
			// 
			this->eveningTextBox->Location = System::Drawing::Point(142, 251);
			this->eveningTextBox->Name = L"eveningTextBox";
			this->eveningTextBox->Size = System::Drawing::Size(100, 20);
			this->eveningTextBox->TabIndex = 8;
			this->eveningTextBox->Text = L"5:30 PM";
			// 
			// employeeNameLabel
			// 
			this->employeeNameLabel->AutoSize = true;
			this->employeeNameLabel->Location = System::Drawing::Point(319, 72);
			this->employeeNameLabel->Name = L"employeeNameLabel";
			this->employeeNameLabel->Size = System::Drawing::Size(90, 13);
			this->employeeNameLabel->TabIndex = 9;
			this->employeeNameLabel->Text = L"Employee Name: ";
			// 
			// employeeNameTextBox
			// 
			this->employeeNameTextBox->Location = System::Drawing::Point(415, 69);
			this->employeeNameTextBox->Name = L"employeeNameTextBox";
			this->employeeNameTextBox->Size = System::Drawing::Size(132, 20);
			this->employeeNameTextBox->TabIndex = 10;
			this->employeeNameTextBox->Text = L"Jesus Rodriguez-Luna";
			// 
			// punchButton
			// 
			this->punchButton->Location = System::Drawing::Point(75, 310);
			this->punchButton->Name = L"punchButton";
			this->punchButton->Size = System::Drawing::Size(75, 23);
			this->punchButton->TabIndex = 11;
			this->punchButton->Text = L"Punch!";
			this->punchButton->UseVisualStyleBackColor = true;
			this->punchButton->Click += gcnew System::EventHandler(this, &MyForm::punchButton_Click);
			// 
			// dayOneLabel
			// 
			this->dayOneLabel->AutoSize = true;
			this->dayOneLabel->Location = System::Drawing::Point(637, 124);
			this->dayOneLabel->Name = L"dayOneLabel";
			this->dayOneLabel->Size = System::Drawing::Size(41, 13);
			this->dayOneLabel->TabIndex = 12;
			this->dayOneLabel->Text = L"Day 1: ";
			// 
			// dayTwoLabel
			// 
			this->dayTwoLabel->AutoSize = true;
			this->dayTwoLabel->Location = System::Drawing::Point(637, 156);
			this->dayTwoLabel->Name = L"dayTwoLabel";
			this->dayTwoLabel->Size = System::Drawing::Size(41, 13);
			this->dayTwoLabel->TabIndex = 13;
			this->dayTwoLabel->Text = L"Day 2: ";
			// 
			// dayOneTextBox
			// 
			this->dayOneTextBox->Location = System::Drawing::Point(684, 121);
			this->dayOneTextBox->Name = L"dayOneTextBox";
			this->dayOneTextBox->ReadOnly = true;
			this->dayOneTextBox->Size = System::Drawing::Size(100, 20);
			this->dayOneTextBox->TabIndex = 14;
			// 
			// dayTwoTextBox
			// 
			this->dayTwoTextBox->Location = System::Drawing::Point(684, 156);
			this->dayTwoTextBox->Name = L"dayTwoTextBox";
			this->dayTwoTextBox->ReadOnly = true;
			this->dayTwoTextBox->Size = System::Drawing::Size(100, 20);
			this->dayTwoTextBox->TabIndex = 15;
			// 
			// totalHoursLabel
			// 
			this->totalHoursLabel->AutoSize = true;
			this->totalHoursLabel->Location = System::Drawing::Point(577, 214);
			this->totalHoursLabel->Name = L"totalHoursLabel";
			this->totalHoursLabel->Size = System::Drawing::Size(101, 13);
			this->totalHoursLabel->TabIndex = 16;
			this->totalHoursLabel->Text = L"Total hours (Week):";
			// 
			// totalHoursTextBox
			// 
			this->totalHoursTextBox->Location = System::Drawing::Point(684, 211);
			this->totalHoursTextBox->Name = L"totalHoursTextBox";
			this->totalHoursTextBox->ReadOnly = true;
			this->totalHoursTextBox->Size = System::Drawing::Size(100, 20);
			this->totalHoursTextBox->TabIndex = 17;
			// 
			// wageLabel
			// 
			this->wageLabel->AutoSize = true;
			this->wageLabel->Location = System::Drawing::Point(639, 238);
			this->wageLabel->Name = L"wageLabel";
			this->wageLabel->Size = System::Drawing::Size(39, 13);
			this->wageLabel->TabIndex = 18;
			this->wageLabel->Text = L"Wage:";
			// 
			// wageTextBox
			// 
			this->wageTextBox->Location = System::Drawing::Point(684, 237);
			this->wageTextBox->Name = L"wageTextBox";
			this->wageTextBox->Size = System::Drawing::Size(100, 20);
			this->wageTextBox->TabIndex = 19;
			this->wageTextBox->Text = L"17";
			// 
			// salaryLabel
			// 
			this->salaryLabel->AutoSize = true;
			this->salaryLabel->Location = System::Drawing::Point(612, 266);
			this->salaryLabel->Name = L"salaryLabel";
			this->salaryLabel->Size = System::Drawing::Size(66, 13);
			this->salaryLabel->TabIndex = 20;
			this->salaryLabel->Text = L"Total Salary:";
			// 
			// salaryTextBox
			// 
			this->salaryTextBox->Location = System::Drawing::Point(684, 263);
			this->salaryTextBox->Name = L"salaryTextBox";
			this->salaryTextBox->ReadOnly = true;
			this->salaryTextBox->Size = System::Drawing::Size(100, 20);
			this->salaryTextBox->TabIndex = 21;
			// 
			// dayTwoEveningOutTextBox
			// 
			this->dayTwoEveningOutTextBox->Location = System::Drawing::Point(394, 251);
			this->dayTwoEveningOutTextBox->Name = L"dayTwoEveningOutTextBox";
			this->dayTwoEveningOutTextBox->Size = System::Drawing::Size(100, 20);
			this->dayTwoEveningOutTextBox->TabIndex = 29;
			this->dayTwoEveningOutTextBox->Text = L"1:00 PM";
			// 
			// dayTwoLunchInTextBox
			// 
			this->dayTwoLunchInTextBox->Location = System::Drawing::Point(395, 213);
			this->dayTwoLunchInTextBox->Name = L"dayTwoLunchInTextBox";
			this->dayTwoLunchInTextBox->Size = System::Drawing::Size(100, 20);
			this->dayTwoLunchInTextBox->TabIndex = 28;
			this->dayTwoLunchInTextBox->Text = L"0:00 AM";
			// 
			// dayTwoLunchOutTextBox
			// 
			this->dayTwoLunchOutTextBox->Location = System::Drawing::Point(394, 174);
			this->dayTwoLunchOutTextBox->Name = L"dayTwoLunchOutTextBox";
			this->dayTwoLunchOutTextBox->Size = System::Drawing::Size(100, 20);
			this->dayTwoLunchOutTextBox->TabIndex = 27;
			this->dayTwoLunchOutTextBox->Text = L"0:00 AM";
			// 
			// dayTwoMorningTextBox
			// 
			this->dayTwoMorningTextBox->Location = System::Drawing::Point(394, 138);
			this->dayTwoMorningTextBox->Name = L"dayTwoMorningTextBox";
			this->dayTwoMorningTextBox->Size = System::Drawing::Size(100, 20);
			this->dayTwoMorningTextBox->TabIndex = 26;
			this->dayTwoMorningTextBox->Text = L"9:00 AM";
			// 
			// dayTwoEveningOutLabel
			// 
			this->dayTwoEveningOutLabel->AutoSize = true;
			this->dayTwoEveningOutLabel->Location = System::Drawing::Point(319, 254);
			this->dayTwoEveningOutLabel->Name = L"dayTwoEveningOutLabel";
			this->dayTwoEveningOutLabel->Size = System::Drawing::Size(69, 13);
			this->dayTwoEveningOutLabel->TabIndex = 25;
			this->dayTwoEveningOutLabel->Text = L"Evening Out:";
			// 
			// dayTwoLunchInLabel
			// 
			this->dayTwoLunchInLabel->AutoSize = true;
			this->dayTwoLunchInLabel->Location = System::Drawing::Point(336, 216);
			this->dayTwoLunchInLabel->Name = L"dayTwoLunchInLabel";
			this->dayTwoLunchInLabel->Size = System::Drawing::Size(52, 13);
			this->dayTwoLunchInLabel->TabIndex = 24;
			this->dayTwoLunchInLabel->Text = L"Lunch In:";
			// 
			// dayTwoLunchOutLabel
			// 
			this->dayTwoLunchOutLabel->AutoSize = true;
			this->dayTwoLunchOutLabel->Location = System::Drawing::Point(328, 177);
			this->dayTwoLunchOutLabel->Name = L"dayTwoLunchOutLabel";
			this->dayTwoLunchOutLabel->Size = System::Drawing::Size(60, 13);
			this->dayTwoLunchOutLabel->TabIndex = 23;
			this->dayTwoLunchOutLabel->Text = L"Lunch Out:";
			// 
			// dayTwoMorningLabel
			// 
			this->dayTwoMorningLabel->AutoSize = true;
			this->dayTwoMorningLabel->Location = System::Drawing::Point(328, 141);
			this->dayTwoMorningLabel->Name = L"dayTwoMorningLabel";
			this->dayTwoMorningLabel->Size = System::Drawing::Size(60, 13);
			this->dayTwoMorningLabel->TabIndex = 22;
			this->dayTwoMorningLabel->Text = L"Morning In:";
			// 
			// dayOneLabelSet
			// 
			this->dayOneLabelSet->AutoSize = true;
			this->dayOneLabelSet->Location = System::Drawing::Point(139, 113);
			this->dayOneLabelSet->Name = L"dayOneLabelSet";
			this->dayOneLabelSet->Size = System::Drawing::Size(49, 13);
			this->dayOneLabelSet->TabIndex = 30;
			this->dayOneLabelSet->Text = L"Day One";
			// 
			// dayTwoLabelSet
			// 
			this->dayTwoLabelSet->AutoSize = true;
			this->dayTwoLabelSet->Location = System::Drawing::Point(391, 113);
			this->dayTwoLabelSet->Name = L"dayTwoLabelSet";
			this->dayTwoLabelSet->Size = System::Drawing::Size(50, 13);
			this->dayTwoLabelSet->TabIndex = 31;
			this->dayTwoLabelSet->Text = L"Day Two";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(852, 354);
			this->Controls->Add(this->dayTwoLabelSet);
			this->Controls->Add(this->dayOneLabelSet);
			this->Controls->Add(this->dayTwoEveningOutTextBox);
			this->Controls->Add(this->dayTwoLunchInTextBox);
			this->Controls->Add(this->dayTwoLunchOutTextBox);
			this->Controls->Add(this->dayTwoMorningTextBox);
			this->Controls->Add(this->dayTwoEveningOutLabel);
			this->Controls->Add(this->dayTwoLunchInLabel);
			this->Controls->Add(this->dayTwoLunchOutLabel);
			this->Controls->Add(this->dayTwoMorningLabel);
			this->Controls->Add(this->salaryTextBox);
			this->Controls->Add(this->salaryLabel);
			this->Controls->Add(this->wageTextBox);
			this->Controls->Add(this->wageLabel);
			this->Controls->Add(this->totalHoursTextBox);
			this->Controls->Add(this->totalHoursLabel);
			this->Controls->Add(this->dayTwoTextBox);
			this->Controls->Add(this->dayOneTextBox);
			this->Controls->Add(this->dayTwoLabel);
			this->Controls->Add(this->dayOneLabel);
			this->Controls->Add(this->punchButton);
			this->Controls->Add(this->employeeNameTextBox);
			this->Controls->Add(this->employeeNameLabel);
			this->Controls->Add(this->eveningTextBox);
			this->Controls->Add(this->lunchInTextBox);
			this->Controls->Add(this->lunchOutTextBox);
			this->Controls->Add(this->mornigTextBox);
			this->Controls->Add(this->eveningOutLabel);
			this->Controls->Add(this->lunchInLabel);
			this->Controls->Add(this->lunchOutLabel);
			this->Controls->Add(this->morningLabel);
			this->Controls->Add(this->mainTitleLabel);
			this->Name = L"MyForm";
			this->Text = L"TimeSheet";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void punchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double totalHoursDayOne;
			double salaryDayOne;
			double totalHoursDayTwo;
			double salaryDayTwo;
			double totalHours;
			double totalSalary;

			//day one calculation
			totalHoursDayOne = CalculateTotalHours(this->mornigTextBox->Text, this->lunchOutTextBox->Text,
				this->lunchInTextBox->Text, this->eveningTextBox->Text);

			//day one salary calculation
			salaryDayOne = CalculateSalary(totalHoursDayOne, Convert::ToDouble(this->wageTextBox->Text));

			//day two hours calculation
			totalHoursDayTwo = CalculateTotalHours(this->dayTwoMorningTextBox->Text, this->dayTwoLunchOutTextBox->Text,
				this->dayTwoLunchInTextBox->Text, this->dayTwoEveningOutTextBox->Text);

			//day two salary calculation
			salaryDayTwo = CalculateSalary(totalHoursDayTwo, Convert::ToDouble(this->wageTextBox->Text));


			totalHours = totalHoursDayOne + totalHoursDayTwo;	//total hours worked
			totalSalary = salaryDayOne + salaryDayTwo;			//total salary made

			//output for textBoxes
			this->dayOneTextBox->Text = totalHoursDayOne.ToString();
			this->dayTwoTextBox->Text = totalHoursDayTwo.ToString();
			this->totalHoursTextBox->Text = totalHours.ToString();
			this->salaryTextBox->Text = totalSalary.ToString("C");
		}
		catch (FormatException^) {
			MessageBox::Show("Invalid input format. Please enter a valid time in the format (hh:mm AM/PM).");
		}
		catch (NullReferenceException^) {
			MessageBox::Show("Null reference error. Please ensure all required fields are filled in.");
		}
		catch (...) {
			MessageBox::Show("Please ensure Day one, Day Two, Employee Name, and wage are fulfilled.");
		}
	}

		   // Calculate start time, lunch out, lunch in, and end time
		   //---> doing this will help clean my 'DRY' code
		   double CalculateTotalHours(String^ starting, String^ outLunch, String^ inLunch, String^ ending) {

			   DateTime startTime;
			   DateTime lunchOut;
			   DateTime lunchIn;
			   DateTime endTime;

			   startTime = Convert::ToDateTime(starting);	//morning in
			   lunchOut = Convert::ToDateTime(outLunch);	//lunch out
			   lunchIn = Convert::ToDateTime(inLunch);		//lunch in
			   endTime = Convert::ToDateTime(ending);		//evening out

			   TimeSpan timeBetweenStartAndLunchOut = lunchOut - startTime;		//total from start to lunch out
			   TimeSpan timeBetweenLunchInAndEnd = endTime - lunchIn;			//total from lunch in to end

			   //totalHours done
			   double totalHours = (timeBetweenStartAndLunchOut.TotalHours + timeBetweenLunchInAndEnd.TotalHours);
			   totalHours = Math::Round(totalHours, 2);		//decimal round

			   //return the amount of hours
			   return totalHours;
		   }

		   // calculateSalary method 
		   double CalculateSalary(double totalHours, double wage) {
			   double salary = totalHours * wage;
			   return salary;
		   }


	};
}
