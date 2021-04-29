/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVPlayerItem.h>

@class TVPMediaItemLoader, TVImageProxy, AVMediaSelectionOption;

@interface TVPPlayerItem : AVPlayerItem {

	BOOL _muted;
	BOOL _audioSelectionIsAutomatic;
	TVPMediaItemLoader* _mediaItemLoader;
	long long _previousStatus;
	TVImageProxy* _posterProxy;
	id _scrubImageLoader;
	AVMediaSelectionOption* _savedManualAudioSelection;

}

@property (assign,nonatomic) BOOL audioSelectionIsAutomatic;                                  //@synthesize audioSelectionIsAutomatic=_audioSelectionIsAutomatic - In the implementation block
@property (nonatomic,retain) AVMediaSelectionOption * savedManualAudioSelection;              //@synthesize savedManualAudioSelection=_savedManualAudioSelection - In the implementation block
@property (assign,nonatomic,__weak) TVPMediaItemLoader * mediaItemLoader;                     //@synthesize mediaItemLoader=_mediaItemLoader - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                      //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) long long previousStatus;                                        //@synthesize previousStatus=_previousStatus - In the implementation block
@property (nonatomic,retain) TVImageProxy * posterProxy;                                      //@synthesize posterProxy=_posterProxy - In the implementation block
@property (nonatomic,retain) id scrubImageLoader;                                             //@synthesize scrubImageLoader=_scrubImageLoader - In the implementation block
-(void)dealloc;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)muted;
-(id)initWithAsset:(id)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(long long)previousStatus;
-(id)scrubImageLoader;
-(void)setScrubImageLoader:(id)arg1 ;
-(void)setMediaItemLoader:(TVPMediaItemLoader *)arg1 ;
-(TVPMediaItemLoader *)mediaItemLoader;
-(void)setPreviousStatus:(long long)arg1 ;
-(void)setPosterProxy:(TVImageProxy *)arg1 ;
-(void)setAudioSelectionIsAutomatic:(BOOL)arg1 ;
-(void)setSavedManualAudioSelection:(AVMediaSelectionOption *)arg1 ;
-(BOOL)audioSelectionIsAutomatic;
-(AVMediaSelectionOption *)savedManualAudioSelection;
-(TVImageProxy *)posterProxy;
@end

