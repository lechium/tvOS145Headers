/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface NEProcessIdentity : NSObject <NSSecureCoding> {

	int _pid;
	int _pidVersion;
	NSUUID* _uuid;
	NSData* _auditTokenData;

}

@property (nonatomic,readonly) int pid;                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int pidVersion;                       //@synthesize pidVersion=_pidVersion - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * auditTokenData;              //@synthesize auditTokenData=_auditTokenData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(int)pid;
-(NSData *)auditTokenData;
-(id)initFromXPCConnection:(id)arg1 ;
-(int)pidVersion;
-(id)initFromXPCMessage:(id)arg1 ;
@end
