/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject {

	long long _algorithm;
	UIImage* _image;

}

@property (nonatomic,readonly) long long algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) UIImage * image;                  //@synthesize image=_image - In the implementation block
-(long long)algorithm;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 algorithm:(long long)arg2 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fallbackColorAnalysis;
@end

