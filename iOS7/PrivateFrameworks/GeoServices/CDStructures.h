/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct DispatchTimer;

struct Entry;

struct ErrorInfo;

struct GEOFeatureShield {
    CDStruct_29923528 _field1;
    long long _field2;
};

struct GeoCoordinates {
    struct Longitude _field1;
    struct Latitude _field2;
};

struct GeometryPathElement;

struct Latitude {
    unsigned int _field1;
};

struct Longitude {
    unsigned int _field1;
};

struct Message;

struct Path<std::__1::shared_ptr<geo::MapEdge>> {
    struct GeoCoordinates _field1;
    struct GeoCoordinates _field2;
    struct vector<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>, std::__1::allocator<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>>> _field3;
    struct vector<zilch::GeometryPathElement, std::__1::allocator<zilch::GeometryPathElement>> _field4;
    struct vector<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry, std::__1::allocator<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry>> _field5;
};

struct PolylineCoordinate {
    unsigned int _field1;
    float _field2;
};

struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>;

struct Vec2Imp<float> {
    float x;
    float y;
};

struct ZilchMapModel;

struct _GEOTileKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int type:6;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
    unsigned int provider:8;
    unsigned int expires:1;
    unsigned int reserved1:7;
    unsigned char reserved2[4];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __hash_node<GEORoadEdge, void *>;

struct __hash_node<_GEOTileKey, void *>;

struct __hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>;

struct __hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>;

struct __list_iterator<LoadItem, void *> {
    struct __list_node<LoadItem, void *> *_field1;
};

struct __list_node<CacheItem, void *>;

struct __list_node<LoadItem, void *>;

struct __list_node<ShrinkCacheRequester, void *>;

