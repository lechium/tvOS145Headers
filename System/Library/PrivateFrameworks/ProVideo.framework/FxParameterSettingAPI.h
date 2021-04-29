/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxParameterSettingAPI
@required
-(BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned)arg2;
-(BOOL)setParameterFlags:(unsigned)arg1 toParm:(unsigned)arg2;
-(BOOL)setFloatValue:(double)arg1 toParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)setIntValue:(int)arg1 toParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned)arg2 atTime:(double)arg3;
-(BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned)arg4 atTime:(double)arg5;
-(BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned)arg5 atTime:(double)arg6;
-(BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned)arg3 atTime:(double)arg4;

@end
