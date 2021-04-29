/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSDate;

@interface HMFaceCrop : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSData* _dataRepresentation;
	NSDate* _dateCreated;
	CGRect _faceBoundingBox;

}

@property (copy,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (copy,readonly) NSDate * dateCreated;                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (readonly) CGRect faceBoundingBox;                        //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSUUID *)UUID;
-(NSDate *)dateCreated;
-(CGRect)faceBoundingBox;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 ;
@end

