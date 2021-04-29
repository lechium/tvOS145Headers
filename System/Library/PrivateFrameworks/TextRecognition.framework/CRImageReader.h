/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CREngine;
#import <TextRecognition/TextRecognition-Structs.h>
@class NSArray, NSDictionary, NSObject;

@interface CRImageReader : NSObject {

	NSArray* _outputObjectTypes;
	BOOL _shouldCancel;
	NSDictionary* _userOptions;
	NSObject*<CREngine> _engine;

}

@property (nonatomic,retain) NSDictionary * userOptions;              //@synthesize userOptions=_userOptions - In the implementation block
@property (assign) BOOL shouldCancel;                                 //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,retain) NSObject*<CREngine> engine;              //@synthesize engine=_engine - In the implementation block
@property (copy) NSArray * outputObjectTypes; 
+(id)errorWithErrorCode:(long long)arg1 ;
+(id)defaultOptions;
+(id)supportedLanguagesForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3 ;
+(id)_engineFromOptions:(id)arg1 error:(id*)arg2 ;
+(Class)_engineClassFromOptions:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)defaultRevisionNumber;
+(id)descriptionForErrorCode:(long long)arg1 ;
+(id)languageSetFromOptionsDictionary:(id)arg1 ;
-(void)cancel;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(NSObject*<CREngine>)engine;
-(void)setEngine:(NSObject*<CREngine>)arg1 ;
-(id)resultsForPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)resultsForPixelBuffer:(CVBufferRef)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(/*^block*/id)arg5 ;
-(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
-(void)setOutputObjectTypes:(NSArray *)arg1 ;
-(NSArray *)outputObjectTypes;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(id)signpostLog;
-(id)detectorStats;
-(id)postProcStats;
-(void)setUserOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)userOptions;
-(id)resultsForPixelBuffer:(CVBufferRef)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)textResultsForImage:(id)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(/*^block*/id)arg5 ;
-(id)confidenceThresholdProvider;
-(id)textResultsForImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 ;
-(id)textDetectorResultsForImage:(id)arg1 error:(id*)arg2 ;
-(id)recognizerStats;
-(id)recognizerInferenceStats;
-(id)recognizerDecodingStats;
-(id)detectorInferenceStats;
-(BOOL)purgeCaches:(id)arg1 ;
-(id)textResultsForImageAtURL:(id)arg1 options:(id)arg2 ;
-(id)textResultsForImage:(id)arg1 options:(id)arg2 ;
-(id)textRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3 ;
-(id)textRecognizerResultsForTextFeatures:(id)arg1 forImageAtURL:(id)arg2 options:(id)arg3 ;
@end

