
#include <iostream>
#include <string>
using namespace std;

struct Budget {
	double gas_Car_Total = 26.00;
	int insurance = 100;
	int food = 250;

	double groceries_Cost = 0;
	int groceries_Trips = 0;

	double eating_Out_Cost = 0;
	int eating_Out_Trips = 0;
};

void GetFood(Budget& budget_Data, double& groceries_Average_Per_Trip, double& eating_Out_Average_Per_Trip, double& total_Spend, int& total_Trips)
{
	cout << "How much have you spend on Groceries this month?: $";
	cin >> budget_Data.groceries_Cost;

	cout << "How many trips did you make to the groceries this month?: ";
	cin >> budget_Data.groceries_Trips;

	cout << endl;

	cout << "How much have you spend on eating out this month?: $";
	cin >> budget_Data.eating_Out_Cost;

	cout << "How many eating out trips did you make?: ";
	cin >> budget_Data.eating_Out_Trips;

	cout << endl;

	// Outputs will be moved in BudgetTotals function
	groceries_Average_Per_Trip = budget_Data.groceries_Cost / budget_Data.groceries_Trips;
	cout << "Groceries Average Spend Per Trip: " << groceries_Average_Per_Trip << endl;

	eating_Out_Average_Per_Trip = budget_Data.eating_Out_Cost / budget_Data.eating_Out_Trips;
	cout << "Eating Out Average Spend Per Trip: " << eating_Out_Average_Per_Trip << endl;

	cout << endl;

	total_Spend = budget_Data.groceries_Cost + budget_Data.eating_Out_Cost;
	cout << "Total spend on food: $" << total_Spend << endl;

	total_Trips = budget_Data.groceries_Trips + budget_Data.eating_Out_Trips;
	cout << "Total Trips: " << total_Trips << endl;

	cout << endl;

}

int main()
{
	Budget budget_Data;

	double groceries_Average_Per_Trip;
	double eating_Out_Average_Per_Trip;
	double total_Spend;
	int total_Trips;
	GetFood(budget_Data, groceries_Average_Per_Trip, eating_Out_Average_Per_Trip, total_Spend, total_Trips);

	system("pause");
	return 0;
}