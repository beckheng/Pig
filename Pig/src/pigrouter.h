#ifndef PIGROUTER_H
#define PIGROUTER_H

#include "pigrequest.pb.h"
#include "pigresponse.pb.h"

#include <string>
#include <map>
#include <functional>

using namespace std;
using namespace Pig;

#define SERVICE_MAP(__action__,__className__,__method__) make_pair(__action__, [](PigRequest request){ __className__ s; return s.__method__(request); })

class PigRouter
{
public:
    PigRouter();
    ~PigRouter();

    static void registerRoute();
    static PigResponse dispatch(const PigRequest &request);

private:
    static PigResponse notFoundResponse();

private:
    static map<string, function<PigResponse(PigRequest)> > router;
};

#endif // PIGROUTER_H
