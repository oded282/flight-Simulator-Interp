#ifndef FLIGHT_SIMULATOR_OPENDATASERVER_H
#define FLIGHT_SIMULATOR_OPENDATASERVER_H


#include <string>
#include "../expressions/Expression.h"
#include "Commands.h"
#include "../connection/dataReaderServer.h"

class openServerCommand : public Commands {

    dataReaderServer *readerServer;
public:
    //constructor.
    openServerCommand(mapCommand *commandMap, symbolTable *varTable, ShuntingYard *shuntingYard) :
            Commands(commandMap, varTable, shuntingYard) {
        this->readerServer = nullptr;
    }
    // set the command
    void setCommand(string &);
    // open server.
    virtual int execute();
    //destructor.
    ~openServerCommand(){
        delete readerServer;
    }
};

#endif //FLIGHT_SIMULATOR_OPENDATASERVER_H

