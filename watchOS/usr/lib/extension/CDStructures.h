//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSISEngine, NSIndexSet, NSObject;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float width;
    float height;
};

struct InodeDevPair {
    int dev;
    unsigned long long inode;
};

struct NSEdgeInsets {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct NSSlice {
    void **items;
    _Bool wantsStrong;
    _Bool wantsWeak;
    _Bool wantsARC;
    _Bool shouldCopyIn;
    _Bool usesStrong;
    _Bool usesWeak;
    _Bool usesARC;
    _Bool usesSentinel;
    _Bool pointerPersonality;
    _Bool integerPersonality;
    _Bool simpleReadClear;
    CDUnknownFunctionPointerType sizeFunction;
    CDUnknownFunctionPointerType hashFunction;
    CDUnknownFunctionPointerType isEqualFunction;
    CDUnknownFunctionPointerType describeFunction;
    CDUnknownFunctionPointerType acquireFunction;
    CDUnknownFunctionPointerType relinquishFunction;
    CDUnknownFunctionPointerType allocateFunction;
    CDUnknownFunctionPointerType freeFunction;
    CDUnknownFunctionPointerType readAt;
    CDUnknownFunctionPointerType clearAt;
    CDUnknownFunctionPointerType storeAt;
};

struct _NSLTToken {
    unsigned short _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned int _field4;
    union {
        void *_field1;
        struct {
            unsigned char _field1;
            unsigned char _field2;
        } _field2;
    } _field5;
};

struct _NSOrderedChange;

struct _NSProgressFraction {
    long long completed;
    long long total;
    _Bool overflowed;
};

struct _NSProgressFractionTuple {
    struct _NSProgressFraction _field1;
    struct _NSProgressFraction _field2;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _NSRefCountedRunArray {
    struct os_unfair_lock_s _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct _NSRunArrayItem _field8[0];
};

struct _NSRunArrayItem {
    unsigned int _field1;
    id _field2;
};

struct _NSSimpleAttributeDictionaryElement {
    unsigned int hash;
    id key;
    id value;
};

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

struct _xmlDoc;

struct _xmlHashTable;

struct _xmlNode;

struct _xmlParserCtxt {
    struct _xmlSAXHandler *_field1;
    void *_field2;
    struct _xmlDoc *_field3;
    int _field4;
    int _field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    struct _xmlParserInput *_field10;
    int _field11;
    int _field12;
    struct _xmlParserInput **_field13;
    struct _xmlNode *_field14;
    int _field15;
    int _field16;
    struct _xmlNode **_field17;
    int _field18;
    struct _xmlParserNodeInfoSeq {
        unsigned long _field1;
        unsigned long _field2;
        struct _xmlParserNodeInfo *_field3;
    } _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    struct _xmlValidCtxt {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlNode *_field4;
        int _field5;
        int _field6;
        struct _xmlNode **_field7;
        unsigned int _field8;
        struct _xmlDoc *_field9;
        int _field10;
        struct _xmlValidState *_field11;
        int _field12;
        int _field13;
        struct _xmlValidState *_field14;
        struct _xmlAutomata *_field15;
        struct _xmlAutomataState *_field16;
    } _field26;
    int _field27;
    int _field28;
    char *_field29;
    char *_field30;
    int _field31;
    int _field32;
    char **_field33;
    long _field34;
    long _field35;
    int _field36;
    int _field37;
    int _field38;
    char *_field39;
    char *_field40;
    char *_field41;
    int *_field42;
    int _field43;
    int _field44;
    int *_field45;
    int _field46;
    struct _xmlParserInput *_field47;
    int _field48;
    int _field49;
    int _field50;
    int _field51;
    void *_field52;
    int _field53;
    int _field54;
    void *_field55;
    int _field56;
    int _field57;
    struct _xmlDict *_field58;
    char **_field59;
    int _field60;
    int _field61;
    char *_field62;
    char *_field63;
    char *_field64;
    int _field65;
    int _field66;
    int _field67;
    char **_field68;
    int *_field69;
    void **_field70;
    struct _xmlHashTable *_field71;
    struct _xmlHashTable *_field72;
    int _field73;
    int _field74;
    int _field75;
    int _field76;
    struct _xmlNode *_field77;
    int _field78;
    struct _xmlAttr *_field79;
    struct _xmlError {
        int _field1;
        int _field2;
        char *_field3;
        int _field4;
        char *_field5;
        int _field6;
        char *_field7;
        char *_field8;
        char *_field9;
        int _field10;
        int _field11;
        void *_field12;
        void *_field13;
    } _field80;
    int _field81;
    unsigned long _field82;
    unsigned long _field83;
    struct _xmlParserNodeInfo *_field84;
    int _field85;
    int _field86;
    struct _xmlParserNodeInfo *_field87;
    int _field88;
    unsigned long _field89;
};

struct _xmlParserInput {
    struct _xmlParserInputBuffer *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned long _field10;
    CDUnknownFunctionPointerType _field11;
    char *_field12;
    char *_field13;
    int _field14;
    int _field15;
};

struct _xmlParserNodeInfo;

struct _xmlSAXHandler {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    unsigned int _field28;
    void *_field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownFunctionPointerType _field31;
    CDUnknownFunctionPointerType _field32;
};

struct _xmlValidState;

struct addrinfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    char *_field6;
    struct sockaddr *_field7;
    struct addrinfo *_field8;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr;

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    int tv_sec;
    long tv_nsec;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    int _field5;
    id _field6;
    id _field7;
    id _field8;
} CDStruct_2b292156;

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    id _field1;
    void *_field2;
    long _field3;
} CDStruct_7cb3148a;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
} CDStruct_ea8e2ad1;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned int kind;
    NSObject *oldValue;
    NSObject *newValue;
    NSIndexSet *indexes;
    id extraData;
} CDStruct_26283fc3;

