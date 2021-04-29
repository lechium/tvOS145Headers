/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_CT3;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>>;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, void *>>>;

typedef struct _tree<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>, std::__1::allocator<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>> __pair3_;
} tree<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>, std::__1::allocator<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>>>;

typedef struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::__1::less<__unsafe_unretained id>, std::__1::allocator<std::__1::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>> {
	tree<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>, std::__1::allocator<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>>> __tree_;
} map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::__1::less<__unsafe_unretained id>, std::__1::allocator<std::__1::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>>;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct {
	BOOL field1;
	BOOL field2;
} SCD_Struct_Co10;

typedef struct network_usage_policy_client_s* network_usage_policy_client_sRef;

