/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, AVAudioMix, NSMutableDictionary, AVAudioOutputSettings, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {

	NSArray* audioTracks;
	AVAudioMix* audioMix;
	NSMutableDictionary* audioVolumeCurvesForTracks;
	NSMutableDictionary* audioTimePitchAlgorithmsForTracks;
	NSMutableDictionary* audioTapProcessorsForTracks;
	AVAudioOutputSettings* audioOutputSettings;
	NSString* audioTimePitchAlgorithm;

}
@end
