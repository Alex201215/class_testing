#include <iostream>

class ClasseTest {
public:
    int myVariable;
    float myFloatVariable;
    int password = 12345;

    void FirstClassFunction() {
        
        int passwordEntered = 0;
        std::cout<< "myVariable = " << myVariable << std::endl
            << "myFloatVariable = " << myFloatVariable << std::endl
            << "Now to access private data, enter your password: ";

        std::cin >> passwordEntered;
        if (passwordEntered == password) {
            PrivateFunction();
        }
        else {
            std::cout << "The password you entered is incorrect." << std::endl;
            return;
        }
    }

    int *GetVariableAddress(int variable) {
        int* variablePointer = &variable;
        return variablePointer;
    }


private:
    int secretInt = 6;
    float secretFloat = 6.66f;

    void PrivateFunction() {
        std::cout << "This function is private !" << std::endl
            << "Here are the private variables associated with it: "
            << std::endl << "secretInt = " << secretInt << std::endl
            << "secretFloat = " << secretFloat;
    }
};

int main()
{
    ClasseTest premiereClasse;

    premiereClasse.myVariable = 5;
    premiereClasse.myFloatVariable = 2.55f;
    premiereClasse.FirstClassFunction();

    /* 
     * Removing comment from the following line will generate
     * an error since private data is not accessible outside the
     * scope of a class.
     */

    // std::cout << "The secret integer is : << premiereClasse.secretInt << std::endl;

    return 0;
}
