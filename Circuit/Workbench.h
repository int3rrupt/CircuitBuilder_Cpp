#pragma once

#include "Voltage.h"
//#include "Current.h"
#include "Resistor.h"
#include "Node.h"
#include "Ground.h"
#include "Solution.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Circuit {

	/// <summary>
	/// Summary for Workbench
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Workbench : public System::Windows::Forms::Form
	{
	public:
		Workbench(void)
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
		~Workbench()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  outputLabel;
	private: System::Windows::Forms::GroupBox^  addResistorGroupBox;



	private: System::Windows::Forms::GroupBox^  addVoltageGroupBox;
	private: System::Windows::Forms::Label^  addVoltageNameLabel;

	private: System::Windows::Forms::Label^  addVoltageYLabel;

	private: System::Windows::Forms::Label^  addVoltageXLabel;
	private: System::Windows::Forms::Label^  addVoltageValueLabel;
	private: System::Windows::Forms::TextBox^  addVoltageNameTextBox;

	private: System::Windows::Forms::TextBox^  addVoltageYTextBox;

	private: System::Windows::Forms::TextBox^  addVoltageXTextBox;

	private: System::Windows::Forms::TextBox^  addVoltageValueTextBox;

	private: System::Windows::Forms::Button^  addVoltageButton;
	private: System::Windows::Forms::Label^  addResistorXLabel;
	private: System::Windows::Forms::Label^  addResistorNameLabel;

	private: System::Windows::Forms::Label^  addResistorValueLabel;
	private: System::Windows::Forms::Label^  addResistorYLabel;
	private: System::Windows::Forms::TextBox^  addResistorNameTextBox;

	private: System::Windows::Forms::TextBox^  addResistorYTextBox;

	private: System::Windows::Forms::TextBox^  addResistorXTextBox;

	private: System::Windows::Forms::TextBox^  addResistorValueTextBox;
	private: System::Windows::Forms::Button^  addResistorButton;

	private: System::Windows::Forms::GroupBox^  connectGroupBox;
	private: System::Windows::Forms::ComboBox^  part1ComboBox;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;

	private: System::Windows::Forms::RadioButton^  verticalResistorRadioButton;
	private: System::Windows::Forms::RadioButton^  horizontalResistorRadioButton;
	private: System::Windows::Forms::RadioButton^  nodeRadioButton2;

	private: System::Windows::Forms::RadioButton^  nodeRadioButton1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::RadioButton^  nodeRadioButton4;

	private: System::Windows::Forms::RadioButton^  nodeRadioButton3;
	private: System::Windows::Forms::ComboBox^  part2ComboBox;
	private: System::Windows::Forms::Button^  connectButton;

	private: System::Windows::Forms::Label^  outputTitleLabel;
	private: System::Windows::Forms::Button^  solveButton;
	private: System::Windows::Forms::GroupBox^  addNodeGroupBox;
	private: System::Windows::Forms::Label^  addNodeXLabel;
	private: System::Windows::Forms::Label^  addNodeNameLabel;



	private: System::Windows::Forms::Label^  addNodeYLabel;

	private: System::Windows::Forms::TextBox^  addNodeNameTextBox;

	private: System::Windows::Forms::TextBox^  addNodeYTextBox;

	private: System::Windows::Forms::TextBox^  addNodeXTextBox;

	private: System::Windows::Forms::Button^  addNodeButton;
	private: System::Windows::Forms::RadioButton^  addGroundNodeRadioButton;
	private: System::Windows::Forms::RadioButton^  addNodeRadioButton;
	private: System::Windows::Forms::Label^  solutionLabel;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  solutionOutputLabel;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Workbench::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->addNodeGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->addNodeButton = (gcnew System::Windows::Forms::Button());
			this->addGroundNodeRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->addNodeRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->addNodeXLabel = (gcnew System::Windows::Forms::Label());
			this->addNodeNameLabel = (gcnew System::Windows::Forms::Label());
			this->addNodeYLabel = (gcnew System::Windows::Forms::Label());
			this->addNodeNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addNodeYTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addNodeXTextBox = (gcnew System::Windows::Forms::TextBox());
			this->solveButton = (gcnew System::Windows::Forms::Button());
			this->addVoltageGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->addVoltageButton = (gcnew System::Windows::Forms::Button());
			this->addVoltageNameLabel = (gcnew System::Windows::Forms::Label());
			this->addVoltageYLabel = (gcnew System::Windows::Forms::Label());
			this->addVoltageXLabel = (gcnew System::Windows::Forms::Label());
			this->addVoltageValueLabel = (gcnew System::Windows::Forms::Label());
			this->addVoltageNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addVoltageYTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addVoltageXTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addVoltageValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->connectGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->connectButton = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->nodeRadioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->nodeRadioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->part2ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->nodeRadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->nodeRadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->part1ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->addResistorGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->horizontalResistorRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->verticalResistorRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->addResistorButton = (gcnew System::Windows::Forms::Button());
			this->addResistorXLabel = (gcnew System::Windows::Forms::Label());
			this->addResistorNameLabel = (gcnew System::Windows::Forms::Label());
			this->addResistorValueLabel = (gcnew System::Windows::Forms::Label());
			this->addResistorYLabel = (gcnew System::Windows::Forms::Label());
			this->addResistorNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addResistorYTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addResistorXTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addResistorValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->solutionLabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->solutionOutputLabel = (gcnew System::Windows::Forms::Label());
			this->outputTitleLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->addNodeGroupBox->SuspendLayout();
			this->addVoltageGroupBox->SuspendLayout();
			this->connectGroupBox->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->addResistorGroupBox->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(249, 657);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->addNodeGroupBox);
			this->tabPage1->Controls->Add(this->solveButton);
			this->tabPage1->Controls->Add(this->addVoltageGroupBox);
			this->tabPage1->Controls->Add(this->connectGroupBox);
			this->tabPage1->Controls->Add(this->addResistorGroupBox);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(241, 631);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add / Connect";
			// 
			// addNodeGroupBox
			// 
			this->addNodeGroupBox->Controls->Add(this->addNodeButton);
			this->addNodeGroupBox->Controls->Add(this->addGroundNodeRadioButton);
			this->addNodeGroupBox->Controls->Add(this->addNodeRadioButton);
			this->addNodeGroupBox->Controls->Add(this->addNodeXLabel);
			this->addNodeGroupBox->Controls->Add(this->addNodeNameLabel);
			this->addNodeGroupBox->Controls->Add(this->addNodeYLabel);
			this->addNodeGroupBox->Controls->Add(this->addNodeNameTextBox);
			this->addNodeGroupBox->Controls->Add(this->addNodeYTextBox);
			this->addNodeGroupBox->Controls->Add(this->addNodeXTextBox);
			this->addNodeGroupBox->Location = System::Drawing::Point(6, 286);
			this->addNodeGroupBox->Name = L"addNodeGroupBox";
			this->addNodeGroupBox->Size = System::Drawing::Size(231, 100);
			this->addNodeGroupBox->TabIndex = 14;
			this->addNodeGroupBox->TabStop = false;
			this->addNodeGroupBox->Text = L"Add Node";
			// 
			// addNodeButton
			// 
			this->addNodeButton->Location = System::Drawing::Point(150, 66);
			this->addNodeButton->Name = L"addNodeButton";
			this->addNodeButton->Size = System::Drawing::Size(75, 23);
			this->addNodeButton->TabIndex = 19;
			this->addNodeButton->Text = L"Add";
			this->addNodeButton->UseVisualStyleBackColor = true;
			this->addNodeButton->Click += gcnew System::EventHandler(this, &Workbench::addNodeButton_Click);
			// 
			// addGroundNodeRadioButton
			// 
			this->addGroundNodeRadioButton->AutoSize = true;
			this->addGroundNodeRadioButton->Location = System::Drawing::Point(150, 41);
			this->addGroundNodeRadioButton->Name = L"addGroundNodeRadioButton";
			this->addGroundNodeRadioButton->Size = System::Drawing::Size(60, 17);
			this->addGroundNodeRadioButton->TabIndex = 18;
			this->addGroundNodeRadioButton->TabStop = true;
			this->addGroundNodeRadioButton->Text = L"Ground";
			this->addGroundNodeRadioButton->UseVisualStyleBackColor = true;
			this->addGroundNodeRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Workbench::addGroundNodeRadioButton_CheckedChanged);
			// 
			// addNodeRadioButton
			// 
			this->addNodeRadioButton->AutoSize = true;
			this->addNodeRadioButton->Location = System::Drawing::Point(150, 20);
			this->addNodeRadioButton->Name = L"addNodeRadioButton";
			this->addNodeRadioButton->Size = System::Drawing::Size(51, 17);
			this->addNodeRadioButton->TabIndex = 17;
			this->addNodeRadioButton->TabStop = true;
			this->addNodeRadioButton->Text = L"Node";
			this->addNodeRadioButton->UseVisualStyleBackColor = true;
			this->addNodeRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Workbench::addNodeRadioButton_CheckedChanged);
			// 
			// addNodeXLabel
			// 
			this->addNodeXLabel->AutoSize = true;
			this->addNodeXLabel->Location = System::Drawing::Point(78, 19);
			this->addNodeXLabel->Name = L"addNodeXLabel";
			this->addNodeXLabel->Size = System::Drawing::Size(14, 13);
			this->addNodeXLabel->TabIndex = 15;
			this->addNodeXLabel->Text = L"X";
			// 
			// addNodeNameLabel
			// 
			this->addNodeNameLabel->AutoSize = true;
			this->addNodeNameLabel->Location = System::Drawing::Point(78, 71);
			this->addNodeNameLabel->Name = L"addNodeNameLabel";
			this->addNodeNameLabel->Size = System::Drawing::Size(35, 13);
			this->addNodeNameLabel->TabIndex = 16;
			this->addNodeNameLabel->Text = L"Name";
			// 
			// addNodeYLabel
			// 
			this->addNodeYLabel->AutoSize = true;
			this->addNodeYLabel->Location = System::Drawing::Point(77, 45);
			this->addNodeYLabel->Name = L"addNodeYLabel";
			this->addNodeYLabel->Size = System::Drawing::Size(14, 13);
			this->addNodeYLabel->TabIndex = 14;
			this->addNodeYLabel->Text = L"Y";
			// 
			// addNodeNameTextBox
			// 
			this->addNodeNameTextBox->Enabled = false;
			this->addNodeNameTextBox->Location = System::Drawing::Point(8, 68);
			this->addNodeNameTextBox->Name = L"addNodeNameTextBox";
			this->addNodeNameTextBox->Size = System::Drawing::Size(63, 20);
			this->addNodeNameTextBox->TabIndex = 13;
			// 
			// addNodeYTextBox
			// 
			this->addNodeYTextBox->Location = System::Drawing::Point(7, 42);
			this->addNodeYTextBox->Name = L"addNodeYTextBox";
			this->addNodeYTextBox->Size = System::Drawing::Size(64, 20);
			this->addNodeYTextBox->TabIndex = 12;
			// 
			// addNodeXTextBox
			// 
			this->addNodeXTextBox->Location = System::Drawing::Point(7, 16);
			this->addNodeXTextBox->Name = L"addNodeXTextBox";
			this->addNodeXTextBox->Size = System::Drawing::Size(64, 20);
			this->addNodeXTextBox->TabIndex = 11;
			// 
			// solveButton
			// 
			this->solveButton->Location = System::Drawing::Point(6, 527);
			this->solveButton->Name = L"solveButton";
			this->solveButton->Size = System::Drawing::Size(225, 58);
			this->solveButton->TabIndex = 13;
			this->solveButton->Text = L"Solve";
			this->solveButton->UseVisualStyleBackColor = true;
			this->solveButton->Click += gcnew System::EventHandler(this, &Workbench::solveButton_Click);
			// 
			// addVoltageGroupBox
			// 
			this->addVoltageGroupBox->Controls->Add(this->addVoltageButton);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageNameLabel);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageYLabel);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageXLabel);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageValueLabel);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageNameTextBox);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageYTextBox);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageXTextBox);
			this->addVoltageGroupBox->Controls->Add(this->addVoltageValueTextBox);
			this->addVoltageGroupBox->Location = System::Drawing::Point(6, 6);
			this->addVoltageGroupBox->Name = L"addVoltageGroupBox";
			this->addVoltageGroupBox->Size = System::Drawing::Size(231, 134);
			this->addVoltageGroupBox->TabIndex = 1;
			this->addVoltageGroupBox->TabStop = false;
			this->addVoltageGroupBox->Text = L"Add Voltage";
			// 
			// addVoltageButton
			// 
			this->addVoltageButton->Location = System::Drawing::Point(150, 99);
			this->addVoltageButton->Name = L"addVoltageButton";
			this->addVoltageButton->Size = System::Drawing::Size(75, 23);
			this->addVoltageButton->TabIndex = 4;
			this->addVoltageButton->Text = L"Add";
			this->addVoltageButton->UseVisualStyleBackColor = true;
			this->addVoltageButton->Click += gcnew System::EventHandler(this, &Workbench::addVoltageButton_Click);
			// 
			// addVoltageNameLabel
			// 
			this->addVoltageNameLabel->AutoSize = true;
			this->addVoltageNameLabel->Location = System::Drawing::Point(77, 104);
			this->addVoltageNameLabel->Name = L"addVoltageNameLabel";
			this->addVoltageNameLabel->Size = System::Drawing::Size(35, 13);
			this->addVoltageNameLabel->TabIndex = 7;
			this->addVoltageNameLabel->Text = L"Name";
			// 
			// addVoltageYLabel
			// 
			this->addVoltageYLabel->AutoSize = true;
			this->addVoltageYLabel->Location = System::Drawing::Point(77, 77);
			this->addVoltageYLabel->Name = L"addVoltageYLabel";
			this->addVoltageYLabel->Size = System::Drawing::Size(14, 13);
			this->addVoltageYLabel->TabIndex = 6;
			this->addVoltageYLabel->Text = L"Y";
			// 
			// addVoltageXLabel
			// 
			this->addVoltageXLabel->AutoSize = true;
			this->addVoltageXLabel->Location = System::Drawing::Point(77, 50);
			this->addVoltageXLabel->Name = L"addVoltageXLabel";
			this->addVoltageXLabel->Size = System::Drawing::Size(14, 13);
			this->addVoltageXLabel->TabIndex = 5;
			this->addVoltageXLabel->Text = L"X";
			// 
			// addVoltageValueLabel
			// 
			this->addVoltageValueLabel->AutoSize = true;
			this->addVoltageValueLabel->Location = System::Drawing::Point(77, 23);
			this->addVoltageValueLabel->Name = L"addVoltageValueLabel";
			this->addVoltageValueLabel->Size = System::Drawing::Size(34, 13);
			this->addVoltageValueLabel->TabIndex = 4;
			this->addVoltageValueLabel->Text = L"Value";
			// 
			// addVoltageNameTextBox
			// 
			this->addVoltageNameTextBox->Location = System::Drawing::Point(7, 101);
			this->addVoltageNameTextBox->Name = L"addVoltageNameTextBox";
			this->addVoltageNameTextBox->Size = System::Drawing::Size(63, 20);
			this->addVoltageNameTextBox->TabIndex = 3;
			// 
			// addVoltageYTextBox
			// 
			this->addVoltageYTextBox->Location = System::Drawing::Point(7, 74);
			this->addVoltageYTextBox->Name = L"addVoltageYTextBox";
			this->addVoltageYTextBox->Size = System::Drawing::Size(63, 20);
			this->addVoltageYTextBox->TabIndex = 2;
			// 
			// addVoltageXTextBox
			// 
			this->addVoltageXTextBox->Location = System::Drawing::Point(7, 47);
			this->addVoltageXTextBox->Name = L"addVoltageXTextBox";
			this->addVoltageXTextBox->Size = System::Drawing::Size(63, 20);
			this->addVoltageXTextBox->TabIndex = 1;
			// 
			// addVoltageValueTextBox
			// 
			this->addVoltageValueTextBox->Location = System::Drawing::Point(7, 20);
			this->addVoltageValueTextBox->Name = L"addVoltageValueTextBox";
			this->addVoltageValueTextBox->Size = System::Drawing::Size(63, 20);
			this->addVoltageValueTextBox->TabIndex = 0;
			// 
			// connectGroupBox
			// 
			this->connectGroupBox->Controls->Add(this->connectButton);
			this->connectGroupBox->Controls->Add(this->panel4);
			this->connectGroupBox->Controls->Add(this->panel1);
			this->connectGroupBox->Location = System::Drawing::Point(6, 392);
			this->connectGroupBox->Name = L"connectGroupBox";
			this->connectGroupBox->Size = System::Drawing::Size(231, 129);
			this->connectGroupBox->TabIndex = 12;
			this->connectGroupBox->TabStop = false;
			this->connectGroupBox->Text = L"Connect";
			// 
			// connectButton
			// 
			this->connectButton->Location = System::Drawing::Point(65, 94);
			this->connectButton->Name = L"connectButton";
			this->connectButton->Size = System::Drawing::Size(75, 23);
			this->connectButton->TabIndex = 3;
			this->connectButton->Text = L"Connect";
			this->connectButton->UseVisualStyleBackColor = true;
			this->connectButton->Click += gcnew System::EventHandler(this, &Workbench::connectButton_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->nodeRadioButton4);
			this->panel4->Controls->Add(this->nodeRadioButton3);
			this->panel4->Controls->Add(this->part2ComboBox);
			this->panel4->Location = System::Drawing::Point(104, 19);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(92, 69);
			this->panel4->TabIndex = 2;
			// 
			// nodeRadioButton4
			// 
			this->nodeRadioButton4->AutoSize = true;
			this->nodeRadioButton4->Enabled = false;
			this->nodeRadioButton4->Location = System::Drawing::Point(3, 49);
			this->nodeRadioButton4->Name = L"nodeRadioButton4";
			this->nodeRadioButton4->Size = System::Drawing::Size(14, 13);
			this->nodeRadioButton4->TabIndex = 5;
			this->nodeRadioButton4->TabStop = true;
			this->nodeRadioButton4->UseVisualStyleBackColor = true;
			// 
			// nodeRadioButton3
			// 
			this->nodeRadioButton3->AutoSize = true;
			this->nodeRadioButton3->Enabled = false;
			this->nodeRadioButton3->Location = System::Drawing::Point(3, 30);
			this->nodeRadioButton3->Name = L"nodeRadioButton3";
			this->nodeRadioButton3->Size = System::Drawing::Size(14, 13);
			this->nodeRadioButton3->TabIndex = 4;
			this->nodeRadioButton3->TabStop = true;
			this->nodeRadioButton3->UseVisualStyleBackColor = true;
			// 
			// part2ComboBox
			// 
			this->part2ComboBox->FormattingEnabled = true;
			this->part2ComboBox->Location = System::Drawing::Point(3, 3);
			this->part2ComboBox->Name = L"part2ComboBox";
			this->part2ComboBox->Size = System::Drawing::Size(89, 21);
			this->part2ComboBox->Sorted = true;
			this->part2ComboBox->TabIndex = 3;
			this->part2ComboBox->Text = L"Choose Part 2";
			this->part2ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Workbench::part2ComboBox_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->nodeRadioButton2);
			this->panel1->Controls->Add(this->nodeRadioButton1);
			this->panel1->Controls->Add(this->part1ComboBox);
			this->panel1->Location = System::Drawing::Point(6, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(92, 69);
			this->panel1->TabIndex = 1;
			// 
			// nodeRadioButton2
			// 
			this->nodeRadioButton2->AutoSize = true;
			this->nodeRadioButton2->Enabled = false;
			this->nodeRadioButton2->Location = System::Drawing::Point(3, 49);
			this->nodeRadioButton2->Name = L"nodeRadioButton2";
			this->nodeRadioButton2->Size = System::Drawing::Size(14, 13);
			this->nodeRadioButton2->TabIndex = 2;
			this->nodeRadioButton2->TabStop = true;
			this->nodeRadioButton2->UseVisualStyleBackColor = true;
			// 
			// nodeRadioButton1
			// 
			this->nodeRadioButton1->AutoSize = true;
			this->nodeRadioButton1->Enabled = false;
			this->nodeRadioButton1->Location = System::Drawing::Point(3, 30);
			this->nodeRadioButton1->Name = L"nodeRadioButton1";
			this->nodeRadioButton1->Size = System::Drawing::Size(14, 13);
			this->nodeRadioButton1->TabIndex = 1;
			this->nodeRadioButton1->TabStop = true;
			this->nodeRadioButton1->UseVisualStyleBackColor = true;
			// 
			// part1ComboBox
			// 
			this->part1ComboBox->FormattingEnabled = true;
			this->part1ComboBox->Location = System::Drawing::Point(3, 3);
			this->part1ComboBox->Name = L"part1ComboBox";
			this->part1ComboBox->Size = System::Drawing::Size(89, 21);
			this->part1ComboBox->Sorted = true;
			this->part1ComboBox->TabIndex = 0;
			this->part1ComboBox->Text = L"Choose Part 1";
			this->part1ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Workbench::part1ComboBox_SelectedIndexChanged);
			// 
			// addResistorGroupBox
			// 
			this->addResistorGroupBox->Controls->Add(this->horizontalResistorRadioButton);
			this->addResistorGroupBox->Controls->Add(this->verticalResistorRadioButton);
			this->addResistorGroupBox->Controls->Add(this->addResistorButton);
			this->addResistorGroupBox->Controls->Add(this->addResistorXLabel);
			this->addResistorGroupBox->Controls->Add(this->addResistorNameLabel);
			this->addResistorGroupBox->Controls->Add(this->addResistorValueLabel);
			this->addResistorGroupBox->Controls->Add(this->addResistorYLabel);
			this->addResistorGroupBox->Controls->Add(this->addResistorNameTextBox);
			this->addResistorGroupBox->Controls->Add(this->addResistorYTextBox);
			this->addResistorGroupBox->Controls->Add(this->addResistorXTextBox);
			this->addResistorGroupBox->Controls->Add(this->addResistorValueTextBox);
			this->addResistorGroupBox->Location = System::Drawing::Point(6, 146);
			this->addResistorGroupBox->Name = L"addResistorGroupBox";
			this->addResistorGroupBox->Size = System::Drawing::Size(231, 134);
			this->addResistorGroupBox->TabIndex = 2;
			this->addResistorGroupBox->TabStop = false;
			this->addResistorGroupBox->Text = L"Add Resistor";
			// 
			// horizontalResistorRadioButton
			// 
			this->horizontalResistorRadioButton->AutoSize = true;
			this->horizontalResistorRadioButton->Location = System::Drawing::Point(150, 42);
			this->horizontalResistorRadioButton->Name = L"horizontalResistorRadioButton";
			this->horizontalResistorRadioButton->Size = System::Drawing::Size(72, 17);
			this->horizontalResistorRadioButton->TabIndex = 5;
			this->horizontalResistorRadioButton->TabStop = true;
			this->horizontalResistorRadioButton->Text = L"Horizontal";
			this->horizontalResistorRadioButton->UseVisualStyleBackColor = true;
			// 
			// verticalResistorRadioButton
			// 
			this->verticalResistorRadioButton->AutoSize = true;
			this->verticalResistorRadioButton->Location = System::Drawing::Point(150, 19);
			this->verticalResistorRadioButton->Name = L"verticalResistorRadioButton";
			this->verticalResistorRadioButton->Size = System::Drawing::Size(60, 17);
			this->verticalResistorRadioButton->TabIndex = 4;
			this->verticalResistorRadioButton->TabStop = true;
			this->verticalResistorRadioButton->Text = L"Vertical";
			this->verticalResistorRadioButton->UseVisualStyleBackColor = true;
			// 
			// addResistorButton
			// 
			this->addResistorButton->Location = System::Drawing::Point(150, 95);
			this->addResistorButton->Name = L"addResistorButton";
			this->addResistorButton->Size = System::Drawing::Size(75, 23);
			this->addResistorButton->TabIndex = 6;
			this->addResistorButton->Text = L"Add";
			this->addResistorButton->UseVisualStyleBackColor = true;
			this->addResistorButton->Click += gcnew System::EventHandler(this, &Workbench::addResistorButton_Click);
			// 
			// addResistorXLabel
			// 
			this->addResistorXLabel->AutoSize = true;
			this->addResistorXLabel->Location = System::Drawing::Point(77, 48);
			this->addResistorXLabel->Name = L"addResistorXLabel";
			this->addResistorXLabel->Size = System::Drawing::Size(14, 13);
			this->addResistorXLabel->TabIndex = 10;
			this->addResistorXLabel->Text = L"X";
			// 
			// addResistorNameLabel
			// 
			this->addResistorNameLabel->AutoSize = true;
			this->addResistorNameLabel->Location = System::Drawing::Point(77, 100);
			this->addResistorNameLabel->Name = L"addResistorNameLabel";
			this->addResistorNameLabel->Size = System::Drawing::Size(35, 13);
			this->addResistorNameLabel->TabIndex = 10;
			this->addResistorNameLabel->Text = L"Name";
			// 
			// addResistorValueLabel
			// 
			this->addResistorValueLabel->AutoSize = true;
			this->addResistorValueLabel->Location = System::Drawing::Point(76, 22);
			this->addResistorValueLabel->Name = L"addResistorValueLabel";
			this->addResistorValueLabel->Size = System::Drawing::Size(34, 13);
			this->addResistorValueLabel->TabIndex = 9;
			this->addResistorValueLabel->Text = L"Value";
			// 
			// addResistorYLabel
			// 
			this->addResistorYLabel->AutoSize = true;
			this->addResistorYLabel->Location = System::Drawing::Point(76, 74);
			this->addResistorYLabel->Name = L"addResistorYLabel";
			this->addResistorYLabel->Size = System::Drawing::Size(14, 13);
			this->addResistorYLabel->TabIndex = 9;
			this->addResistorYLabel->Text = L"Y";
			// 
			// addResistorNameTextBox
			// 
			this->addResistorNameTextBox->Location = System::Drawing::Point(7, 97);
			this->addResistorNameTextBox->Name = L"addResistorNameTextBox";
			this->addResistorNameTextBox->Size = System::Drawing::Size(63, 20);
			this->addResistorNameTextBox->TabIndex = 3;
			// 
			// addResistorYTextBox
			// 
			this->addResistorYTextBox->Location = System::Drawing::Point(6, 71);
			this->addResistorYTextBox->Name = L"addResistorYTextBox";
			this->addResistorYTextBox->Size = System::Drawing::Size(64, 20);
			this->addResistorYTextBox->TabIndex = 2;
			// 
			// addResistorXTextBox
			// 
			this->addResistorXTextBox->Location = System::Drawing::Point(6, 45);
			this->addResistorXTextBox->Name = L"addResistorXTextBox";
			this->addResistorXTextBox->Size = System::Drawing::Size(64, 20);
			this->addResistorXTextBox->TabIndex = 1;
			// 
			// addResistorValueTextBox
			// 
			this->addResistorValueTextBox->Location = System::Drawing::Point(7, 19);
			this->addResistorValueTextBox->Name = L"addResistorValueTextBox";
			this->addResistorValueTextBox->Size = System::Drawing::Size(63, 20);
			this->addResistorValueTextBox->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->solutionLabel);
			this->tabPage2->Controls->Add(this->panel5);
			this->tabPage2->Controls->Add(this->outputTitleLabel);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(241, 631);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Components / Solution";
			// 
			// solutionLabel
			// 
			this->solutionLabel->AutoSize = true;
			this->solutionLabel->Location = System::Drawing::Point(96, 202);
			this->solutionLabel->Name = L"solutionLabel";
			this->solutionLabel->Size = System::Drawing::Size(45, 13);
			this->solutionLabel->TabIndex = 3;
			this->solutionLabel->Text = L"Solution";
			// 
			// panel5
			// 
			this->panel5->AutoScroll = true;
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->solutionOutputLabel);
			this->panel5->Location = System::Drawing::Point(6, 218);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(229, 320);
			this->panel5->TabIndex = 2;
			// 
			// solutionOutputLabel
			// 
			this->solutionOutputLabel->AutoSize = true;
			this->solutionOutputLabel->BackColor = System::Drawing::Color::White;
			this->solutionOutputLabel->Location = System::Drawing::Point(0, 0);
			this->solutionOutputLabel->Name = L"solutionOutputLabel";
			this->solutionOutputLabel->Size = System::Drawing::Size(0, 13);
			this->solutionOutputLabel->TabIndex = 0;
			// 
			// outputTitleLabel
			// 
			this->outputTitleLabel->AutoSize = true;
			this->outputTitleLabel->Location = System::Drawing::Point(66, 3);
			this->outputTitleLabel->Name = L"outputTitleLabel";
			this->outputTitleLabel->Size = System::Drawing::Size(102, 13);
			this->outputTitleLabel->TabIndex = 1;
			this->outputTitleLabel->Text = L"Placed Components";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->outputLabel);
			this->panel2->Location = System::Drawing::Point(6, 19);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(229, 180);
			this->panel2->TabIndex = 0;
			// 
			// outputLabel
			// 
			this->outputLabel->AutoSize = true;
			this->outputLabel->BackColor = System::Drawing::Color::White;
			this->outputLabel->Location = System::Drawing::Point(0, 0);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(0, 13);
			this->outputLabel->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->tabControl1);
			this->panel3->Location = System::Drawing::Point(839, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(255, 665);
			this->panel3->TabIndex = 1;
			// 
			// Workbench
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1094, 663);
			this->Controls->Add(this->panel3);
			this->Name = L"Workbench";
			this->Text = L"Workbench";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Workbench::Workbench_Paint);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->addNodeGroupBox->ResumeLayout(false);
			this->addNodeGroupBox->PerformLayout();
			this->addVoltageGroupBox->ResumeLayout(false);
			this->addVoltageGroupBox->PerformLayout();
			this->connectGroupBox->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->addResistorGroupBox->ResumeLayout(false);
			this->addResistorGroupBox->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private:
	static array<Voltage^>^ voltageArray = gcnew array<Voltage^>(4);
	static array<Resistor^>^ resistorArray = gcnew array<Resistor^>(10);
	static array<Node^>^ nodeArray = gcnew array<Node^>(10);
	static array<Ground^>^ groundArray = gcnew array<Ground^>(1);
	static array<Components^>^ componentsArray = gcnew array<Components^>(2);
	static int selectedpart1 = -1, selectedpart2 = -1;
	String^ OutputLabelText;
	static int VoltageCount = 0;
	static int ResistorCount = 0;
	static int NodeCount = 0;
	static int GroundNodeCount = 0;
	static int TotalPartCount = 0;

