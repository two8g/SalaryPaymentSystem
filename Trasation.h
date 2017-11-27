//
// Created by two8g on 17-11-27.
//

#ifndef TRASATION_H
#define TRASATION_H

class Transaction {
public:
    virtual ~Transaction();

    virtual void Execute() = 0;
};

#endif //TRASATION_H
