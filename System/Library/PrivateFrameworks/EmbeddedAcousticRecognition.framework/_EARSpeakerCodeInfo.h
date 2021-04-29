/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface _EARSpeakerCodeInfo : NSObject {

	BOOL _isSpeakerCodeUsed;
	NSString* _trainingSpeakerCode;
	NSString* _inferenceSpeakerCode;
	NSString* _accumulatedGradient;
	NSNumber* _numFrames;
	NSNumber* _nnetVersion;
	NSNumber* _trainingOffset;
	NSNumber* _recognitionOffset;

}

@property (nonatomic,readonly) NSString * trainingSpeakerCode;              //@synthesize trainingSpeakerCode=_trainingSpeakerCode - In the implementation block
@property (nonatomic,copy) NSString * inferenceSpeakerCode;                 //@synthesize inferenceSpeakerCode=_inferenceSpeakerCode - In the implementation block
@property (nonatomic,readonly) NSString * accumulatedGradient;              //@synthesize accumulatedGradient=_accumulatedGradient - In the implementation block
@property (nonatomic,copy) NSNumber * numFrames;                            //@synthesize numFrames=_numFrames - In the implementation block
@property (nonatomic,readonly) NSNumber * nnetVersion;                      //@synthesize nnetVersion=_nnetVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * trainingOffset;                   //@synthesize trainingOffset=_trainingOffset - In the implementation block
@property (nonatomic,readonly) NSNumber * recognitionOffset;                //@synthesize recognitionOffset=_recognitionOffset - In the implementation block
@property (assign,nonatomic) BOOL isSpeakerCodeUsed;                        //@synthesize isSpeakerCodeUsed=_isSpeakerCodeUsed - In the implementation block
-(id)initWithLanguage:(id)arg1 ;
-(NSString *)trainingSpeakerCode;
-(NSString *)inferenceSpeakerCode;
-(NSString *)accumulatedGradient;
-(NSNumber *)nnetVersion;
-(NSNumber *)numFrames;
-(NSNumber *)trainingOffset;
-(NSNumber *)recognitionOffset;
-(void)setInferenceSpeakerCode:(NSString *)arg1 ;
-(void)setNumFrames:(NSNumber *)arg1 ;
-(void)setIsSpeakerCodeUsed:(BOOL)arg1 ;
-(BOOL)isSpeakerCodeUsed;
@end