private: System::Void addVoltageButton_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int i;
			 bool process = true;
			 bool erase = false;
			 if(VoltageCount==4)
			 {
				 Windows::Forms::MessageBox::Show(L"Currently, only four Voltage Source is allowed at one time.",L"Voltage Source Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
				 process = false;
				 erase = true;
			 }
			 if(process==true&&(addVoltageValueTextBox->Text==""|addVoltageXTextBox->Text==""|addVoltageYTextBox->Text==""|addVoltageNameTextBox->Text==""))
			 {
				  Windows::Forms::MessageBox::Show(L"All entries must be completed.",L"Incomplete Add Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
				  process = false;
			 }
			 if(process==true)
			 {
				 if((addVoltageNameTextBox->Text->StartsWith("V")==false)|(addVoltageNameTextBox->Text->Contains("_"))|(addVoltageNameTextBox->Text->Length==1)) // Beggining Character
				 {
					 Windows::Forms::MessageBox::Show(L"Voltage Name must begin with a capital \"V\", must be longer than one character and must not contain an underscore.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
					 process = false;
				 }
				 if((ResistorCount>0)|(VoltageCount>0)) // Unique Name Entries
				 {
					 for(i=0;i<ResistorCount;i++)
					 {
						 if(addVoltageNameTextBox->Text==resistorArray[i]->ComponentName)
						 {
							 Windows::Forms::MessageBox::Show(L"All Name entries must be unique.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
							 process = false;
						 }
					 }
					 for(i=0;i<VoltageCount;i++)
					 {
						 if(addVoltageNameTextBox->Text==voltageArray[i]->ComponentName)
						 {
							 Windows::Forms::MessageBox::Show(L"All Name entries must be unique.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
							 process = false;
						 }
					 }
				 }
				 if(process==true) // Add Voltage Source
				 {
					 Voltage^ voltageSource = gcnew Voltage(double::Parse(addVoltageValueTextBox->Text),int::Parse(addVoltageXTextBox->Text),int::Parse(addVoltageYTextBox->Text),addVoltageNameTextBox->Text,0,0);
					 voltageArray[VoltageCount] = voltageSource;

					 Workbench::Controls->Add(voltageArray[VoltageCount]->ComponentDiagram);
					 Workbench::Controls->Add(voltageArray[VoltageCount]->ComponentValueLabel);
					 Workbench::Controls->Add(voltageArray[VoltageCount]->ComponentNameLabel);

					 OutputLabelText = String::Concat(OutputLabelText, voltageArray[VoltageCount]->ToString());
					 outputLabel->Text = OutputLabelText;

					 part1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {voltageArray[VoltageCount]->ComponentName});
					 part2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {voltageArray[VoltageCount]->ComponentName});

					 VoltageCount++;

					 erase = true;
				 }
			 }
			 if(erase==true)
			 {
				 addVoltageValueTextBox->Text = "";
				 addVoltageXTextBox->Text = "";
				 addVoltageYTextBox->Text = "";
				 addVoltageNameTextBox->Text = "";
			 }
		 }
private: System::Void addResistorButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int i;
			 bool process = true;
			 bool erase = false;
			 if(ResistorCount>9)
			 {
				 Windows::Forms::MessageBox::Show(L"Currently, only ten Resistors are allowed at one time.",L"Resistor Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
				 process = false;
				 erase = true;
			 }
			 if(process==true&&(addResistorValueTextBox->Text==""|addResistorXTextBox->Text==""|addResistorYTextBox->Text==""|addResistorNameTextBox->Text==""|(verticalResistorRadioButton->Checked==false&&horizontalResistorRadioButton->Checked==false)))
			 {
				 Windows::Forms::MessageBox::Show(L"All entries must be completed.",L"Incomplete Add Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
				 process = false;
			 }
			 if(process==true)
			 {
				 if((addResistorNameTextBox->Text->StartsWith("R")==false)|(addResistorNameTextBox->Text->Contains("_"))|(addResistorNameTextBox->Text->Length==1)) // Beggining Character
				 {
					 Windows::Forms::MessageBox::Show(L"Resistor Name must begin with a capital \"R\", must be longer than one character and must not contain an underscore.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
					 process = false;
				 }
				 if((ResistorCount>0)|(VoltageCount>0))
				 {
					 for(i=0;i<ResistorCount;i++)
					 {
						 if(addResistorNameTextBox->Text==resistorArray[i]->ComponentName)
						 {
							 Windows::Forms::MessageBox::Show(L"All Name entries must be unique.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
							 process = false;
						 }
					 }
					 for(i=0;i<VoltageCount;i++)
					 {
						 if(addResistorNameTextBox->Text==voltageArray[i]->ComponentName)
						 {
							 Windows::Forms::MessageBox::Show(L"All Name entries must be unique.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
							 process = false;
						 }
					 }
				 }
				 if(process==true)
				 {
				
					 if(verticalResistorRadioButton->Checked==true)
					 {
						 Resistor^ resistorComponent = gcnew Resistor(double::Parse(addResistorValueTextBox->Text),int::Parse(addResistorXTextBox->Text),int::Parse(addResistorYTextBox->Text),addResistorNameTextBox->Text,2,0);
					 
						 resistorArray[ResistorCount] = resistorComponent;
	
						 Workbench::Controls->Add(resistorArray[ResistorCount]->ComponentDiagram);
						 Workbench::Controls->Add(resistorArray[ResistorCount]->ComponentValueLabel);
						 Workbench::Controls->Add(resistorArray[ResistorCount]->ComponentNameLabel);

						 OutputLabelText = String::Concat(OutputLabelText, resistorArray[ResistorCount]->ToString());
						 outputLabel->Text = OutputLabelText;

						 part1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {resistorArray[ResistorCount]->ComponentName});
						 part2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {resistorArray[ResistorCount]->ComponentName});

						 ResistorCount++;
						 erase = true;
					 }
					 if(horizontalResistorRadioButton->Checked==true)
					 {
						 Resistor^ resistorComponent = gcnew Resistor(double::Parse(addResistorValueTextBox->Text),int::Parse(addResistorXTextBox->Text),int::Parse(addResistorYTextBox->Text),addResistorNameTextBox->Text,2,1);
					 
						 resistorArray[ResistorCount] = resistorComponent;
	
						 Workbench::Controls->Add(resistorArray[ResistorCount]->ComponentDiagram);
						 Workbench::Controls->Add(resistorArray[ResistorCount]->ComponentValueLabel);
						 Workbench::Controls->Add(resistorArray[ResistorCount]->ComponentNameLabel);

						 OutputLabelText = String::Concat(OutputLabelText, resistorArray[ResistorCount]->ToString());
						 outputLabel->Text = OutputLabelText;

						 part1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {resistorArray[ResistorCount]->ComponentName});
						 part2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {resistorArray[ResistorCount]->ComponentName});

						 ResistorCount++;
						 erase = true;
					 }
				 }
			 }
			 if(erase==true)
			 {
				 addResistorValueTextBox->Text = "";
				 addResistorXTextBox->Text = "";
				 addResistorYTextBox->Text = "";
				 addResistorNameTextBox->Text = "";
				 verticalResistorRadioButton->Checked = false;
				 horizontalResistorRadioButton->Checked = false;
			 }
		 }
private: System::Void addNodeRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(addNodeRadioButton->Checked==true)
			 {
				 addNodeNameTextBox->Enabled = true;
			 }
		 }
private: System::Void addGroundNodeRadioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(addGroundNodeRadioButton->Checked==true)
			 {
				 addNodeNameTextBox->Enabled = false;
			 }
		 }
