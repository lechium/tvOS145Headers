/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {

	BOOL _hasUpdatedTargetActions;
	BOOL _handlingDisplayRefresh;
	CADisplayLink* _storedDisplayLink;
	NSMutableSet* _activeTargetActions;
	NSMutableSet* _updatedTargetActions;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (nonatomic,retain) CADisplayLink * displayLink; 
@property (nonatomic,retain) CADisplayLink * storedDisplayLink;                                        //@synthesize storedDisplayLink=_storedDisplayLink - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTargetActions;                                       //@synthesize activeTargetActions=_activeTargetActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedTargetActions;                                      //@synthesize updatedTargetActions=_updatedTargetActions - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedTargetActions;                                             //@synthesize hasUpdatedTargetActions=_hasUpdatedTargetActions - In the implementation block
@property (assign,getter=isHandlingDisplayRefresh,nonatomic) BOOL handlingDisplayRefresh;              //@synthesize handlingDisplayRefresh=_handlingDisplayRefresh - In the implementation block
@property (assign,nonatomic) unsigned long long warmUpModeRequirementsCount;                           //@synthesize warmUpModeRequirementsCount=_warmUpModeRequirementsCount - In the implementation block
@property (getter=isWarmUpModeEnabled,nonatomic,readonly) BOOL warmUpModeEnabled; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(id)init;
-(BOOL)isPaused;
-(double)timestamp;
-(double)duration;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setActiveTargetActions:(NSMutableSet *)arg1 ;
-(void)setUpdatedTargetActions:(NSMutableSet *)arg1 ;
-(CADisplayLink *)storedDisplayLink;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)setStoredDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)isHandlingDisplayRefresh;
-(id)_prepareUpdatedTargetActionsForModification;
-(NSMutableSet *)activeTargetActions;
-(void)_didAddFirstTargetAction;
-(void)_didRemoveLastTargetAction;
-(NSMutableSet *)updatedTargetActions;
-(BOOL)hasUpdatedTargetActions;
-(void)setHasUpdatedTargetActions:(BOOL)arg1 ;
-(BOOL)isWarmUpModeEnabled;
-(unsigned long long)warmUpModeRequirementsCount;
-(void)setWarmUpModeRequirementsCount:(unsigned long long)arg1 ;
-(void)setHandlingDisplayRefresh:(BOOL)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
@end

