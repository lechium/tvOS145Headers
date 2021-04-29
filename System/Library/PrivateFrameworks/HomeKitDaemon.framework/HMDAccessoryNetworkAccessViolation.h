/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding> {

	NSDate* _lastViolationDate;
	NSDate* _lastResetDate;

}

@property (readonly) NSDate * lastViolationDate;                                    //@synthesize lastViolationDate=_lastViolationDate - In the implementation block
@property (readonly) NSDate * lastResetDate;                                        //@synthesize lastResetDate=_lastResetDate - In the implementation block
@property (getter=hasCurrentViolation,readonly) BOOL currentViolation; 
+(BOOL)supportsSecureCoding;
+(id)noViolation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(NSDate *)lastViolationDate;
-(NSDate *)lastResetDate;
-(id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2 ;
-(BOOL)hasCurrentViolation;
-(id)initWithLastViolationTimeInterval:(id)arg1 lastViolationResetTimeInterval:(id)arg2 ;
@end

