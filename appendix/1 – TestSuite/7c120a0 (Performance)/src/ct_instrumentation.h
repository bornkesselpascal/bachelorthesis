#ifndef CT_INSTRUMENTATION_H
#define CT_INSTRUMENTATION_H

#include "custom_tester.h"
#include "test_description.h"
#include "test_results.h"
#include <atomic>
#include <string>
#include <thread>

class ct_instrumentation
{
public:
    virtual void start() = 0;
    virtual test_results get_results() = 0;
    std::string get_current_output() { return m_cti_output; }

protected:
    std::string m_cti_command;
    std::string m_cti_output;

    test_description m_description;
    test_results m_results;
};

class cti_client : public ct_instrumentation
{
public:
    cti_client(test_description description);
    void start() override;
    test_results get_results() override;

private:
    std::unique_ptr<std::thread> m_thread_ptr;
    custom_tester_description m_custom_description;
};

class cti_server : public ct_instrumentation
{
public:
    void start() override;
    void load_test(test_description description);
    test_results get_results() override;

private:
    std::unique_ptr<std::thread> m_thread_ptr;
    custom_tester_description m_custom_description;
};


#endif // CT_INSTRUMENTATION_H
