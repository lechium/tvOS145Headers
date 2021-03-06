/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNTimeProvider;
@class MNObserverHashTable;

@interface MNTimeManager : NSObject {

	MNObserverHashTable* _timeManagerObservers;
	id<MNTimeProvider> _provider;

}

@property (nonatomic,retain) id<MNTimeProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedManager;
+(double)currentTime;
+(id)currentDate;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setProvider:(id<MNTimeProvider>)arg1 ;
-(id<MNTimeProvider>)provider;
-(void)_resetToDefaultProvider;
@end

