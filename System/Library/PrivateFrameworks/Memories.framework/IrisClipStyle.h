/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class IrisClip;

@interface IrisClipStyle : NSObject {

	IrisClip* _irisClip;

}

@property (assign,nonatomic,__weak) IrisClip * irisClip;              //@synthesize irisClip=_irisClip - In the implementation block
-(int)duration;
-(double)maximumDuration;
-(double)minimumDuration;
-(double)idealDuration;
-(int)projectFrameRate;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(double)maximumPhotoDuration;
-(IrisClip *)irisClip;
-(double)projectAspectRatio;
-(void)adjustGeometryOfIntroClip:(id)arg1 outroClip:(id)arg2 ;
-(void)setIrisClip:(IrisClip *)arg1 ;
-(NSRange)preferredInTransitionDurationRange;
-(NSRange)preferredOutTransitionDurationRange;
-(BOOL)buildIntro;
-(BOOL)buildOutro;
@end

