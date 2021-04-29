/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVWeakReference, NSError;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status; 
-(id)description;
-(void)dealloc;
-(id)error;
-(long long)status;
-(id)player;
-(id)playerItem;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 ;
-(BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1 ;
-(void)removeItemFromPlayQueue;
@end

