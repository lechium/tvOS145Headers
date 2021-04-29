/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSDictionary, PKTransitPassProperties, PKPaymentPass, NSArray, NSMutableArray, NSString;

@interface PKTransitBalanceModel : NSObject {

	NSDictionary* _balancesByID;
	PKTransitPassProperties* _transitProperties;
	PKPaymentPass* _pass;
	NSArray* _displayableBalances;
	NSArray* _displayableCommutePlanBalances;
	NSArray* _transitCommutePlans;
	NSArray* _displayableCommutePlans;
	NSMutableArray* _balanceFields;

}

@property (nonatomic,readonly) NSString * primaryDisplayableBalance; 
@property (nonatomic,readonly) NSArray * displayableBalances;                         //@synthesize displayableBalances=_displayableBalances - In the implementation block
@property (nonatomic,readonly) NSArray * displayableCommutePlanBalances;              //@synthesize displayableCommutePlanBalances=_displayableCommutePlanBalances - In the implementation block
@property (nonatomic,readonly) NSArray * transitCommutePlans;                         //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (nonatomic,readonly) NSArray * displayableCommutePlans;                     //@synthesize displayableCommutePlans=_displayableCommutePlans - In the implementation block
@property (nonatomic,retain) NSMutableArray * balanceFields;                          //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,readonly) BOOL hasBalanceContent; 
@property (nonatomic,readonly) BOOL hasCommutePlanContent; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)transitCommutePlans;
-(void)setTransitProperties:(id)arg1 ;
-(NSMutableArray *)balanceFields;
-(void)_updateBalancesAndPlans;
-(void)setDynamicBalancesByID:(id)arg1 ;
-(NSArray *)displayableCommutePlans;
-(id)initWithPass:(id)arg1 ;
-(void)setDynamicBalances:(id)arg1 ;
-(id)balanceForIdentifier:(id)arg1 ;
-(BOOL)hasBalanceContent;
-(BOOL)hasCommutePlanContent;
-(id)filteredActionsForDisplayableEntities;
-(NSString *)primaryDisplayableBalance;
-(NSArray *)displayableBalances;
-(NSArray *)displayableCommutePlanBalances;
-(void)setBalanceFields:(NSMutableArray *)arg1 ;
@end
