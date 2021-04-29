/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAssetWriterDelegate;
#import <AVFCore/AVFCore-Structs.h>
@class NSURL, AVMediaFileType, NSArray, NSString;

@interface AVAssetWriterConfigurationState : NSObject {

	NSURL* _URL;
	id<AVAssetWriterDelegate> _delegate;
	AVMediaFileType* _mediaFileType;
	SCD_Struct_AV6 _movieFragmentInterval;
	SCD_Struct_AV6 _overallDurationHint;
	BOOL _shouldOptimizeForNetworkUse;
	NSURL* _directoryForTemporaryFiles;
	NSArray* _metadataItems;
	int _movieTimeScale;
	CGAffineTransform _preferredTransform;
	float _preferredVolume;
	float _preferredRate;
	long long _singlePassFileSize;
	long long _singlePassMediaDataSize;
	NSArray* _inputs;
	NSArray* _inputGroups;
	SCD_Struct_AV6 _preferredOutputSegmentInterval;
	SCD_Struct_AV6 _initialSegmentStartTime;
	NSString* _outputFileTypeProfile;
	long long _initialMovieFragmentSequenceNumber;
	BOOL _producesCombinableFragments;

}

@property (nonatomic,copy) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (__weak) id<AVAssetWriterDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) AVMediaFileType * mediaFileType;                              //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 movieFragmentInterval;                       //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 overallDurationHint;                         //@synthesize overallDurationHint=_overallDurationHint - In the implementation block
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse;                           //@synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse - In the implementation block
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles;                           //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                                      //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) int movieTimeScale;                                         //@synthesize movieTimeScale=_movieTimeScale - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;                       //@synthesize preferredTransform=_preferredTransform - In the implementation block
@property (assign,nonatomic) float preferredVolume;                                      //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) float preferredRate;                                        //@synthesize preferredRate=_preferredRate - In the implementation block
@property (assign,nonatomic) long long singlePassFileSize;                               //@synthesize singlePassFileSize=_singlePassFileSize - In the implementation block
@property (assign,nonatomic) long long singlePassMediaDataSize;                          //@synthesize singlePassMediaDataSize=_singlePassMediaDataSize - In the implementation block
@property (nonatomic,copy) NSArray * inputs;                                             //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,copy) NSArray * inputGroups;                                        //@synthesize inputGroups=_inputGroups - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 preferredOutputSegmentInterval;              //@synthesize preferredOutputSegmentInterval=_preferredOutputSegmentInterval - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV6 initialSegmentStartTime;                     //@synthesize initialSegmentStartTime=_initialSegmentStartTime - In the implementation block
@property (nonatomic,copy) NSString * outputFileTypeProfile;                             //@synthesize outputFileTypeProfile=_outputFileTypeProfile - In the implementation block
@property (assign,nonatomic) long long initialMovieFragmentSequenceNumber;               //@synthesize initialMovieFragmentSequenceNumber=_initialMovieFragmentSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL producesCombinableFragments;                           //@synthesize producesCombinableFragments=_producesCombinableFragments - In the implementation block
-(void)dealloc;
-(id<AVAssetWriterDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterDelegate>)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CGAffineTransform)preferredTransform;
-(NSArray *)inputs;
-(NSArray *)metadataItems;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(void)setInputs:(NSArray *)arg1 ;
-(float)preferredRate;
-(void)setPreferredRate:(float)arg1 ;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(SCD_Struct_AV6)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(float)preferredVolume;
-(SCD_Struct_AV6)overallDurationHint;
-(void)setPreferredVolume:(float)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)setMediaFileType:(AVMediaFileType *)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(NSURL *)directoryForTemporaryFiles;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(long long)singlePassFileSize;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(long long)singlePassMediaDataSize;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(NSArray *)inputGroups;
-(void)setInputGroups:(NSArray *)arg1 ;
-(SCD_Struct_AV6)preferredOutputSegmentInterval;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)initialSegmentStartTime;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(NSString *)outputFileTypeProfile;
-(void)setOutputFileTypeProfile:(NSString *)arg1 ;
-(long long)initialMovieFragmentSequenceNumber;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(BOOL)producesCombinableFragments;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
@end

