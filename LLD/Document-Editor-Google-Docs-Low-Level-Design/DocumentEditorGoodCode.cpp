#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// interface or abstract class
class DocumentElement
{
public:
    virtual string render() = 0; // virtual method
};

class TextElement : public DocumentElement
{
private:
    string text;

public:
    TextElement(string txt)
    {
        this->text = txt;
    }

    string render() override
    {
        return text;
    }
};

class ImageElement : public DocumentElement
{
private:
    string imagePath;

public:
    ImageElement(string imagepath)
    {
        this->imagePath = imagepath;
    }

    string render() override
    {
        return "[Image: " + this->imagePath + "]";
    }
};

class NewLineElement : public DocumentElement
{
public:
    string render() override
    {
        return "\n";
    }
};

class TabSpaceElement : public DocumentElement
{
public:
    string render() override
    {
        return "\t";
    }
};

class Document
{
private:
    vector<DocumentElement *> documentElements;

public:
    void addElement(DocumentElement *element)
    {
        documentElements.emplace_back(element);
    }

    string render()
    {
        string result;
        for (auto element : documentElements)
        {
            result += element->render();
        }
        return result;
    }
};

// abstract class
class Persistence
{
public:
    virtual void save(string data) = 0;
};

class FileStorage : public Persistence
{
public:
    void save(string data) override
    {
        ofstream outFile("document.txt");
        if (outFile)
        {
            outFile << data; // put the data into the file
            outFile.close(); // close the file
            cout << "Document saved to file document.txt" << endl;
        }
        else
        {
            cout << "Error: Failed to save document to file" << endl;
        }
    }
};

class DBStorage : public Persistence
{
public:
    void save(string data) override
    {
        cout << "Document saved to database" << endl;
    }
};

class DocumentEditor
{
private:
    Document *doc;
    Persistence *storage;
    string renderedDoc;

public:
    DocumentEditor(Document *doc, Persistence *storage)
    {
        this->doc = doc;
        this->storage = storage;
    }

    void addText(string text)
    {
        doc->addElement(new TextElement(text));
    }

    void addImage(string imagePath)
    {
        doc->addElement(new ImageElement(imagePath));
    }

    void addNewLine()
    {
        doc->addElement(new NewLineElement());
    }

    void addTabSpace()
    {
        doc->addElement(new TabSpaceElement());
    }

    string renderDocument()
    {
        if (renderedDoc.empty())
        {
            renderedDoc = doc->render();
        }
        return renderedDoc;
    }

    void saveDcoument()
    {
        storage->save(renderDocument());
    }
};

int main()
{
    Document *doc = new Document();
    Persistence *storage = new FileStorage();

    DocumentEditor *editor = new DocumentEditor(doc, storage);
    editor->addText("I am Srijoy.");
    editor->addNewLine();
    editor->addText("I am a software developer.");
    editor->addNewLine();
    editor->addTabSpace();
    editor->addText("Indented text.");
    editor->addNewLine();
    editor->addImage("profile-pic.png");

    cout << editor->renderDocument() << endl;
    editor->saveDcoument();
}