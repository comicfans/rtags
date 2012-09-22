#ifndef TestJob_h
#define TestJob_h

#include "Path.h"
#include "Job.h"

class TestJob : public Job
{
public:
    TestJob(const Path &path);
protected:
    virtual void run();
private:
    const Path path;
};

#endif
