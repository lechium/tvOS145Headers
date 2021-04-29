/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, NSString;

@interface ASDIAPInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _autoRenewStatus;
	BOOL _hasUsedFreeOffer;
	BOOL _hasUsedIntroPricingOffer;
	unsigned char _type;
	NSNumber* _adamId;
	NSNumber* _appAdamId;
	NSDate* _expirationDate;
	NSDate* _lastModifiedDate;
	NSDate* _purchaseDate;
	NSString* _subscriptionFamilyId;

}

@property (nonatomic,retain) NSNumber * adamId;                               //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,retain) NSNumber * appAdamId;                            //@synthesize appAdamId=_appAdamId - In the implementation block
@property (assign,nonatomic) BOOL autoRenewStatus;                            //@synthesize autoRenewStatus=_autoRenewStatus - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                       //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                           //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (assign,nonatomic) unsigned char type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasUsedFreeOffer;                           //@synthesize hasUsedFreeOffer=_hasUsedFreeOffer - In the implementation block
@property (assign,nonatomic) BOOL hasUsedIntroPricingOffer;                   //@synthesize hasUsedIntroPricingOffer=_hasUsedIntroPricingOffer - In the implementation block
@property (nonatomic,retain) NSString * subscriptionFamilyId;                 //@synthesize subscriptionFamilyId=_subscriptionFamilyId - In the implementation block
@property (nonatomic,readonly) NSNumber * expirationTimestamp; 
@property (nonatomic,readonly) NSNumber * lastModifiedTimestamp; 
@property (nonatomic,readonly) NSNumber * purchaseTimestamp; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)type;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSDate *)lastModifiedDate;
-(NSNumber *)adamId;
-(void)setAdamId:(NSNumber *)arg1 ;
-(NSNumber *)appAdamId;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSNumber *)lastModifiedTimestamp;
-(NSNumber *)expirationTimestamp;
-(BOOL)isEqualToIAPInfo:(id)arg1 ;
-(id)_newCopyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(NSNumber *)purchaseTimestamp;
-(BOOL)autoRenewStatus;
-(void)setAutoRenewStatus:(BOOL)arg1 ;
-(BOOL)hasUsedFreeOffer;
-(void)setHasUsedFreeOffer:(BOOL)arg1 ;
-(BOOL)hasUsedIntroPricingOffer;
-(void)setHasUsedIntroPricingOffer:(BOOL)arg1 ;
-(NSString *)subscriptionFamilyId;
-(void)setSubscriptionFamilyId:(NSString *)arg1 ;
@end

