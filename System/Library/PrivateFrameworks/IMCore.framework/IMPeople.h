/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface IMPeople : NSObject {

	NSMutableArray* _people;
	int _coalesceCount;
	BOOL _hidePeople;

}

@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * people; 
@property (assign,setter=setShouldHidePeople:,nonatomic) BOOL hidePeople;              //@synthesize hidePeople=_hidePeople - In the implementation block
@property (nonatomic,readonly) BOOL coalescingChanges; 
@property (nonatomic,readonly) unsigned long long count; 
-(void)dealloc;
-(unsigned long long)count;
-(NSArray *)groups;
-(NSArray *)people;
-(void)setShouldHidePeople:(BOOL)arg1 ;
-(void)beginCoalescedChanges;
-(void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2 ;
-(void)endCoalescedChanges;
-(BOOL)removeIMHandle:(id)arg1 ;
-(BOOL)addIMHandle:(id)arg1 ;
-(BOOL)hidePeople;
-(BOOL)coalescingChanges;
-(void)addedIMHandle:(id)arg1 ;
-(void)removedIMHandle:(id)arg1 ;
-(void)_addedPeople:(id)arg1 ;
-(BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2 ;
-(void)removeNotificationObserver:(id)arg1 ;
-(void)addNotificationObserver:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)containsIMHandle:(id)arg1 ;
-(BOOL)removePeopleFromArray:(id)arg1 ;
-(BOOL)addPeopleFromArray:(id)arg1 ;
@end

