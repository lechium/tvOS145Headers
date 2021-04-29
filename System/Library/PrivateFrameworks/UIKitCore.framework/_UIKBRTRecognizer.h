/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol, OS_dispatch_queue;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet, NSObject, NSMutableArray;

@interface _UIKBRTRecognizer : NSObject {

	BOOL _isWaiting;
	BOOL _disableHomeRowReturn;
	id<_UIKBRTRecognizerDelegate> _delegate;
	id<_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;
	id<_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;
	NSMutableSet* _definitiveRules;
	NSMutableSet* _averagingRules;
	double _maximumNonRestMoveDistance;
	NSObject*<OS_dispatch_queue> _touchQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableArray* _touchInfos;
	NSMutableSet* _activeTouches;
	NSObject*<OS_dispatch_queue> _activeTouchesQueue;
	NSMutableArray* _ignoredTouches;
	NSObject*<OS_dispatch_queue> _ignoredTouchesQueue;
	unsigned long long _numProlongedTouches;
	double _touchIntervalAverage;
	CGSize _clusterRestHaloSize;

}

@property (assign,nonatomic) CGSize clusterRestHaloSize;                                                //@synthesize clusterRestHaloSize=_clusterRestHaloSize - In the implementation block
@property (assign,nonatomic) double maximumNonRestMoveDistance;                                         //@synthesize maximumNonRestMoveDistance=_maximumNonRestMoveDistance - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> touchQueue;                                   //@synthesize touchQueue=_touchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchInfos;                                               //@synthesize touchInfos=_touchInfos - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTouches;                                              //@synthesize activeTouches=_activeTouches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activeTouchesQueue;                           //@synthesize activeTouchesQueue=_activeTouchesQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * ignoredTouches;                                           //@synthesize ignoredTouches=_ignoredTouches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ignoredTouchesQueue;                          //@synthesize ignoredTouchesQueue=_ignoredTouchesQueue - In the implementation block
@property (assign,nonatomic) unsigned long long numProlongedTouches;                                    //@synthesize numProlongedTouches=_numProlongedTouches - In the implementation block
@property (assign,nonatomic) double touchIntervalAverage;                                               //@synthesize touchIntervalAverage=_touchIntervalAverage - In the implementation block
@property (nonatomic,retain) id<_UIKBRTRecognizerTouchLoggingProtocol> touchLogger;                     //@synthesize touchLogger=_touchLogger - In the implementation block
@property (nonatomic,retain) id<_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker;              //@synthesize touchTracker=_touchTracker - In the implementation block
@property (assign,nonatomic) id<_UIKBRTRecognizerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableSet * definitiveRules;                                          //@synthesize definitiveRules=_definitiveRules - In the implementation block
@property (nonatomic,readonly) NSMutableSet * averagingRules;                                           //@synthesize averagingRules=_averagingRules - In the implementation block
@property (assign,nonatomic) BOOL disableHomeRowReturn;                                                 //@synthesize disableHomeRowReturn=_disableHomeRowReturn - In the implementation block
-(id)init;
-(id<_UIKBRTRecognizerDelegate>)delegate;
-(void)setDelegate:(id<_UIKBRTRecognizerDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)reset;
-(NSMutableSet *)activeTouches;
-(void)setActiveTouches:(NSMutableSet *)arg1 ;
-(void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2 ;
-(void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2 ;
-(void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
-(void)touchDragged:(id)arg1 withIdentifier:(id)arg2 ;
-(void)touchUp:(id)arg1 withIdentifier:(id)arg2 ;
-(void)touchCancelled:(id)arg1 withIdentifier:(id)arg2 ;
-(NSMutableSet *)averagingRules;
-(void)setStandardKeyPixelSize:(CGSize)arg1 ;
-(void)setDisableHomeRowReturn:(BOOL)arg1 ;
-(void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 ;
-(void)kbStatusMessage:(id)arg1 ;
-(BOOL)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(BOOL)arg2 ;
-(float)letRulesModifyNewTouchInfo:(id)arg1 ;
-(void)letRulesModifyPendingTouchInfo:(id)arg1 ;
-(BOOL)makeTouchActive:(id)arg1 ;
-(void)_doBeginTouchWithTouchInfo:(id)arg1 ;
-(BOOL)notifyDelegateOfMovedTouch:(id)arg1 ;
-(void)notifyDelegateOfMovedIgnoredTouch:(id)arg1 ;
-(void)_doMovedTouchWithTouchInfo:(id)arg1 ;
-(BOOL)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned long long)arg2 restartIfNecessary:(BOOL)arg3 ;
-(void)processTouchInfo:(id)arg1 ;
-(void)notifyDelegateOfCancelledTouch:(id)arg1 ;
-(void)_doEndedTouchWithTouchInfo:(id)arg1 ;
-(void)cancelTouchOnLayoutWithTouchInfo:(id)arg1 ;
-(void)_doCancelledTouchWithTouchInfo:(id)arg1 ;
-(BOOL)removedFromActiveTouches:(id)arg1 ;
-(void)_doMarkTouchProcessedWithTouchInfo:(id)arg1 ;
-(void)_doIgnoreTouchWithTouchInfo:(id)arg1 ;
-(void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(char)arg3 ;
-(void)notifyDelegateOfSuccessfulTouch:(id)arg1 ;
-(BOOL)addedToActiveTouches:(id)arg1 ;
-(BOOL)queryDelegateOfRestingTouch:(id)arg1 ;
-(void)notifyDelegateOfRestingTouch:(id)arg1 ;
-(void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 withMessage:(id)arg3 ;
-(void)notifyDelegateOfIgnoringTouch:(id)arg1 ;
-(void)makeTouchIgnored:(id)arg1 force:(BOOL)arg2 because:(id)arg3 ;
-(id<_UIKBRTRecognizerTouchLoggingProtocol>)touchLogger;
-(void)setTouchLogger:(id<_UIKBRTRecognizerTouchLoggingProtocol>)arg1 ;
-(id<_UIKBRTRecognizerTouchPointTrackingProtocol>)touchTracker;
-(void)setTouchTracker:(id<_UIKBRTRecognizerTouchPointTrackingProtocol>)arg1 ;
-(NSMutableSet *)definitiveRules;
-(BOOL)disableHomeRowReturn;
-(CGSize)clusterRestHaloSize;
-(void)setClusterRestHaloSize:(CGSize)arg1 ;
-(double)maximumNonRestMoveDistance;
-(void)setMaximumNonRestMoveDistance:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)touchQueue;
-(void)setTouchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)touchInfos;
-(void)setTouchInfos:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)activeTouchesQueue;
-(void)setActiveTouchesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)ignoredTouches;
-(void)setIgnoredTouches:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)ignoredTouchesQueue;
-(void)setIgnoredTouchesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)numProlongedTouches;
-(void)setNumProlongedTouches:(unsigned long long)arg1 ;
-(double)touchIntervalAverage;
-(void)setTouchIntervalAverage:(double)arg1 ;
@end

