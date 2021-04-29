/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTPlanBillingDetails : NSObject <NSSecureCoding> {

	NSString* _planName;
	NSNumber* _planCost;
	NSString* _planCurrency;
	NSNumber* _planDataAmount;
	unsigned long long _planDataMeasureUnit;
	unsigned long long _planType;

}

@property (nonatomic,readonly) NSString * planName;                                 //@synthesize planName=_planName - In the implementation block
@property (nonatomic,readonly) NSNumber * planCost;                                 //@synthesize planCost=_planCost - In the implementation block
@property (nonatomic,readonly) NSString * planCurrency;                             //@synthesize planCurrency=_planCurrency - In the implementation block
@property (nonatomic,readonly) NSNumber * planDataAmount;                           //@synthesize planDataAmount=_planDataAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long planDataMeasureUnit;              //@synthesize planDataMeasureUnit=_planDataMeasureUnit - In the implementation block
@property (nonatomic,readonly) unsigned long long planType;                         //@synthesize planType=_planType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)planType;
-(NSString *)planName;
-(NSNumber *)planCost;
-(NSString *)planCurrency;
-(NSNumber *)planDataAmount;
-(unsigned long long)planDataMeasureUnit;
-(id)initWithName:(id)arg1 PlanCost:(id)arg2 PlanCurrency:(id)arg3 PlanDataAmount:(id)arg4 PlanDataMeasureUnit:(unsigned long long)arg5 PlanType:(unsigned long long)arg6 ;
@end

