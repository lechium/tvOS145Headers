/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_agent.h>

@protocol OS_dispatch_queue, OS_dispatch_data, OS_nw_context, OS_nw_nexus, OS_nw_dictionary, OS_nw_fd_wrapper, OS_dispatch_source;
@class NSObject, NSString;

@interface NWConcrete_nw_agent : NSObject <OS_nw_agent> {

	os_unfair_lock_s lock;
	unsigned logging_id;
	AI last_client_id;
	char domain[32];
	char type[32];
	char description[128];
	NSObject*<OS_dispatch_queue> queue;
	NSObject*<OS_dispatch_data> data;
	int state;
	int options;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_nexus> nexus;
	int flow_protocol_level;
	int flow_endpoint_type;
	unsigned long long tx_slots;
	unsigned long long rx_slots;
	unsigned long long slot_size;
	int flow_request_types[15];
	unsigned char flow_request_type_count;
	nw_agent_resolve_handlers resolve_handlers[16];
	unsigned char resolve_handler_count;
	unsigned char uuid[16];
	NSObject*<OS_nw_dictionary> clients;
	/*^block*/id activate_handler;
	/*^block*/id assert_handler;
	/*^block*/id unassert_handler;
	/*^block*/id start_flow_handler;
	/*^block*/id stop_flow_handler;
	/*^block*/id start_browse_handler;
	/*^block*/id stop_browse_handler;
	NSObject*<OS_nw_fd_wrapper> fd_wrapper;
	NSObject*<OS_dispatch_source> event_source;
	unsigned registered : 1;
	unsigned supports_listen : 1;
	unsigned require_assert : 1;
	unsigned nexus_agent : 1;
	unsigned browse_agent : 1;
	unsigned resolve_agent : 1;
	unsigned __pad_bits : 2;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end
