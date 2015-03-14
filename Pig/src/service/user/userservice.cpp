#include "userservice.h"

UserService::UserService()
{

}

UserService::~UserService()
{

}

PigResponse UserService::test(PigRequest request)
{
 PigResponse rep;

 rep.set_status(200);
 rep.set_data("haha, now u c me?");

 return rep;
}

