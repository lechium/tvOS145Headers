/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, NSArray, NSDictionary, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {

	AVAssetReaderAudioMixOutputInternal* _audioMixOutputInternal;

}

@property (nonatomic,readonly) NSArray * audioTracks; 
@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderAudioMixOutputWithAudioMix:(id)arg1 appliedToAsset:(id)arg2 audioSettings:(id)arg3 ;
+(id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)mediaType;
-(id)_asset;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(AVAudioMix *)audioMix;
-(NSDictionary *)audioSettings;
-(NSString *)audioTimePitchAlgorithm;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(NSArray *)audioTracks;
-(id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrack:(id)arg2 ;
-(id)_audioVolumeCurveForTrack:(id)arg1 ;
-(id)_audioTimePitchAlgorithmForTrack:(id)arg1 ;
-(opaqueMTAudioProcessingTapRef)_audioTapProcessorForTrack:(id)arg1 ;
@end
