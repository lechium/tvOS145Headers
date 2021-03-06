/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_context.h>

@protocol OS_dispatch_workloop, OS_nw_resolver_config;
@class NSObject, NSString;

@interface NWConcrete_nw_context : NSObject <OS_nw_context> {

	NSObject*<OS_dispatch_workloop> workloop;
	char* identifier;
	nw_context_cache* cache;
	nw_context_globals* globals;
	NWConcrete_nw_context* isolated_context;
	NSObject*<OS_nw_resolver_config> fallback_resolver_config;
	os_unfair_lock_s activate_lock;
	unsigned max_cache_entries;
	unsigned target_cache_entries;
	unsigned max_idle_cache_entries;
	long long association_dormant_delay;
	long long context_purge_delay;
	int scheduling_mode;
	int privacy_level;
	unsigned isolate_protocol_stack : 1;
	unsigned isolate_protocol_cache : 1;
	unsigned is_implicit : 1;
	unsigned is_inline : 1;
	unsigned is_inline_and_cancelled : 1;
	unsigned is_isolated_context : 1;
	unsigned activated : 1;
	unsigned required_encrypted_resolution : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)redactedDescription;
@end

