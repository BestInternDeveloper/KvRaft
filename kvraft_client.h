/* kvraft_client.h

 Generated by phxrpc_pb2client from kvraft.proto

*/

#pragma once

#include "kvraft.pb.h"
#include "phxrpc/rpc.h"


class KVRaftClient {
  public:
    static bool Init(const char *config_file);

    static const char *GetPackageName();

    KVRaftClient();
    virtual ~KVRaftClient();

    int PHXEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    int PHXBatchEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    int RequestVote(const kvraft::RequestVoteArgs &req, kvraft::RequestVoteReply *resp);
    int AppendEntries(const kvraft::AppendEntriesArgs &req, kvraft::AppendEntriesReply *resp);
    int Command(const kvraft::KVArgs &req, kvraft::KVReply *resp);
};

