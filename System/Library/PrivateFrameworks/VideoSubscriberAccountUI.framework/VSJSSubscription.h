/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSSubscription.h>
@class NSString, NSDate, NSArray;


@protocol VSJSSubscription <JSExport>
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) long long accessLevel; 
@property (nonatomic,copy) NSArray * tierIdentifiers; 
@property (nonatomic,copy) NSString * billingIdentifier; 
@required
-(id)init;
-(void)setExpirationDate:(id)arg1;
-(NSDate *)expirationDate;
-(void)setBundleId:(id)arg1;
-(NSString *)bundleId;
-(long long)accessLevel;
-(void)setAccessLevel:(long long)arg1;
-(void)setTierIdentifiers:(id)arg1;
-(void)setBillingIdentifier:(id)arg1;
-(NSArray *)tierIdentifiers;
-(NSString *)billingIdentifier;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray;

@interface VSJSSubscription : IKJSObject <VSJSSubscription, NSCopying> {

	NSString* _bundleId;
	NSDate* _expirationDate;
	long long _accessLevel;
	NSArray* _tierIdentifiers;
	NSString* _billingIdentifier;

}

@property (nonatomic,copy) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long accessLevel;                   //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,copy) NSArray * tierIdentifiers;                 //@synthesize tierIdentifiers=_tierIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * billingIdentifier;              //@synthesize billingIdentifier=_billingIdentifier - In the implementation block
+(id)toVSSubscriptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(long long)accessLevel;
-(void)setAccessLevel:(long long)arg1 ;
-(void)setTierIdentifiers:(NSArray *)arg1 ;
-(void)setBillingIdentifier:(NSString *)arg1 ;
-(NSArray *)tierIdentifiers;
-(NSString *)billingIdentifier;
-(id)toVSSubscription;
@end

