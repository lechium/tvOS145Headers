/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSSet, NSNumber, MPPlaybackArchive, NSString;

@interface HMDMPCSessionData : HMFObject {

	NSSet* _mediaProfiles;
	NSNumber* _playbackStateNumber;
	NSNumber* _playbackVolumeNumber;
	MPPlaybackArchive* _playbackArchive;
	NSNumber* _source;
	NSString* _clientName;

}

@property (nonatomic,copy,readonly) NSSet * mediaProfiles;                        //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackStateNumber;               //@synthesize playbackStateNumber=_playbackStateNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * playbackVolumeNumber;              //@synthesize playbackVolumeNumber=_playbackVolumeNumber - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchive * playbackArchive;               //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                        //@synthesize clientName=_clientName - In the implementation block
-(NSNumber *)source;
-(NSString *)clientName;
-(MPPlaybackArchive *)playbackArchive;
-(NSSet *)mediaProfiles;
-(NSNumber *)playbackStateNumber;
-(id)initWithMediaAction:(id)arg1 source:(id)arg2 clientName:(id)arg3 ;
-(id)dictionaryRepresentation:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2 ;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 source:(id)arg5 clientName:(id)arg6 ;
-(NSNumber *)playbackVolumeNumber;
@end
