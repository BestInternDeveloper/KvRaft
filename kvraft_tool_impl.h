/* kvraft_tool_impl.h

 Generated by phxrpc_pb2tool from kvraft.proto

*/

#pragma once

#include "phxrpc_kvraft_tool.h"


namespace phxrpc {


class OptMap;


}


class KVRaftToolImpl : public KVRaftTool {
  public:
    KVRaftToolImpl();
    virtual ~KVRaftToolImpl() override;

    virtual int PHXEcho(phxrpc::OptMap &opt_map) override;
    virtual int RequestVote(phxrpc::OptMap &opt_map) override;
    virtual int AppendEntries(phxrpc::OptMap &opt_map) override;
    virtual int Command(phxrpc::OptMap &opt_map) override;
};
