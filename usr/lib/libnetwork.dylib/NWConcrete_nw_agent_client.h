/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_agent_client.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_path, OS_nw_browse_descriptor, OS_nw_channel;
@class NSObject, NSString;

@interface NWConcrete_nw_agent_client : NSObject <OS_nw_agent_client> {

	unsigned char client_uuid[16];
	char log_string[8];
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_path> path;
	NSObject*<OS_nw_browse_descriptor> browse_descriptor;
	NSObject*<OS_nw_channel> channel;
	nw_protocol* framer_protocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithMessage:(char*)arg1 agent:(id)arg2 context:(id)arg3 ;
@end