private: System::Void addNodeButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int i;
			 bool process = true;
			 bool erase = false;
			 if(addNodeRadioButton->Checked==true)
			 {
				 if(NodeCount==10)
				 {
					 Windows::Forms::MessageBox::Show(L"Only ten Nodes are allowed per circuit.",L"Node Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
					 process = false;
					 erase = true;
				 }
				 if(process==true&&(addNodeXTextBox->Text==""|addNodeYTextBox->Text==""|addNodeNameTextBox->Text==""))
				 {
					 Windows::Forms::MessageBox::Show(L"All entries must be completed.",L"Incomplete Add Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
					 process = false;
				 }
				 if(process==true)
				 {
					 if((addNodeNameTextBox->Text->StartsWith("N")==false)|(addNodeNameTextBox->Text->Contains("_"))|(addNodeNameTextBox->Text->Length==1)) // Beggining Character
					 {
						 Windows::Forms::MessageBox::Show(L"Node Name must begin with a capital \"N\", must be longer than one character and must not contain an underscore.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
						 process = false;
					 }
					 for(i=0;i<NodeCount;i++)
					 {
						 if(addNodeNameTextBox->Text==nodeArray[i]->ComponentName)
						 {
							 Windows::Forms::MessageBox::Show(L"All Name entries must be unique.",L"Name Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
							 process = false;
						 }
					 }
				 }
				 if(process==true)
				 {
					 Node^ node = gcnew Node(int::Parse(addNodeXTextBox->Text),int::Parse(addNodeYTextBox->Text),addNodeNameTextBox->Text);
					 nodeArray[NodeCount] = node;
					 Workbench::Controls->Add(nodeArray[NodeCount]->ComponentDiagram);
					 Workbench::Controls->Add(nodeArray[NodeCount]->ComponentNameLabel);
					 part1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {nodeArray[NodeCount]->ComponentName});
					 part2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {nodeArray[NodeCount]->ComponentName});
					 NodeCount++;
					 erase = true;
				 }
			 }
			 if(addGroundNodeRadioButton->Checked==true)
			 {
				 if(GroundNodeCount==1)
				 {
					 Windows::Forms::MessageBox::Show(L"Only one Ground Node is allowed per circuit.",L"Ground Node Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
					 process = false;
					 erase = true;
				 }
				 if(process==true&&(addNodeXTextBox->Text==""|addNodeYTextBox->Text==""))
				 {
					 Windows::Forms::MessageBox::Show(L"All entries must be completed.",L"Incomplete Add Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
					 process = false;
				 }
				 if(process==true)
				 {
					 Ground^ groundNode = gcnew Ground(int::Parse(addNodeXTextBox->Text),int::Parse(addNodeYTextBox->Text));
					 groundArray[0] = groundNode;
					 Workbench::Controls->Add(groundArray[0]->ComponentDiagram);
					 part1ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {groundArray[0]->ComponentName});
					 part2ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {groundArray[0]->ComponentName});
					 GroundNodeCount++;
					 erase = true;
				 }
			 }
			 if(erase==true)
			 {
				 addNodeXTextBox->Text = "";
				 addNodeYTextBox->Text = "";
				 addNodeNameTextBox->Text = "";
				 addNodeNameTextBox->Enabled = false;
				 addNodeRadioButton->Checked = false;
				 addGroundNodeRadioButton->Checked = false;
			 }
		 }
private: System::Void part1ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 int i;
			 int choice = part1ComboBox->SelectedIndex;
			 String^ ItemText = part1ComboBox->Items[choice]->ToString();

			 for(i=0;i<VoltageCount;i++)
			 {
				 if(voltageArray[i]->ComponentName==ItemText)
				 {
					 componentsArray[0]=voltageArray[i];
					 selectedpart1 = i;
				 }
			 }
			 for(i=0;i<ResistorCount;i++)
			 {
				 if(resistorArray[i]->ComponentName==ItemText)
				 {
					 componentsArray[0]=resistorArray[i];
					 selectedpart1 = i;
				 }
			 }
			 for(i=0;i<NodeCount;i++)
			 {
				 if(nodeArray[i]->ComponentName==ItemText)
				 {
					 componentsArray[0] = nodeArray[i];
					 selectedpart1 = i;
				 }
			 }
			 for(i=0;i<GroundNodeCount;i++)
			 {
				 if(groundArray[0]->ComponentName==ItemText)
				 {
					 componentsArray[0] = groundArray[0];
					 selectedpart1 = 0;
				 }
			 }
			 if(componentsArray[0]->ComponentOrientation==0)
			 {
				 nodeRadioButton1->Text = L"Top Node";
				 nodeRadioButton2->Text = L"Bottom Node";
				 nodeRadioButton1->Enabled = false;
				 nodeRadioButton2->Enabled = false;
				 if(componentsArray[0]->ComponentTopNode==false)
				 {
					 nodeRadioButton1->Checked = false;
					 nodeRadioButton1->Enabled = true;

				 }
				 if(componentsArray[0]->ComponentBottomNode==false)
				 {
					 nodeRadioButton2->Checked = false;
					 nodeRadioButton2->Enabled = true;
				 }
			 }
			 if(componentsArray[0]->ComponentOrientation==1)
			 {
				 nodeRadioButton1->Text = L"Left Node";
				 nodeRadioButton2->Text = L"Right Node";
				 nodeRadioButton1->Enabled = false;
				 nodeRadioButton2->Enabled = false;
				 if(componentsArray[0]->ComponentLeftNode==false)
				 {
					 nodeRadioButton1->Checked = false;
					 nodeRadioButton1->Enabled = true;

				 }
				 if(componentsArray[0]->ComponentRightNode==false)
				 {
					 nodeRadioButton2->Checked = false;
					 nodeRadioButton2->Enabled = true;
				 }
			 }
		 }
