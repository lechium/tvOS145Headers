/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FlexSongProtocol;
@class FMTrack, NSDictionary, NSObject;

@interface FMSongRendition : NSObject {

	FMTrack* _trackA;
	FMTrack* _trackB;
	NSDictionary* _options;
	long long _duration;
	long long _durationOfSilence;
	long long _durationOfMusic;
	NSObject*<FlexSongProtocol> _song;

}

@property (nonatomic,retain) NSObject*<FlexSongProtocol> song;              //@synthesize song=_song - In the implementation block
@property (nonatomic,retain) FMTrack * trackA;                              //@synthesize trackA=_trackA - In the implementation block
@property (nonatomic,retain) FMTrack * trackB;                              //@synthesize trackB=_trackB - In the implementation block
@property (assign,nonatomic) long long duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long durationOfSilence;                   //@synthesize durationOfSilence=_durationOfSilence - In the implementation block
@property (assign,nonatomic) long long durationOfMusic;                     //@synthesize durationOfMusic=_durationOfMusic - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                      //@synthesize options=_options - In the implementation block
+(id)coalesceMixParamsA:(id)arg1 withMixParamsB:(id)arg2 ;
-(id)description;
-(NSDictionary *)options;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(NSObject*<FlexSongProtocol>)song;
-(void)setSong:(NSObject*<FlexSongProtocol>)arg1 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg1 ;
-(id)avCompositionWithAudioMix:(id*)arg1 includeShortenedOutroFadeOut:(BOOL)arg2 ;
-(FMTrack *)trackA;
-(FMTrack *)trackB;
-(id)_buildOutroFadeoutMixParams;
-(id)initWithSong:(id)arg1 andOptions:(id)arg2 ;
-(double)_maxPeakAndLoudness:(double*)arg1 missingPeakValueCount:(int*)arg2 missingLoudnessCount:(int*)arg3 ;
-(void)setTrackA:(FMTrack *)arg1 ;
-(void)setTrackB:(FMTrack *)arg1 ;
-(void)setDurationOfSilence:(long long)arg1 ;
-(void)setDurationOfMusic:(long long)arg1 ;
-(long long)durationOfMusic;
-(long long)durationOfSilence;
@end

