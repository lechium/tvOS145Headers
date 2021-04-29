/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ELSSnapshot, NSUserDefaults;

@interface ELSManager : NSObject {

	ELSSnapshot* _snapshot;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) ELSSnapshot * snapshot;                 //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)finish;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)flush;
-(void)setSnapshot:(ELSSnapshot *)arg1 ;
-(ELSSnapshot *)snapshot;
-(id)initSingleton;
-(void)beginUpdates;
-(void)refreshWithCompletion:(/*^block*/id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)transactionWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)commitBatchTransaction:(id)arg1 ;
-(BOOL)commitStatusTransaction:(id)arg1 ;
-(BOOL)commitConsentTransaction:(id)arg1 ;
-(BOOL)commitDatesTransaction:(id)arg1 ;
-(BOOL)commitQueueTransaction:(id)arg1 ;
-(BOOL)commitRetriesRemainingTransaction:(id)arg1 ;
-(BOOL)commitIdentifiersToRetryTransaction:(id)arg1 ;
-(BOOL)commitMetadataTransaction:(id)arg1 ;
-(BOOL)commitUploadCompletedPercentage:(id)arg1 ;
-(BOOL)commitFollowUpOptions:(id)arg1 ;
-(BOOL)object:(id)arg1 isEqualToObject:(id)arg2 ;
-(void)getBugSessionActivityWithCompletion:(/*^block*/id)arg1 ;
-(void)transactionWithBlock:(/*^block*/id)arg1 ;
@end