private: System::Void part2ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int i;
			 int choice = part2ComboBox->SelectedIndex;
			 String^ ItemText = part2ComboBox->Items[choice]->ToString();

			 for(i=0;i<VoltageCount;i++)
			 {
				 if(voltageArray[i]->ComponentName==ItemText)
				 {
					 componentsArray[1]=voltageArray[i];
					 selectedpart2 = i;
				 }
					 
			 }
			 for(i=0;i<ResistorCount;i++)
			 {
				 if(resistorArray[i]->ComponentName==ItemText)
				 {
					 componentsArray[1]=resistorArray[i];
					 selectedpart2 = i;
				 }
			 }
			 for(i=0;i<NodeCount;i++)
			 {
				 if(nodeArray[i]->ComponentName==ItemText)
				 {
					 componentsArray[1] = nodeArray[i];
					 selectedpart2 = i;
				 }
			 }
			 for(i=0;i<GroundNodeCount;i++)
			 {
				 if(groundArray[0]->ComponentName==ItemText)
				 {
					 componentsArray[1] = groundArray[0];
					 selectedpart2 = 0;
				 }
			 }
			 if(componentsArray[1]->ComponentOrientation==0)
			 {
				 nodeRadioButton3->Text = L"Top Node";
				 nodeRadioButton4->Text = L"Bottom Node";
				 nodeRadioButton3->Enabled = false;
				 nodeRadioButton4->Enabled = false;
				 if(componentsArray[1]->ComponentTopNode==false)
				 {
					 nodeRadioButton3->Checked = false;
					 nodeRadioButton3->Enabled = true;

				 }
				 if(componentsArray[1]->ComponentBottomNode==false)
				 {
					 nodeRadioButton4->Checked = false;
					 nodeRadioButton4->Enabled = true;
				 }
			 }
			 if(componentsArray[1]->ComponentOrientation==1)
			 {
				 nodeRadioButton3->Text = L"Left Node";
				 nodeRadioButton4->Text = L"Right Node";
				 nodeRadioButton3->Enabled = false;
				 nodeRadioButton4->Enabled = false;
				 if(componentsArray[1]->ComponentLeftNode==false)
				 {
					 nodeRadioButton3->Checked = false;
					 nodeRadioButton3->Enabled = true;

				 }
				 if(componentsArray[1]->ComponentRightNode==false)
				 {
					 nodeRadioButton4->Checked = false;
					 nodeRadioButton4->Enabled = true;
				 }
			 }
		 }
