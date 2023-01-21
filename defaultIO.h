#pragma once
#include <string>
#include<iostream>
#include <string.h>
#include <fstream>
#include <vector>
using namespace std;
class DefaultIO {
public:
    DefaultIO() {}
    virtual ~DefaultIO() {}
    virtual string read() { return ""; };
    virtual string readLine() { return ""; };
    virtual void write(string text) {};
    virtual void writeLine(string text) {};
    virtual void readAndFile(string name) {};
    int socketID;
};

class StandardIO: public DefaultIO {
public:
    virtual string read();
    virtual void write(string text);
};

class SocketIO : public DefaultIO{
public:

    SocketIO(int clientid);

    virtual string read();
    virtual string readLine();

    virtual void write(string text);
    virtual void writeLine(string text);
};