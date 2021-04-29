/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBKUniversalPlaybackPositionDataSource.h>

@class SBKUniversalPlaybackPositionStore, NSLock, VUIUPPClientState, NSString;

@interface VUIUniversalPlaybackPositionClient : NSObject <SBKUniversalPlaybackPositionDataSource> {

	SBKUniversalPlaybackPositionStore* _uppStore;
	double _lastSyncTimestamp;
	BOOL _needsSync;
	NSLock* _stateLock;
	VUIUPPClientState* _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) VUIUPPClientState * state;                       //@synthesize state=_state - In the implementation block
+(id)defaultClient;
-(id)init;
-(void)dealloc;
-(VUIUPPClientState *)state;
-(void)setState:(VUIUPPClientState *)arg1 ;
-(void)synchronize:(/*^block*/id)arg1 ;
-(id)allRecords;
-(void)cancelUniversalPlaybackPositionTransaction:(id)arg1 ;
-(id)beginTransactionWithItemsToSyncEnumerationBlock:(/*^block*/id)arg1 ;
-(void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(/*^block*/id)arg3 ;
-(id)recordForBookmarkKey:(id)arg1 ;
-(void)writeItems:(id)arg1 ;
-(void)_setNeedsSync;
-(void)_activeAccountDidChange:(id)arg1 ;
@end