private: static array<Point^,2>^ pointArray = gcnew array<Point^,2>(50,2);
		 static int PointCount = 0;
private: System::Void connectButton_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 int count=0;
			 int connect1=0, connect2=0;
			 int part1x=0,part1y=0,part2x=0,part2y=0;
			 bool process = true;
			 bool erase = false;
			 if((part1ComboBox->SelectedIndex==-1)|(part2ComboBox->SelectedIndex==-1)|((nodeRadioButton1->Checked==false)&&(nodeRadioButton2->Checked==false))|((nodeRadioButton3->Checked==false)&&(nodeRadioButton4->Checked==false)))
			 {
				 Windows::Forms::MessageBox::Show(L"One item from each Combo Box must be selected, and one Radio Button from each set of Radio Buttons must be selected",L"Connect Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
				 process = false;
			 }
			 if((process==true)&&(part1ComboBox->SelectedIndex==part2ComboBox->SelectedIndex))
			 {
				 Windows::Forms::MessageBox::Show(L"Cannot connect a Component to itself.",L"Connect Error",Windows::Forms::MessageBoxButtons::OK,Windows::Forms::MessageBoxIcon::Exclamation);
				 process = false;
			 }
			 if((process==true)&&(count<2)&&(componentsArray[0]->ComponentType==0)) // ComboBox1 Voltage
			 {
				 if(nodeRadioButton1->Checked==true)
				 {
					 componentsArray[0]->ComponentTopNode = true;
					 voltageArray[selectedpart1]->ComponentTopNode = true;
					 nodeRadioButton1->Enabled = false;
					 part1x = componentsArray[0]->ComponentLocationX;
					 part1y = componentsArray[0]->ComponentLocationY;
					 voltageArray[selectedpart1]->ComponentNodeConnections++;
					 connect1 = 1;
					 count++;
				 }
				 if(nodeRadioButton2->Checked==true)
				 {
					 componentsArray[0]->ComponentBottomNode = true;
					 voltageArray[selectedpart1]->ComponentBottomNode = true;
					 nodeRadioButton2->Enabled = false;
					 part1x = componentsArray[0]->ComponentLocationX;
					 part1y = componentsArray[0]->ComponentLocationY+80;
					 voltageArray[selectedpart1]->ComponentNodeConnections++;
					 connect1 = 2;
					 count++;
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[0]->ComponentType==2)) // ComboBox1 Resistor
			 {
				 if(componentsArray[0]->ComponentOrientation==0) // Vertical
				 {
					 if(nodeRadioButton1->Checked==true)
					 {
						 componentsArray[0]->ComponentTopNode = true;
						 resistorArray[selectedpart1]->ComponentTopNode = true;
						 nodeRadioButton1->Enabled = false;
						 part1x = componentsArray[0]->ComponentLocationX;
						 part1y = componentsArray[0]->ComponentLocationY;
						 resistorArray[selectedpart1]->ComponentNodeConnections++;
						 connect1 = 1;
						 count++;
					 }
					 if(nodeRadioButton2->Checked==true)
					 {
						 componentsArray[0]->ComponentBottomNode = true;
						 resistorArray[selectedpart1]->ComponentBottomNode = true;
						 nodeRadioButton2->Enabled = false;
						 part1x = componentsArray[0]->ComponentLocationX;
						 part1y = componentsArray[0]->ComponentLocationY+80;
						 resistorArray[selectedpart1]->ComponentNodeConnections++;
						 connect1 = 2;
						 count++;
					 }
				 }
				 if(componentsArray[0]->ComponentOrientation==1) // Horizontal
				 {
					 if(nodeRadioButton1->Checked==true)
					 {
						 componentsArray[0]->ComponentLeftNode = true;
						 resistorArray[selectedpart1]->ComponentLeftNode = true;
						 nodeRadioButton1->Enabled = false;
						 part1x = componentsArray[0]->ComponentLocationX;
						 part1y = componentsArray[0]->ComponentLocationY;
						 resistorArray[selectedpart1]->ComponentNodeConnections++;
						 connect1 = 3;
						 count++;
					 }
					 if(nodeRadioButton2->Checked==true)
					 {
						 componentsArray[0]->ComponentRightNode = true;
						 resistorArray[selectedpart1]->ComponentRightNode = true;
						 nodeRadioButton2->Enabled = false;
						 part1x = componentsArray[0]->ComponentLocationX+80;
						 part1y = componentsArray[0]->ComponentLocationY;
						 resistorArray[selectedpart1]->ComponentNodeConnections++;
						 connect1 = 4;
						 count++;
					 }
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[0]->ComponentType==3)) // ComboBox1 Node
			 {
				 if(nodeRadioButton1->Checked==true)
				 {
					 part1x = componentsArray[0]->ComponentLocationX;
					 part1y = componentsArray[0]->ComponentLocationY;
					 nodeArray[selectedpart1]->ComponentNodeConnections++;
					 connect1 = 1;
					 count++;
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[0]->ComponentType==4)) // ComboBox1 Ground
			 {
				 if(nodeRadioButton1->Checked==true)
				 {
					 part1x = componentsArray[0]->ComponentLocationX;
					 part1y = componentsArray[0]->ComponentLocationY;
					 groundArray[0]->ComponentNodeConnections++;
					 connect1 = 1;
					 count++;
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[1]->ComponentType==0)) // ComboBox2 Voltage
			 {
				 if(nodeRadioButton3->Checked==true)
				 {
					 componentsArray[1]->ComponentTopNode = true;
					 voltageArray[selectedpart2]->ComponentTopNode = true;
					 nodeRadioButton3->Enabled = false;
					 part2x = componentsArray[1]->ComponentLocationX;
					 part2y = componentsArray[1]->ComponentLocationY;
					 voltageArray[selectedpart2]->ComponentNodeConnections++;
					 connect2 = 1;
					 count++;
				 }
				 if(nodeRadioButton4->Checked==true)
				 {
					 componentsArray[1]->ComponentBottomNode = true;
					 voltageArray[selectedpart2]->ComponentBottomNode = true;
					 nodeRadioButton4->Enabled = false;
					 part2x = componentsArray[1]->ComponentLocationX;
					 part2y = componentsArray[1]->ComponentLocationY+80;
					 voltageArray[selectedpart2]->ComponentNodeConnections++;
					 connect2 = 2;
					 count++;
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[1]->ComponentType==2)) // ComboBox2 Resistor
			 {
				 if(componentsArray[1]->ComponentOrientation==0) // Vertical
				 {
					 if(nodeRadioButton3->Checked==true)
					 {
						 componentsArray[1]->ComponentTopNode = true;
						 resistorArray[selectedpart2]->ComponentTopNode = true;
						 nodeRadioButton3->Enabled = false;
						 part2x = componentsArray[1]->ComponentLocationX;
						 part2y = componentsArray[1]->ComponentLocationY;
						 resistorArray[selectedpart2]->ComponentNodeConnections++;
						 connect2 = 1;
						 count++;
					 }
					 if(nodeRadioButton4->Checked==true)
					 {
						 componentsArray[1]->ComponentBottomNode = true;
						 resistorArray[selectedpart2]->ComponentBottomNode = true;
						 nodeRadioButton4->Enabled = false;
						 part2x = componentsArray[1]->ComponentLocationX;
						 part2y = componentsArray[1]->ComponentLocationY+80;
						 resistorArray[selectedpart2]->ComponentNodeConnections++;
						 connect2 = 2;
						 count++;
					 }
				 }
				 if(componentsArray[1]->ComponentOrientation==1) // Horizontal
				 {
					 if(nodeRadioButton3->Checked==true)
					 {
						 componentsArray[1]->ComponentLeftNode = true;
						 resistorArray[selectedpart2]->ComponentLeftNode = true;
						 nodeRadioButton3->Enabled = false;
						 part2x = componentsArray[1]->ComponentLocationX;
						 part2y = componentsArray[1]->ComponentLocationY;
						 resistorArray[selectedpart2]->ComponentNodeConnections++;
						 connect2 = 3;
						 count++;
					 }
					 if(nodeRadioButton4->Checked==true)
					 {
						 componentsArray[1]->ComponentRightNode = true;
						 resistorArray[selectedpart2]->ComponentRightNode = true;
						 nodeRadioButton4->Enabled = false;
						 part2x = componentsArray[1]->ComponentLocationX+80;
						 part2y = componentsArray[1]->ComponentLocationY;
						 resistorArray[selectedpart2]->ComponentNodeConnections++;
						 connect2 = 4;
						 count++;
					 }
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[1]->ComponentType==3)) // ComboBox2 Node
			 {
				 if(nodeRadioButton3->Checked==true)
				 {
					 part2x = componentsArray[1]->ComponentLocationX;
					 part2y = componentsArray[1]->ComponentLocationY;
					 nodeArray[selectedpart2]->ComponentNodeConnections++;
					 connect2 = 1;
					 count++;
				 }
			 }
			 if((process==true)&&(count<2)&&(componentsArray[1]->ComponentType==4)) // ComboBox2 Ground
			 {
				 if(nodeRadioButton3->Checked==true)
				 {
					 part2x = componentsArray[1]->ComponentLocationX;
					 part2y = componentsArray[1]->ComponentLocationY;
					 groundArray[0]->ComponentNodeConnections++;
					 connect2 = 1;
					 count++;
				 }
			 }
			 if(count==2)
			 {
				 if(componentsArray[0]->ComponentType==0)
				 {
					 voltageArray[selectedpart1]->ComponentConnectedArray[voltageArray[selectedpart1]->ComponentNodeConnections-1] = componentsArray[1];
					 voltageArray[selectedpart1]->ComponentConnectedNodeArray[voltageArray[selectedpart1]->ComponentNodeConnections-1,0] = connect1;
					 voltageArray[selectedpart1]->ComponentConnectedNodeArray[voltageArray[selectedpart1]->ComponentNodeConnections-1,1] = connect2;
				 }
				 if(componentsArray[0]->ComponentType==2)
				 {
					 resistorArray[selectedpart1]->ComponentConnectedArray[resistorArray[selectedpart1]->ComponentNodeConnections-1] = componentsArray[1];
					 resistorArray[selectedpart1]->ComponentConnectedNodeArray[resistorArray[selectedpart1]->ComponentNodeConnections-1,0] = connect1;
					 resistorArray[selectedpart1]->ComponentConnectedNodeArray[resistorArray[selectedpart1]->ComponentNodeConnections-1,1] = connect2;
				 }
				 if(componentsArray[0]->ComponentType==3)
				 {
					 nodeArray[selectedpart1]->ComponentConnectedArray[nodeArray[selectedpart1]->ComponentNodeConnections-1] = componentsArray[1];
					 nodeArray[selectedpart1]->ComponentConnectedNodeArray[nodeArray[selectedpart1]->ComponentNodeConnections-1,0] = connect1;
					 nodeArray[selectedpart1]->ComponentConnectedNodeArray[nodeArray[selectedpart1]->ComponentNodeConnections-1,1] = connect2;
				 }
				 if(componentsArray[0]->ComponentType==4)
				 {
					 groundArray[0]->ComponentConnectedArray[groundArray[0]->ComponentNodeConnections-1] = componentsArray[1];
					 groundArray[selectedpart1]->ComponentConnectedNodeArray[groundArray[selectedpart1]->ComponentNodeConnections-1,0] = connect1;
					 groundArray[selectedpart1]->ComponentConnectedNodeArray[groundArray[selectedpart1]->ComponentNodeConnections-1,1] = connect2;
				 }
				 if(componentsArray[1]->ComponentType==0)
				 {
					 voltageArray[selectedpart2]->ComponentConnectedArray[voltageArray[selectedpart2]->ComponentNodeConnections-1] = componentsArray[0];
					 voltageArray[selectedpart2]->ComponentConnectedNodeArray[voltageArray[selectedpart2]->ComponentNodeConnections-1,0] = connect2;
					 voltageArray[selectedpart2]->ComponentConnectedNodeArray[voltageArray[selectedpart2]->ComponentNodeConnections-1,1] = connect1;
				 }
				 if(componentsArray[1]->ComponentType==2)
				 {
					 resistorArray[selectedpart2]->ComponentConnectedArray[resistorArray[selectedpart2]->ComponentNodeConnections-1] = componentsArray[0];
					 resistorArray[selectedpart2]->ComponentConnectedNodeArray[resistorArray[selectedpart2]->ComponentNodeConnections-1,0] = connect2;
					 resistorArray[selectedpart2]->ComponentConnectedNodeArray[resistorArray[selectedpart2]->ComponentNodeConnections-1,1] = connect1;
				 }
				 if(componentsArray[1]->ComponentType==3)
				 {
					 nodeArray[selectedpart2]->ComponentConnectedArray[nodeArray[selectedpart2]->ComponentNodeConnections-1] = componentsArray[1];
					 nodeArray[selectedpart2]->ComponentConnectedNodeArray[nodeArray[selectedpart2]->ComponentNodeConnections-1,0] = connect2;
					 nodeArray[selectedpart2]->ComponentConnectedNodeArray[nodeArray[selectedpart2]->ComponentNodeConnections-1,1] = connect1;
				 }
				 if(componentsArray[1]->ComponentType==4)
				 {
					 groundArray[0]->ComponentConnectedArray[groundArray[0]->ComponentNodeConnections-1] = componentsArray[0];
					 groundArray[0]->ComponentConnectedNodeArray[groundArray[0]->ComponentNodeConnections-1,0] = connect2;
					 groundArray[0]->ComponentConnectedNodeArray[groundArray[0]->ComponentNodeConnections-1,1] = connect1;
				 }
				 Graphics^ myGraphics = CreateGraphics();
				 Pen^ myPen = gcnew Pen(Color::Black);
				 myGraphics->DrawLine(myPen,(part1x-1),(part1y-1),(part2x-1),(part2y-1));
				 pointArray[PointCount,0] = Point(part1x-1,(part1y-1));
				 pointArray[PointCount,1] = Point(part2x-1,(part2y-1));
				 PointCount++;
				 erase = true;
			 }
			 if(erase==true)
			 {
				 nodeRadioButton1->Checked = false;
			 	 nodeRadioButton2->Checked = false;
				 nodeRadioButton3->Checked = false;
				 nodeRadioButton4->Checked = false;
			 }
		 }
