#include "pigrouter.h"

#include "service/user/userservice.h"

#include "pig-code/statuscode.h"

map<string, function<PigResponse(PigRequest)> > PigRouter::router;

PigRouter::PigRouter()
{

}

PigRouter::~PigRouter()
{

}

void PigRouter::registerRoute()
{
   router.insert(SERVICE_MAP("/user/register", UserService, test));
   router.insert(SERVICE_MAP("/user/login", UserService, login));
}

PigResponse PigRouter::dispatch(const PigRequest &request)
{
    function<PigResponse(PigRequest)> callback = router[request.action()];

    if (callback)
    {
        return callback(request);
    }
    else
    {
        return notFoundResponse();
    }
}

PigResponse PigRouter::notFoundResponse()
{
    PigResponse response;
    response.set_status(StatusCode::RESP_404);
    response.set_data("Not Found");

    return response;
}
