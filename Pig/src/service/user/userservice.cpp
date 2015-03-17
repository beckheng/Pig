#include "userservice.h"

#include "../../pig-code/statuscode.h"

UserService::UserService()
{

}

UserService::~UserService()
{

}

PigResponse UserService::test(PigRequest request)
{
 PigResponse rep;

 rep.set_status(StatusCode::RESP_200);
 rep.set_data("haha, now u c me?");

 return rep;
}

PigResponse UserService::login(PigRequest request)
{
    PigResponse rep;
    rep.set_status(StatusCode::RESP_200);
    rep.set_data("I'm going to login now");

    return rep;
}

