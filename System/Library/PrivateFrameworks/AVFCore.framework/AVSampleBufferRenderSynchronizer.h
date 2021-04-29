/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject {

	AVSampleBufferRenderSynchronizerInternal* _synchronizerInternal;

}

@property (readonly) NSArray * renderers; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) BOOL delaysRateChangeUntilHasSufficientMediaData; 
+(id)currentFigRenderSynchronizerFactory;
+(void)setFigRenderSynchronizerFactory:(id)arg1 forQueue:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(SCD_Struct_AV6)currentTime;
-(OpaqueCMTimebaseRef)timebase;
-(void)removeTimeObserver:(id)arg1 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_AV6)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)renderers;
-(void)setRate:(float)arg1 time:(SCD_Struct_AV6)arg2 atHostTime:(SCD_Struct_AV6)arg3 ;
-(int)_initializeTimebase;
-(void)setRate:(float)arg1 time:(SCD_Struct_AV6)arg2 ;
-(BOOL)_rendererConfigurationIsValid:(id*)arg1 ;
-(BOOL)delaysRateChangeUntilHasSufficientMediaData;
-(void)setDelaysRateChangeUntilHasSufficientMediaData:(BOOL)arg1 ;
-(void)_updateRateFromTimebase;
-(BOOL)_canAddRendererInternal:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addRenderer:(id)arg1 error:(id*)arg2 ;
-(void)_performRendererRemoval:(id)arg1 ;
-(id)_getTimebaseObserverForRenderer:(id)arg1 ;
-(/*^block*/id)_getClientCompletionHandlerForRenderer:(id)arg1 ;
-(void)_removeTimebaseObserverForRenderer:(id)arg1 ;
-(id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)_storeObserver:(id)arg1 clientCompletionHandler:(/*^block*/id)arg2 forRenderer:(id)arg3 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_AV6)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(SCD_Struct_AV6)arg2 withClientCompletionHandler:(/*^block*/id)arg3 ;
-(void)addRenderer:(id)arg1 ;
-(void)removeRenderer:(id)arg1 atTime:(SCD_Struct_AV6)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)_multipleAudioRenderersDisallowed;
-(long long)_addedAudioRendererCountInternal;
-(long long)_addedAudioRendererCount;
@end
