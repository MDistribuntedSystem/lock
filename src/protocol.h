#ifndef __MDISTRIBUNTED_SYSTEM_LOCK_PROTOCOL_H_
#define __MDISTRIBUNTED_SYSTEM_LOCK_PROTOCOL_H_

#define MDS_LOCK_MAX_NAME_LENGTH 255

typedef struct mds_lock_protocol mds_lock_protocol;

struct mds_lock_protocol {

    unsigned int api;
    unsigned int name_len;
    char         name[MDS_LOCK_MAX_NAME_LENGTH];
    unsigned int ret;
};

#endif