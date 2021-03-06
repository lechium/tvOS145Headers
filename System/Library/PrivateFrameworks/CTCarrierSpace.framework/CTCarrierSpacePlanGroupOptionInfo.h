/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CTCarrierSpace/CTCarrierSpace-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpacePlanGroupOptionInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _planSubscriptionStatus;
	BOOL _planPurchasable;
	NSString* _planId;
	NSString* _planLabel;
	NSString* _planValue;
	NSString* _planDetailsURL;
	NSString* _planTermsURL;
	NSString* _planPurchaseURL;
	long long _planType;

}

@property (nonatomic,retain) NSString * planId;                                 //@synthesize planId=_planId - In the implementation block
@property (nonatomic,retain) NSString * planLabel;                              //@synthesize planLabel=_planLabel - In the implementation block
@property (nonatomic,retain) NSString * planValue;                              //@synthesize planValue=_planValue - In the implementation block
@property (assign,nonatomic) unsigned char planSubscriptionStatus;              //@synthesize planSubscriptionStatus=_planSubscriptionStatus - In the implementation block
@property (assign,nonatomic) BOOL planPurchasable;                              //@synthesize planPurchasable=_planPurchasable - In the implementation block
@property (nonatomic,retain) NSString * planDetailsURL;                         //@synthesize planDetailsURL=_planDetailsURL - In the implementation block
@property (nonatomic,retain) NSString * planTermsURL;                           //@synthesize planTermsURL=_planTermsURL - In the implementation block
@property (nonatomic,retain) NSString * planPurchaseURL;                        //@synthesize planPurchaseURL=_planPurchaseURL - In the implementation block
@property (assign,nonatomic) long long planType;                                //@synthesize planType=_planType - In the implementation block
@property (nonatomic,readonly) long long planStatus; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)planLabel;
-(void)setPlanLabel:(NSString *)arg1 ;
-(NSString *)planId;
-(NSString *)planValue;
-(long long)planStatus;
-(BOOL)planPurchasable;
-(NSString *)planDetailsURL;
-(NSString *)planTermsURL;
-(NSString *)planPurchaseURL;
-(long long)planType;
-(unsigned char)planSubscriptionStatus;
-(void)setPlanId:(NSString *)arg1 ;
-(void)setPlanValue:(NSString *)arg1 ;
-(void)setPlanSubscriptionStatus:(unsigned char)arg1 ;
-(void)setPlanPurchasable:(BOOL)arg1 ;
-(void)setPlanDetailsURL:(NSString *)arg1 ;
-(void)setPlanTermsURL:(NSString *)arg1 ;
-(void)setPlanPurchaseURL:(NSString *)arg1 ;
-(void)setPlanType:(long long)arg1 ;
@end

