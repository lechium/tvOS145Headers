/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardInput;

@interface TISKInputEvent : TISKEvent {

	double _downErrorDistance;
	double _upErrorDistance;
	BOOL _canComputeErrorDistance;
	BOOL _ignoreTapData;
	TIKeyboardInput* _input;

}

@property (nonatomic,retain) TIKeyboardInput * input;              //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) BOOL ignoreTapData;                   //@synthesize ignoreTapData=_ignoreTapData - In the implementation block
+(id)makeInputEvent:(id)arg1 emojiSearchMode:(BOOL)arg2 order:(long long)arg3 wordSeparator:(id)arg4 accentedLanguage:(BOOL)arg5 ;
-(TIKeyboardInput *)input;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(id)upTouchEvent;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(BOOL)isMissingATouch;
-(id)init:(id)arg1 type:(int)arg2 emojiSearchMode:(BOOL)arg3 order:(long long)arg4 ;
-(double)downUpTimeDelta;
-(void)_computeErrorDistance;
-(double)touchDownErrorDistance;
-(double)touchUpErrorDistance;
-(BOOL)ignoreTapData;
-(void)setIgnoreTapData:(BOOL)arg1 ;
@end

