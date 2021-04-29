/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKQuantity, NSDateInterval, NSData;

@interface HKQuantityDatum : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _UUID;
	HKQuantity* _quantity;
	NSDateInterval* _dateInterval;
	NSData* _resumeContext;
	/*^block*/id _saveCompletion;

}

@property (nonatomic,copy) id saveCompletion;                                   //@synthesize saveCompletion=_saveCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) HKQuantity * quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSData * resumeContext;                     //@synthesize resumeContext=_resumeContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSDateInterval *)dateInterval;
-(HKQuantity *)quantity;
-(NSData *)resumeContext;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 resumeContext:(id)arg4 ;
-(id)saveCompletion;
-(void)setSaveCompletion:(id)arg1 ;
@end

