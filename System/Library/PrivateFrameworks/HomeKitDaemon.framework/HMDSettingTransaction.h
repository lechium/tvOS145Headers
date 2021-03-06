/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDSettingTransaction.h>

@protocol HMDSettingTransaction <NSObject>
@required
-(void)addSettingModel:(id)arg1;
-(void)addModel:(id)arg1;
-(void)removeModelWithIdentifier:(id)arg1;

@end


@class NSString, NSMutableSet;

@interface HMDSettingTransaction : NSObject <HMDSettingTransaction> {

	BOOL _initialCreation;
	NSString* _transactionLabel;
	NSMutableSet* _updateModels;
	NSMutableSet* _removeUUIDs;

}

@property (readonly) NSString * transactionLabel;                   //@synthesize transactionLabel=_transactionLabel - In the implementation block
@property (readonly) NSMutableSet * updateModels;                   //@synthesize updateModels=_updateModels - In the implementation block
@property (readonly) NSMutableSet * removeUUIDs;                    //@synthesize removeUUIDs=_removeUUIDs - In the implementation block
@property (readonly) BOOL initialCreation;                          //@synthesize initialCreation=_initialCreation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)transactionLabel;
-(NSMutableSet *)updateModels;
-(NSMutableSet *)removeUUIDs;
-(void)addSettingModel:(id)arg1 ;
-(void)addModel:(id)arg1 ;
-(void)removeModelWithIdentifier:(id)arg1 ;
-(id)initWithTransactionLabel:(id)arg1 ;
-(id)initForInitialCreationWithTransactionLabel:(id)arg1 ;
-(void)addModelToBeUpdated:(id)arg1 ;
-(BOOL)initialCreation;
@end

