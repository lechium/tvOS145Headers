/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_browser.h>

@protocol OS_dispatch_queue, OS_nw_browse_descriptor, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_path, OS_nw_dictionary, OS_nw_array, OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_browser : NSObject <OS_nw_browser> {

	os_unfair_lock_s lock;
	NSObject*<OS_dispatch_queue> client_queue;
	int type;
	NSObject*<OS_nw_browse_descriptor> descriptor;
	NSObject*<OS_nw_parameters> parameters;
	NWConcrete_nw_browser* internally_retained_object;
	/*^block*/id browse_results_changed_handler;
	/*^block*/id state_changed_handler;
	int state;
	NSObject*<OS_nw_path_evaluator> browse_evaluator;
	NSObject*<OS_nw_path> current_browse_path;
	NSObject*<OS_nw_dictionary> browse_flow_registrations;
	NSObject*<OS_nw_array> path_endpoint_array;
	DNSServiceRef_tRef main_dns_ref;
	DNSServiceRef_tRef secondary_dns_ref;
	NSObject*<OS_nw_array> old_results;
	NSObject*<OS_nw_array> new_results;
	NSObject*<OS_xpc_object> dns_ref_map;
	NSObject*<OS_xpc_object> changes_map;
	NSObject*<OS_nw_dictionary> txt_record_map;
	char* description;
	char* logging_description;
	unsigned log_id;
	BOOL include_txt_record;
	BOOL redact_logs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)redactedDescription;
@end

