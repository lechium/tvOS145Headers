/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AWAttentionAwarenessClientConfig : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	NSMutableDictionary* _notifyQueues;
	NSMutableDictionary* _notifyBlocks;
	unsigned long long _supportedEvents;
	BOOL _supportedEventsValid;
	unsigned long long _nextTagIndex;
	NSMutableDictionary* _tagMap;
	NSMutableDictionary* _tagRefCount;

}
+(id)sharedClientConfig;
-(id)init;
-(void)dealloc;
-(void)updateState:(BOOL)arg1 ;
-(unsigned long long)supportedEvents;
-(AWNotification_sRef)notifySupportedEventsChangedWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelNotification:(AWNotification_sRef)arg1 ;
-(unsigned long long)addTag:(id)arg1 ;
-(id)tagForIndex:(unsigned long long)arg1 ;
-(void)incrementTagIndexRefCount:(unsigned long long)arg1 ;
-(void)decrementTagIndexRefCount:(unsigned long long)arg1 ;
@end

