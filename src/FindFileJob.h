#ifndef FindFileJob_h
#define FindFileJob_h

#include <ByteArray.h>
#include <List.h>
#include "RTags.h"
#include "Job.h"
#include "Location.h"
#include "RegExp.h"

class GRTags;
class FindFileJob : public Job
{
public:
    FindFileJob(const QueryMessage &query, const shared_ptr<Project> &project);
protected:
    virtual void run();
private:
    ByteArray mPattern;
    RegExp mRegExp;
};

#endif
