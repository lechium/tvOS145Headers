/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBParticleStroke <RBStroke>
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) float imageScale; 
@property (nonatomic,readonly) int imageCount; 
@property (nonatomic,readonly) BOOL rotatesImage; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) long long seed; 
@required
-(long long)seed;
-(int)imageCount;
-(CGImageRef)image;
-(int)blendMode;
-(float)imageScale;
-(BOOL)rotatesImage;

@end

