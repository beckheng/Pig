#ifndef STATUSCODE_H
#define STATUSCODE_H


class StatusCode
{
public:
    StatusCode();
    ~StatusCode();

public:
    enum
    {
        RESP_200 = 200,
        RESP_404 = 404
    };
};

#endif // STATUSCODE_H
