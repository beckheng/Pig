#include "userservice.h"

#include "../../pig-code/statuscode.h"

UserService::UserService()
{

}

UserService::~UserService()
{

}

PigResponse UserService::normalRegister(PigRequest request)
{
    PigResponse rep;
    rep.set_status(StatusCode::RESP_200);

    return rep;
}

PigResponse UserService::fastRegister(PigRequest request)
{
    PigResponse rep;
    rep.set_status(StatusCode::RESP_200);

    return rep;
}

PigResponse UserService::thirdLogin(PigRequest request)
{
    PigResponse rep;
    rep.set_status(StatusCode::RESP_200);

    return rep;
}

PigResponse UserService::normalLogin(PigRequest request)
{
    PigResponse rep;
    rep.set_status(StatusCode::RESP_200);
    rep.set_data("I'm going to login now");

    return rep;
}

