/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libboringssl.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_boringssl_session_state.h>

@class NSString;

@interface boringssl_concrete_boringssl_session_state : NSObject <OS_boringssl_session_state> {

	unsigned char used_extended_master_secret;
	sockaddr_in_4_6 remote_address;
	char* serialized_session;
	unsigned long long serialized_session_length;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

