/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_nw_group_descriptor.h>

@protocol OS_nw_array, OS_nw_endpoint, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_group_descriptor : NSObject <OS_nw_group_descriptor> {

	int type;
	NSObject*<OS_nw_array> members;
	NSObject*<OS_nw_endpoint> specific_source;
	NSObject*<OS_dispatch_queue> member_change_queue;
	/*^block*/id member_change_handler;
	unsigned disable_unicast_traffic : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)initWithType:(int)arg1 member:(id)arg2 ;
@end
