/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libxpc_datastores.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libxpc_datastores.dylib/libxpc_datastores.dylib-Structs.h>
#import <libobjc.A.dylib/XDS_xpc_datastore_object.h>

@protocol OS_xpc_object;
@class OS_xds_local_cache, NSObject, NSString;

@interface OS_xpc_datastore_object : NSObject <XDS_xpc_datastore_object> {

	unsigned long long ds_type;
	unsigned long long max_size;
	char* ds_name;
	os_unfair_lock_s lock;
	OS_xds_local_cache* local_data;
	NSObject*<OS_xpc_object> conn;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithName:(const char*)arg1 ;
-(id)copyCurrentStateWithReqType:(unsigned long long)arg1 ;
@end

