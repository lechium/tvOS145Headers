/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BWIrisMovieInfo;

@interface BWIrisMovieInfoAndCallback : NSObject {

	BWIrisMovieInfo* _info;
	/*^block*/id _callback;
	BOOL _processed;
	double _overCaptureQualityScore;
	unsigned _overCaptureQualityScoringVersion;

}

@property (nonatomic,readonly) BWIrisMovieInfo * info;                               //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) id callback;                                          //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL processed;                                         //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) double overCaptureQualityScore;                         //@synthesize overCaptureQualityScore=_overCaptureQualityScore - In the implementation block
@property (assign,nonatomic) unsigned overCaptureQualityScoringVersion;              //@synthesize overCaptureQualityScoringVersion=_overCaptureQualityScoringVersion - In the implementation block
+(id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)callback;
-(BWIrisMovieInfo *)info;
-(BOOL)processed;
-(void)setProcessed:(BOOL)arg1 ;
-(id)_initWithMovieInfo:(id)arg1 callback:(/*^block*/id)arg2 ;
-(double)overCaptureQualityScore;
-(void)setOverCaptureQualityScore:(double)arg1 ;
-(unsigned)overCaptureQualityScoringVersion;
-(void)setOverCaptureQualityScoringVersion:(unsigned)arg1 ;
@end

