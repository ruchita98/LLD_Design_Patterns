#include <iostream>
#include <string>

using namespace std;

class XMLData {
    private:
        string xmlData;
    public:
        XMLData(string pXMLData)
        {
            this -> xmlData = pXMLData;
        }

        string getXMLData() {
            return xmlData;
        }
};

class DataAnalyticsTool {
        string jsonData;
    public:
        DataAnalyticsTool () {}
        DataAnalyticsTool(string pJSONData)
        {
            jsonData = pJSONData;
        }

        virtual void AnalyzeData() {
            cout << "Analyzing data " << jsonData << endl;
        }

};

// complies to DataAnalyticsTool for abstracting it out for client or the consumer of DataAnalyticsTool
class Adapter: public DataAnalyticsTool {
    private:

    XMLData* xmlData;

    public:
    Adapter(XMLData* pXMLData)
    {
        xmlData = pXMLData;
    }
    // overiding parent class's virtual function
    void AnalyzeData() {
        cout << "First converting XML data " << xmlData -> getXMLData() << endl;
        DataAnalyticsTool::AnalyzeData();
    }

};

class Client {
    public:
        static void processData(DataAnalyticsTool* tool) {
            tool -> AnalyzeData();
        }
};

int main()
{
    XMLData* xmlData = new XMLData("Sample XML Data");

    DataAnalyticsTool* tool = new Adapter(xmlData);
    
    // client implementation won't chage
    Client::processData(tool);
}