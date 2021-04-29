/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class _CDInteractionStore, NSObject, NSMutableDictionary;

@interface _CDTemporalInteractionAdvisor : NSObject {

	int _settingsNotifyToken;
	_CDInteractionStore* _store;
	NSObject*<OS_dispatch_queue> _dataQueue;
	NSMutableDictionary* _consumerToModelMap;

}

@property (retain) _CDInteractionStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataQueue;                //@synthesize dataQueue=_dataQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * consumerToModelMap;              //@synthesize consumerToModelMap=_consumerToModelMap - In the implementation block
@property (assign) int settingsNotifyToken;                                         //@synthesize settingsNotifyToken=_settingsNotifyToken - In the implementation block
-(void)dealloc;
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(id)rankContacts:(id)arg1 usingSettings:(id)arg2 ;
-(void)setDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateConsumerModel;
-(NSObject*<OS_dispatch_queue>)dataQueue;
-(NSMutableDictionary *)consumerToModelMap;
-(id)rankerForDate:(id)arg1 settings:(id)arg2 ;
-(void)setConsumerToModelMap:(NSMutableDictionary *)arg1 ;
-(int)settingsNotifyToken;
-(void)setSettingsNotifyToken:(int)arg1 ;
@end