struct deque<ErrorInfo, std::__1::allocator<ErrorInfo>> {
    struct __split_buffer<ErrorInfo *, std::__1::allocator<ErrorInfo *>> {
        struct ErrorInfo **__first_;
        struct ErrorInfo **__begin_;
        struct ErrorInfo **__end_;
        struct __compressed_pair<ErrorInfo **, std::__1::allocator<ErrorInfo *>> {
            struct ErrorInfo **__first_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<ErrorInfo>> {
        unsigned long long __first_;
    } __size_;
};

struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge>> {
    struct __split_buffer<GEORoadEdge *, std::__1::allocator<GEORoadEdge *>> {
        CDStruct_183601bc **__first_;
        CDStruct_183601bc **__begin_;
        CDStruct_183601bc **__end_;
        struct __compressed_pair<GEORoadEdge **, std::__1::allocator<GEORoadEdge *>> {
            CDStruct_183601bc **__first_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<GEORoadEdge>> {
        unsigned long long __first_;
    } __size_;
};

struct list<CacheItem, std::__1::allocator<CacheItem>> {
    struct __list_node_base<CacheItem, void *> {
        struct __list_node<CacheItem, void *> *__prev_;
        struct __list_node<CacheItem, void *> *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<CacheItem, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct list<LoadItem, std::__1::allocator<LoadItem>> {
    struct __list_node_base<LoadItem, void *> {
        struct __list_node<LoadItem, void *> *__prev_;
        struct __list_node<LoadItem, void *> *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<LoadItem, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct list<ShrinkCacheRequester, std::__1::allocator<ShrinkCacheRequester>> {
    struct __list_node_base<ShrinkCacheRequester, void *> {
        struct __list_node<ShrinkCacheRequester, void *> *__prev_;
        struct __list_node<ShrinkCacheRequester, void *> *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ShrinkCacheRequester, void *>>> {
        unsigned long long __first_;
    } __size_alloc_;
};

struct map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData>>> {
    struct __tree<std::__1::pair<unsigned int, _GEOAltitudeTriggerData>, std::__1::__map_value_compare<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, _GEOAltitudeTriggerData>>> {
        struct __tree_node<std::__1::pair<unsigned int, _GEOAltitudeTriggerData>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, _GEOAltitudeTriggerData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *__left_;
            } __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct shared_ptr<zilch::Message> {
    struct Message *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> {
    struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer>> {
        struct DispatchTimer *__first_;
    } __ptr_;
};

struct unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel>> {
    struct __compressed_pair<geo::ZilchMapModel *, std::__1::default_delete<geo::ZilchMapModel>> {
        struct ZilchMapModel *__first_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<GEORoadEdge, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<GEORoadEdge, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *>*>>> {
        struct __hash_node<GEORoadEdge, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<_GEOTileKey, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<_GEOTileKey, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>*>>> {
        struct __hash_node<_GEOTileKey, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*>>> {
        struct __hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*>>> {
        struct __hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData>>> {
    struct __hash_table<std::__1::pair<_GEOTileKey, UsageData>, std::__1::__unordered_map_hasher<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, true>, std::__1::__unordered_map_equal<_GEOTileKey, UsageData, std::__1::equal_to<GEOTileKey>, true>, std::__1::allocator<std::__1::pair<_GEOTileKey, UsageData>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *>*> {
                struct __hash_node<std::__1::pair<_GEOTileKey, UsageData>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, UsageData, std::__1::equal_to<GEOTileKey>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>>> {
    struct __hash_table<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, eqkey, true>, std::__1::allocator<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *>*> {
                struct __hash_node<std::__1::pair<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, eqkey, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge>> {
    struct __hash_table<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge>> {
        struct unique_ptr<std::__1::__hash_node<GEORoadEdge, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *>*>, std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *>*> {
                struct __hash_node<GEORoadEdge, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<GEORoadEdge>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<GEORoadEdge>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey>> {
    struct __hash_table<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey>> {
        struct unique_ptr<std::__1::__hash_node<_GEOTileKey, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *>*>, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *>*> {
                struct __hash_node<_GEOTileKey, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<GEOTileKey>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<GEOTileKey>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<zilch::GeometryPathElement, std::__1::allocator<zilch::GeometryPathElement>> {
    struct GeometryPathElement *_field1;
    struct GeometryPathElement *_field2;
    struct __compressed_pair<zilch::GeometryPathElement *, std::__1::allocator<zilch::GeometryPathElement>> {
        struct GeometryPathElement *_field1;
    } _field3;
};

struct vector<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry, std::__1::allocator<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry>> {
    struct Entry *_field1;
    struct Entry *_field2;
    struct __compressed_pair<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry *, std::__1::allocator<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry>> {
        struct Entry *_field1;
    } _field3;
};

struct vector<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>, std::__1::allocator<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>>> {
    struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge>> *_field1;
    struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge>> *_field2;
    struct __compressed_pair<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>*, std::__1::allocator<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>>> {
        struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge>> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    char *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned int _field7;
    unsigned long long _field8;
    _Bool _field9;
    unsigned long long _field10;
    float _field11;
    id _field12;
    int _field13;
} CDStruct_283a3ada;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
} CDStruct_d66e66b9;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned int _field1;
    double _field2;
} CDStruct_e4886f83;

typedef struct {
    unsigned long long _high;
    unsigned long long _low;
} CDStruct_612aec5b;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1;
    double _field2;
    unsigned long long _field3;
} CDStruct_96e0509c;

typedef struct {
    unsigned short _field1;
} CDStruct_f6a177db;

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

typedef struct {
    unsigned long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_62a50c50;

typedef struct {
    char *_field1;
    char *_field2;
    unsigned int _field3;
} CDStruct_29923528;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

typedef struct {
    long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_5df41632;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int _beginIndex;
    int _endIndex;
    int _stringType;
} CDStruct_0756942c;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned char _field1;
    struct {
        char *_field1;
        unsigned long long _field2;
        unsigned long long _field3;
    } _field2;
    _Bool _field3;
    char *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
} CDStruct_f3ac0f61;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDStruct_183601bc *_field5;
} CDStruct_dde70fb6;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field5;
} CDStruct_3f74b7eb;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    CDStruct_8a1bf2a3 _field4;
} CDStruct_97e972fa;

typedef struct {
    unsigned int _field1;
    int _field2;
    CDStruct_d7010776 _field3;
} CDStruct_8f5f9923;

typedef struct {
    CDStruct_183601bc *road;
    unsigned long long vertexIndexA;
    unsigned long long vertexIndexB;
    unsigned long long junctionIndexA;
    unsigned long long junctionIndexB;
    CDStruct_183601bc *junctionA;
    CDStruct_183601bc *junctionB;
} CDStruct_f8e839fc;

typedef struct {
    CDStruct_183601bc *_field1;
    unsigned long long _field2;
    unsigned short _field3;
    unsigned int _field4;
    char *_field5;
    unsigned long long _field6;
    struct {
        unsigned int _field1;
        _Bool _field2;
    } _field7;
} CDStruct_effb527d;

typedef struct {
    CDStruct_183601bc *_field1;
    unsigned long long _field2;
    struct _NSRange *_field3;
    unsigned long long _field4;
} CDStruct_bdb97a7c;

typedef struct {
    double _field1;
    unsigned int _field2;
    CDStruct_d7010776 _field3;
} CDStruct_7659fad3;

typedef struct {
    double _x;
    double _y;
    int _z;
    struct {
        unsigned int z:1;
    } _has;
} CDStruct_bddcf505;

typedef struct {
    double _time;
    int _type;
    struct {
        unsigned int time:1;
        unsigned int type:1;
    } _has;
} CDStruct_4db06779;

typedef struct {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    int _field6;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field7;
} CDStruct_bf9e66ee;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    CDStruct_8a1bf2a3 _field4;
} CDStruct_e02beb0c;

typedef struct {
    int _field1;
    int _field2;
    CDStruct_d7010776 _field3;
} CDStruct_c55e649d;

typedef struct {
    CDStruct_283a3ada _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    int _field5;
    int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } _field9;
    CDStruct_183601bc *_field10;
    struct {
        unsigned short _field1[2];
        unsigned short _field2[2];
    } _field11;
    unsigned char _field12;
} CDStruct_4d3e1879;

typedef struct {
    CDStruct_283a3ada _field1;
    char *_field2;
    unsigned long long _field3;
} CDStruct_9c9be310;

typedef struct {
    CDStruct_283a3ada _field1;
    CDStruct_b2fbf00d _field2;
    unsigned char _field3;
    char _field4;
    char _field5;
    CDStruct_183601bc *_field6;
} CDStruct_605af631;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    double _field2;
    double _field3;
} CDStruct_e4d5fc44;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_90e2a262;

typedef struct {
    struct PolylineCoordinate _field1;
    struct PolylineCoordinate _field2;
} CDStruct_6b42e521;

typedef struct {
    CDStruct_7523a67d _field1;
    struct {
        unsigned int _field1;
        int _field2;
        float _field3;
        _Bool _field4;
        _Bool _field5;
        _Bool _field6;
        _Bool _field7;
        _Bool _field8;
        struct {
            unsigned char _field1;
            unsigned short _field2;
        } _field9[16];
    } _field2;
} CDStruct_db2bd8f2;

typedef struct {
    CDStruct_4d3e1879 _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    _Bool _field4;
} CDStruct_128d788e;

typedef struct {
    CDStruct_4d3e1879 _field1;
    CDStruct_b2fbf00d _field2;
    _Bool _field3;
    unsigned long long _field4;
    unsigned long long _field5;
} CDStruct_6532d03c;

// Ambiguous groups
typedef struct {
    unsigned int errorCode:1;
    unsigned int occurrenceResponseIndex:1;
    unsigned int occurrenceStepIndex:1;
    unsigned int switchedToResponseIndex:1;
    unsigned int synthesizedStepManeuverType:1;
    unsigned int type:1;
} CDStruct_c516b0c7;

typedef struct {
    unsigned int problematicEventIndex:1;
    unsigned int problematicResponseIndex:1;
    unsigned int problematicStepIndex:1;
} CDStruct_d18ab72a;

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_8a1bf2a3;

typedef struct {
    unsigned int :1;
    unsigned int :1;
} CDStruct_d7010776;

typedef struct {
    unsigned int photoType:1;
} CDStruct_86c1f53f;

typedef struct {
    unsigned int status:1;
} CDStruct_47fe53f2;

typedef struct {
    unsigned int statusCode:1;
} CDStruct_bcb1eac0;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

typedef struct Path<std::__1::shared_ptr<geo::MapEdge>> {
    struct GeoCoordinates _field1;
    struct GeoCoordinates _field2;
    struct vector<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>, std::__1::allocator<zilch::RoadPathElement<std::__1::shared_ptr<geo::MapEdge>>>> _field3;
    struct vector<zilch::GeometryPathElement, std::__1::allocator<zilch::GeometryPathElement>> _field4;
    struct vector<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry, std::__1::allocator<zilch::Path<std::__1::shared_ptr<geo::MapEdge>>::Entry>> _field5;
} Path_7b702847;

typedef struct Vec2Imp<float> {
    float x;
    float y;
} Vec2Imp_1782d7e3;

typedef struct __list_iterator<LoadItem, void *> {
    struct __list_node<LoadItem, void *> *_field1;
} __list_iterator_d839716a;

typedef struct shared_ptr<zilch::Message> {
    struct Message *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_27244a92;

typedef struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey>> {
    struct __hash_table<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey>> {
        struct unique_ptr<std::__1::__hash_node<_GEOTileKey, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *>*>, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *>*> {
                struct __hash_node<_GEOTileKey, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<GEOTileKey>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<GEOTileKey>> {
            float __first_;
        } __p3_;
    } __table_;
} unordered_set_4cb294f7;

