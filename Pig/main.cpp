#include <iostream>

#include "src/pigrequest.pb.h"

#include "src/pigrouter.h"

using namespace std;
using namespace Pig;

int main()
{
    cout << "Pig Run!" << endl;

    PigRouter::registerRoute();

    PigRequest request;
    string action = "/user/register";
    request.set_action(action);

    cout << request.SerializeAsString() << endl;

    PigResponse rep = PigRouter::dispatch(request);
    cout << rep.SerializeAsString() << endl;

    action = "haha";
    request.set_action(action);

    rep = PigRouter::dispatch(request);
    cout << rep.SerializeAsString() << endl;

    action = "/user/login";
    request.set_action(action);

    rep = PigRouter::dispatch(request);
    cout << rep.status() << " " << rep.SerializeAsString() << endl;

    return 0;
}
