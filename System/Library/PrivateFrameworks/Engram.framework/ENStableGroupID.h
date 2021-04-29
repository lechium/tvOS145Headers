/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Engram/Engram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSData;

@interface ENStableGroupID : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)stableGroupIDLength;
+(id)stableGroupIDWithCurrentTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)_mutableDataRepresentation;
-(int)customUUIDCompare:(unsigned char)arg1 u2:(unsigned char)arg2 ;
@end

