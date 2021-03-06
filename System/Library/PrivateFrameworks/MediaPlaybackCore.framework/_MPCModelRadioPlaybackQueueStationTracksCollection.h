/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, MPPropertySet, ICMutableRadioPlaybackHistory, MPCPlaybackRequestEnvironment, MPSectionedCollection, MPCModelGenericAVItemUserIdentityPropertySet;

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _activeModelGenericAVItems;
	BOOL _isSiriInitiated;
	MPPropertySet* _itemProperties;
	ICMutableRadioPlaybackHistory* _playbackHistory;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPSectionedCollection* _trackModels;
	MPSectionedCollection* _tracks;
	MPCModelGenericAVItemUserIdentityPropertySet* _identityPropertySet;

}

@property (nonatomic,readonly) ICMutableRadioPlaybackHistory * playbackHistory; 
@property (nonatomic,copy,readonly) MPSectionedCollection * trackModels;                                      //@synthesize trackModels=_trackModels - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * tracks;                                           //@synthesize tracks=_tracks - In the implementation block
@property (nonatomic,retain) MPCModelGenericAVItemUserIdentityPropertySet * identityPropertySet;              //@synthesize identityPropertySet=_identityPropertySet - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
-(long long)numberOfItems;
-(MPSectionedCollection *)tracks;
-(id)initWithPlaybackContext:(id)arg1 ;
-(MPCModelGenericAVItemUserIdentityPropertySet *)identityPropertySet;
-(void)setIdentityPropertySet:(MPCModelGenericAVItemUserIdentityPropertySet *)arg1 ;
-(id)AVItemAtIndex:(long long)arg1 ;
-(BOOL)isExplicitItemAtIndex:(long long)arg1 ;
-(ICMutableRadioPlaybackHistory *)playbackHistory;
-(long long)removeExplicitItems;
-(MPSectionedCollection *)trackModels;
-(id)trackForItemAtIndex:(long long)arg1 ;
-(void)updateWithPersonalizedResponse:(id)arg1 ;
@end

