#include "pigrouter.h"

#include "service/user/userservice.h"

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
    response.set_status(404);

    return response;
}
