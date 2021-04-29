/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class CSAudioRecordContext, NSObject, NSHashTable;

@interface CSSiriClientBehaviorMonitor : NSObject {

	BOOL _isStreaming;
	CSAudioRecordContext* _audioRecordContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL isStreaming;                                       //@synthesize isStreaming=_isStreaming - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;              //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)isStreaming;
-(void)setIsStreaming:(BOOL)arg1 ;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
-(void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)notifyDidStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)notifyWillStopStream:(id)arg1 ;
-(void)notifyDidStopStream:(id)arg1 withEventUUID:(id)arg2 ;
@end

