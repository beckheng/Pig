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
    PigResponse test(PigRequest request);
    PigResponse login(PigRequest request);
};

#endif // USERSERVICE_H
