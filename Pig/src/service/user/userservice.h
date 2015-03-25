#ifndef USERSERVICE_H
#define USERSERVICE_H

#include "../../pigrequest.pb.h"
#include "../../pigresponse.pb.h"

using namespace Pig;

class UserService
{
public:
    UserService();
    ~UserService();

public:
    PigResponse normalRegister(PigRequest request);
    PigResponse fastRegister(PigRequest request);

    PigResponse thirdLogin(PigRequest request);
    PigResponse normalLogin(PigRequest request);
};

#endif // USERSERVICE_H
