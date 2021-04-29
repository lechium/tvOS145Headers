/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface MPCSceneCollection : NSObject {

	NSString* _version;
	double _frameRate;
	NSArray* _scenes;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double frameRate;              //@synthesize frameRate=_frameRate - In the implementation block
@property (nonatomic,copy) NSArray * scenes;                //@synthesize scenes=_scenes - In the implementation block
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSArray *)scenes;
-(double)frameRate;
-(void)setFrameRate:(double)arg1 ;
-(void)setScenes:(NSArray *)arg1 ;
@end
