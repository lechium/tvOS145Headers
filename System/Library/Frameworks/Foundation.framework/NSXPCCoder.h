/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@protocol NSObject;
@class NSXPCConnection;

@interface NSXPCCoder : NSCoder {

	id<NSObject> _userInfo;
	id _reserved1;

}

@property (retain) id<NSObject> userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSXPCConnection * connection; 
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2 ;
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2 ;
+(id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<NSObject>)userInfo;
-(BOOL)requiresSecureCoding;
-(void)setUserInfo:(id<NSObject>)arg1 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(NSXPCConnection *)connection;
@end

