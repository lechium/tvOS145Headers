/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXUserInterfaceElementEventTracker.h>
@class NSMutableDictionary;


@protocol PXUserInterfaceElementEventTracker
@property (nonatomic,copy) NSMutableDictionary * payload; 
@required
-(NSMutableDictionary *)payload;
-(void)setPayload:(id)arg1;

@end


@class NSMutableDictionary, PXUpdater;

@interface PXUserInterfaceElementEventTracker : PXObservable <PXUserInterfaceElementEventTracker> {

	BOOL _isVisible;
	BOOL _hasAppeared;
	BOOL _isAppActive;
	NSMutableDictionary* _payload;
	PXUpdater* _updater;

}

@property (assign,nonatomic) BOOL hasAppeared;                         //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL isAppActive;                         //@synthesize isAppActive=_isAppActive - In the implementation block
@property (nonatomic,readonly) BOOL isVisible;                         //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,readonly) double currentTimestamp; 
@property (nonatomic,readonly) PXUpdater * updater;                    //@synthesize updater=_updater - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(id)init;
-(NSMutableDictionary *)payload;
-(void)setPayload:(NSMutableDictionary *)arg1 ;
-(BOOL)isVisible;
-(double)currentTimestamp;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)didPerformChanges;
-(PXUpdater *)updater;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)_updateIsVisible;
-(void)didAppear;
-(void)didDisappear;
-(id)finalPayloadWithPayload:(id)arg1 ;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setIsAppActive:(BOOL)arg1 ;
-(double)timeIntervalSinceTimestamp:(double)arg1 ;
-(double)timeIntervalBetweenTimestamp:(double)arg1 andTimestamp:(double)arg2 ;
-(void)_invalidateIsVisible;
-(BOOL)isAppActive;
@end

