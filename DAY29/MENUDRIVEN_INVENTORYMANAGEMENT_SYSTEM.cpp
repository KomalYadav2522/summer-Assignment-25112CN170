#include <iostream>
#include <string>
using namespace std;
//Product class
class Product
{
public:
    int id;
    string name;
    int quantity;
    float price;
};
int main()
{
    Product p[100];
    int totalProducts = 0;
    int choice;
    while(true)
    {
        cout << "\n========== INVENTORY MANAGEMENT SYSTEM ==========";

        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Product";
        cout << "\n5. Delete Product";
        cout << "\n6. Exit";

        cout << "\nEnter Choice : ";
        cin >> choice;
        switch(choice)
        {
        //Add Product
        case 1:
        {
            cout << "\nEnter Product ID : ";
            cin >> p[totalProducts].id;

            cin.ignore();

            cout << "Enter Product Name : ";
            getline(cin, p[totalProducts].name);

            cout << "Enter Quantity : ";
            cin >> p[totalProducts].quantity;

            cout << "Enter Price : ";
            cin >> p[totalProducts].price;

            totalProducts++;

            cout << "\nProduct Added Successfully.";

            break;
        }
        //Display Products
        case 2:
        {
            if(totalProducts == 0)
            {
                cout << "\nNo Products Available.";
            }
            else
            {
                for(int i = 0; i < totalProducts; i++)
                {
                    cout << "\n----------------------------";

                    cout << "\nProduct ID : " << p[i].id;

                    cout << "\nProduct Name : " << p[i].name;

                    cout << "\nQuantity : " << p[i].quantity;

                    cout << "\nPrice : " << p[i].price;

                    cout << "\n----------------------------";
                }
            }
            break;
        }
        //Search Product
        case 3:
        {
            int id;
            bool found = false;
            cout << "\nEnter Product ID : ";
            cin >> id;

            for(int i = 0; i < totalProducts; i++)
            {
                if(p[i].id == id)
                {
                    cout << "\nProduct Found";

                    cout << "\nName : " << p[i].name;

                    cout << "\nQuantity : " << p[i].quantity;

                    cout << "\nPrice : " << p[i].price;

                    found = true;

                    break;
                }
            }
            if(!found)
            {
                cout << "\nProduct Not Found.";
            }
            break;
        }
        //Update Product
        case 4:
        {
            int id;
            bool found = false;
            cout << "\nEnter Product ID : ";
            cin >> id;

            for(int i = 0; i < totalProducts; i++)
            {
                if(p[i].id == id)
                {
                    cin.ignore();

                    cout << "Enter New Product Name : ";
                    getline(cin, p[i].name);

                    cout << "Enter New Quantity : ";
                    cin >> p[i].quantity;

                    cout << "Enter New Price : ";
                    cin >> p[i].price;

                    cout << "\nProduct Updated Successfully.";

                    found = true;

                    break;
                }
            }
            if(!found)
            {
                cout << "\nProduct Not Found.";
            }
            break;
        }
        //Delete Product
        case 5:
        {
            int id;
            bool found = false;
            cout << "\nEnter Product ID : ";
            cin >> id;

            for(int i = 0; i < totalProducts; i++)
            {
                if(p[i].id == id)
                {
                    for(int j = i; j < totalProducts - 1; j++)
                    {
                        p[j] = p[j + 1];
                    }

                    totalProducts--;

                    cout << "\nProduct Deleted Successfully.";

                    found = true;

                    break;
                }
            }
            if(!found)
            {
                cout << "\nProduct Not Found.";
            }
            break;
        }
        //Exit
        case 6:
        {
            cout << "\nThank You!";
            return 0;
        }
        default:
        {
            cout << "\nInvalid Choice.";
        }
        }
    }
    return 0;
}