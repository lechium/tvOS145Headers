/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SymptomsAWDObserverDelegate, OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface SymptomsAWDObserverDelegateEntry : NSObject {

	id<SymptomsAWDObserverDelegate> _delegate;
	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<SymptomsAWDObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * events;                                 //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<SymptomsAWDObserverDelegate>)delegate;
-(void)setDelegate:(id<SymptomsAWDObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEvents:(NSMutableSet *)arg1 ;
-(NSMutableSet *)events;
-(BOOL)matchesDelegate:(id)arg1 ;
@end

