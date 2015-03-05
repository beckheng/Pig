#include <iostream>

#include "src/pigrequest.pb.h"

using namespace std;
using namespace Pig;

int main()
{
    cout << "Pig Run!" << endl;

    PigRequest *request = new PigRequest();
    string action = "hello world";
    request->set_action(action);
    request->set_body("helloobject");

    cout << request->SerializeAsString() << endl;

    delete request;

    return 0;
}
