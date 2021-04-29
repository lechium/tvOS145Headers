/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSNumber;

@interface CKFrameworkFingerprint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _uuid;
	NSNumber* _version;
	NSNumber* _cpuType;
	NSNumber* _cpuSubtype;

}

@property (nonatomic,copy) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSNumber * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSNumber * cpuType;                 //@synthesize cpuType=_cpuType - In the implementation block
@property (nonatomic,copy) NSNumber * cpuSubtype;              //@synthesize cpuSubtype=_cpuSubtype - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSUUID *)uuid;
-(NSNumber *)cpuType;
-(void)setCpuType:(NSNumber *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)versionString;
-(void)populate;
-(NSNumber *)cpuSubtype;
-(void)setCpuSubtype:(NSNumber *)arg1 ;
-(BOOL)isLikelyEqual:(id)arg1 ;
@end

