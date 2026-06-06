#include "File.h"
#include "iostream"

BaseFile::BaseFile(const string& name, Node* parent)
    : Node(name, parent) {
}

BaseFile::~BaseFile() {}

void BaseFile::display() const {
    cout << "File: " << name << endl;
}

void BaseFile::open() {
    cout << "Opening " << name << endl;
}