typedef struct {
    unsigned int offset;
    int type;
} CDStruct_23b1d588;

typedef struct {
    unsigned int value;
} CDStruct_fcd6c539;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    unsigned int :8;
    unsigned int :4;
    unsigned int :1;
    unsigned int :1;
    unsigned int :18;
    unsigned short _field1[8];
} CDStruct_5fe7aead;

typedef struct {
    float m11;
    float m12;
    float m21;
    float m22;
    float tX;
    float tY;
} CDStruct_a65eae4f;

typedef struct {
    int _field1;
    id _field2;
    id _field3;
} CDStruct_acc9a335;

typedef struct {
    int _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_60d14f2d;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
} CDStruct_77932685;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct CDStruct_183601bc;

typedef struct {
    NSISEngine *engine;
    CDStruct_183601bc *storage;
} CDStruct_a8d20eab;

typedef struct {
    _Bool extensionHidden;
    NSDate *creationDate;
    struct _fields {
        unsigned int extensionHidden:1;
        unsigned int creationDate:1;
        unsigned int reserved:30;
    } validFields;
} CDStruct_1b190c06;

typedef struct {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    CDStruct_183601bc *_field6;
} CDStruct_f5593f11;

typedef struct {
    CDStruct_183601bc *values;
    unsigned int key;
    unsigned int heap_position;
    unsigned short count;
    unsigned short capacity;
} CDStruct_f13cc9bb;

typedef struct {
    id objects;
    _Bool isMutable;
    struct {
        struct _NSOrderedChange *buffer;
        unsigned int availableIndex;
        unsigned int capacity;
        unsigned int changesIndex;
        unsigned int lastIndex;
        unsigned int count;
    } list;
} CDStruct_5c782e52;

typedef struct {
    CDStruct_183601bc *blocks;
    unsigned int blocksCount;
    unsigned int blocksCapacity;
    struct {
        union {
            unsigned long long _data;
            unsigned long long *_buckets;
        } ;
        unsigned int _bucketCount;
    } freeIndexes;
} CDStruct_e7e62876;

typedef struct {
    unsigned short inline_capacity;
    unsigned int var_count;
    double constant;
    union {
        struct {
            id stored_extern_marker;
            CDStruct_183601bc *slab;
            unsigned int capacity;
        } extern_data;
        struct {
            unsigned long aligner;
        } inline_slab;
        unsigned char padding[48];
    } data;
} CDStruct_b1b42f93;

