/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSFLPCMTypeConverter : NSObject
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
+(void)applyNegative12dBGainToFloatBuffer:(id)arg1 ;
+(void)applyNegative12dBGainToShortBuffer:(id)arg1 ;
+(id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1 ;
+(void)apply12dBGainToFloatBuffer:(id)arg1 ;
+(void)apply12dBGainToShortBuffer:(id)arg1 ;
+(void)applyGain:(float)arg1 toShortBuffer:(id)arg2 ;
+(void)applyGain:(float)arg1 toFloatBuffer:(id)arg2 ;
@end

