/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libboringssl.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libboringssl.dylib/libboringssl.dylib-Structs.h>
#import <libobjc.A.dylib/OS_boringssl_identity.h>

@protocol OS_sec_array, OS_sec_identity, OS_dispatch_queue, OS_dispatch_data;
@class NSObject, NSString;

@interface boringssl_concrete_boringssl_identity : NSObject <OS_boringssl_identity> {

	_SecKey* private_key;
	NSObject*<OS_sec_array> certificates;
	NSObject*<OS_sec_identity> identity;
	/*^block*/id sign_block;
	/*^block*/id decrypt_block;
	NSObject*<OS_dispatch_queue> queue;
	BOOL private_key_operation_complete;
	NSObject*<OS_dispatch_data> signature_result;
	NSObject*<OS_dispatch_data> decryption_result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end
