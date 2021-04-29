/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying> {

	NSString* _partnerIdentifier;
	NSString* _productIdentifier;
	unsigned long long _type;
	NSString* _dirtyStateIdentifier;
	NSDate* _lastUpdated;
	unsigned long long _state;
	NSString* _notificationTitle;
	NSString* _notificationMessage;
	unsigned long long _featureIdentifier;

}

@property (nonatomic,copy) NSString * partnerIdentifier;                        //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                        //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * dirtyStateIdentifier;                     //@synthesize dirtyStateIdentifier=_dirtyStateIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * notificationTitle;                        //@synthesize notificationTitle=_notificationTitle - In the implementation block
@property (nonatomic,copy) NSString * notificationMessage;                      //@synthesize notificationMessage=_notificationMessage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(unsigned long long)featureIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(NSString *)partnerIdentifier;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(id)initWithProductDictionary:(id)arg1 ;
-(NSString *)dirtyStateIdentifier;
-(void)setDirtyStateIdentifier:(NSString *)arg1 ;
-(NSString *)notificationTitle;
-(void)setNotificationTitle:(NSString *)arg1 ;
-(NSString *)notificationMessage;
-(void)setNotificationMessage:(NSString *)arg1 ;
@end

