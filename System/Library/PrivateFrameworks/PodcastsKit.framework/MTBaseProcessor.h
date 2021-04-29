/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class MTBaseQueryObserver, NSObject, MTDefaultsChangeNotifier;

@interface MTBaseProcessor : NSObject {

	BOOL _isStopping;
	MTBaseQueryObserver* _queryObserver;
	NSObject*<OS_dispatch_source> _timer;
	MTDefaultsChangeNotifier* _defaultsNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject* _isStoppingLock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) MTDefaultsChangeNotifier * defaultsNotifier;              //@synthesize defaultsNotifier=_defaultsNotifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject * isStoppingLock;                                //@synthesize isStoppingLock=_isStoppingLock - In the implementation block
@property (assign,nonatomic) BOOL isStopping; 
@property (nonatomic,retain) MTBaseQueryObserver * queryObserver;                      //@synthesize queryObserver=_queryObserver - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)start;
-(void)stop;
-(id)predicate;
-(BOOL)isRunning;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)entityName;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(BOOL)isStopping;
-(void)enqueueWorkBlock:(/*^block*/id)arg1 ;
-(void)results:(/*^block*/id)arg1 ;
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(id)createQueryObserver;
-(void)setQueryObserver:(MTBaseQueryObserver *)arg1 ;
-(MTBaseQueryObserver *)queryObserver;
-(double)updatePredicateDuration;
-(void)updatePredicate;
-(id)defaultPropertiesThatAffectPredicate;
-(void)setDefaultsNotifier:(MTDefaultsChangeNotifier *)arg1 ;
-(MTDefaultsChangeNotifier *)defaultsNotifier;
-(void)setIsStopping:(BOOL)arg1 ;
-(NSObject *)isStoppingLock;
-(void)setIsStoppingLock:(NSObject *)arg1 ;
@end