private: System::Void Workbench_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
		 {
			 int i;
			 Graphics^ myGraphics = CreateGraphics();
			 Pen^ myPen = gcnew Pen(Color::Black);
			 for(i=0;i<PointCount;i++)
			 {
				 myGraphics->DrawLine(myPen,pointArray[i,0]->X,pointArray[i,0]->Y,pointArray[i,1]->X,pointArray[i,1]->Y);
			 }
		 }
private: System::Void solveButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int i, j=0;
			 bool process = true;
			 TotalPartCount = VoltageCount+ResistorCount+NodeCount+GroundNodeCount;
			 array<Components^>^ finalArray = gcnew array<Components^>(TotalPartCount);
			 for(i=0;i<VoltageCount;i++)
			 {
				 finalArray[i] = voltageArray[i];
				 if((voltageArray[i]->ComponentTopNode==false)|(voltageArray[i]->ComponentBottomNode==false))
				 {
					 Windows::Forms::MessageBox::Show(L"Voltage Source not connected.",L"Connection Error");
					 process = false;
				 }
			 }
			 if(process==true)
			 {
				 for(i=0;i<ResistorCount;i++)
				 {
					 finalArray[VoltageCount+i] = resistorArray[i];
					 if((resistorArray[i]->ComponentTopNode==false)|(resistorArray[i]->ComponentBottomNode==false)|(resistorArray[i]->ComponentLeftNode==false)|(resistorArray[i]->ComponentRightNode==false))
					 {
						 Windows::Forms::MessageBox::Show(String::Concat(L"Resistor ",resistorArray[i]->ComponentName," not connected."),L"Connection Error");
						 process = false;
					 }
				 }
			 }
			 if(process==true)
			 {
				 if(GroundNodeCount==0)
				 {
					 Windows::Forms::MessageBox::Show(String::Concat(L"Ground Node not connected."),L"Connection Error");
					 process = false;
				 }
			 }
			 if(process==true)
			 {
				 for(i=0;i<NodeCount;i++)
				 {
					 finalArray[VoltageCount+ResistorCount+i] = nodeArray[i];
				 }
			 }
			 if(process==true)
			 {
				 for(i=0;i<GroundNodeCount;i++)
				 {
					 finalArray[VoltageCount+ResistorCount+NodeCount+i] = groundArray[i];
				 }
			 }

			 String^ netout = "Netlist\n\n";
			 String^ answerout = "\n\n\nVoltage / Current\n\n";
			 String^ output;
			 int k;
			 if(process==true)
			 {
				 Solution^ solution = gcnew Solution(TotalPartCount,NodeCount,VoltageCount,finalArray);
				 solution->SolutionFunction();
				 for(i=0;i<(solution->ComponentCount-solution->OriginalNodeCount-1);i++)
				 {
					 for(j=0;j<4;j++)
					 {
						 netout = String::Concat(netout,L"   ",solution->Netlist[i,j]);
						 if((j+1)%4==0)
							 netout = String::Concat(netout,L"\n");
					 }
				 }
				 for(i=0;i<(solution->TrueNodeCount);i++)
				 {
					 answerout = String::Concat(answerout,L"Voltage at Node ",(i+1).ToString(),L": ",(solution->AnswerMatrix[i,0]).ToString("F4"),L" V\n");
				 }
				 for(i, k=0;i<(solution->TrueNodeCount+solution->VoltageCount),k<(solution->VoltageCount);i++,k++)
				 {
					 answerout = String::Concat(answerout,L"Current through ",solution->J[k]->Remove(0,2),L": ",(solution->AnswerMatrix[i,0]).ToString("F4"),L" A\n");
				 }
				 output = String::Concat(netout,L"\n\n\n",answerout);
				 solutionOutputLabel->Text = output;
			 }
		 }
};
}