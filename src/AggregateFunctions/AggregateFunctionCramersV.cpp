#include <AggregateFunctions/AggregateFunctionFactory.h>
#include <AggregateFunctions/AggregateFunctionCramersV.h>


namespace ErrorCodes
{
    extern const int NOT_IMPLEMENTED;
}

namespace DB
{
    namespace
    {

        AggregateFunctionPtr createAggregateFunctionCramersV(const std::string &, const DataTypes & argument_types, const Array &)
        {
            return std::make_shared<AggregateFunctionCramersV>(argument_types);
        }

    }


    void registerAggregateFunctionCramersV(AggregateFunctionFactory & factory)
    {
        factory.registerFunction("cramersV", createAggregateFunctionCramersV);
    }

}
