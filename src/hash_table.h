#ifndef __MDISTRIBUNTED_SYSTEM_LOCK_HASH_TABLE_H_
#define __MDISTRIBUNTED_SYSTEM_LOCK_HASH_TABLE_H_


#define HASH_TABLE_DEBUG

typedef unsigned int(*hash_table_hash_algorithm)(void *key,unsigned int key_len);

typedef struct hash_value hash_value;
typedef struct hash_slot hash_slot;
typedef struct hash_table hash_table;

struct hash_value {
    char *name;
    void *val;
    unsigned short is_del;
    struct hash_value *next;
};

#ifdef HASH_TABLE_DEBUG

struct hash_info {

    unsigned long hit_total;
    unsigned long miss_total;
    unsigned long insert_total;
    unsigned long remove_total;
};

#endif

struct hash_slot {

    int len;        //used len
    int real_len;   // real alloc memory
    hash_value  *head;

};

struct hash_table {

    unsigned int hash;

    hash_slot   *slots;

    hash_table_hash_algorithm hash_algorithm;

#ifdef HASH_TABLE_DEBUG

    struct hash_info    *debug_info;

#endif

};


hash_table  *hash_table_new(unsigned int slot_size);

unsigned int hash_table_insert(hash_table *table,const char *name,void *val,unsigned int val_len);

unsigned int hash_table_delete(hash_table *table,const char *name);

#endif