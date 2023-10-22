#include <iostream>
#include <string>
using namespace std;

class IButton {
    // pure abstract class or interface
    public:
        virtual void press() = 0;
};

class MacButton : public IButton {
    public:
        void press() {
            cout << "Mac button is pressed" << endl;
        }
};

class WindowsButton : public IButton {
    public:
        void press() {
            cout << "Windows button is pressed" << endl;
        }
};

class ITextBox {
    // interface
    public:
        virtual void showText(string text) = 0;
};

class MacTextBox: public ITextBox {
    public:
        void showText(string text) {
            cout << "Mac TextBox is showing " << text << endl;
        }
};

class WindowsTextBox: public ITextBox {
    public:
        void showText(string text) {
            cout << "Windows TextBox is showing " << text << endl;
        }
};

class IFactory {
    // pure abstract class
    public:
        virtual IButton* createButton() = 0;
        virtual ITextBox* createTextBox() = 0;
};

class MacFactory: public IFactory {
    // concrete class
    public:
        IButton* createButton() {
            return new MacButton();
        }

        ITextBox* createTextBox() {
            return new MacTextBox();
        }
};

class WindowsFactory: public IFactory {
    // concrete class
    public:
        IButton* createButton() {
            return new WindowsButton();
        }

        ITextBox* createTextBox() {
            return new WindowsTextBox();
        }
};

class GUIAbstractFactory {
    public:
        static IFactory* CreateFactory(string osType) {
            if(osType == "mac")
            {
                return new MacFactory();
            } else if (osType == "windows")
            {
                return new WindowsFactory();
            }
            // default factory

            return new MacFactory();
        }
};


int main()
{
    cout<< "Enter your machine os" << endl;
    string osType;
    cin >> osType;

    IFactory* factory = GUIAbstractFactory::CreateFactory(osType);

    IButton* button = factory -> createButton();
    button -> press();

    ITextBox* textBox = factory -> createTextBox();
    textBox -> showText("Dummy Text");

    return 0;
}