/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITapGestureRecognizer.h>

@interface _UIVoiceCommandButtonTapGestureRecognizer : UITapGestureRecognizer {

	double _pressEventBeginTimestamp;
	double _pressEventEndTimestamp;

}

@property (assign,nonatomic) double pressEventBeginTimestamp;              //@synthesize pressEventBeginTimestamp=_pressEventBeginTimestamp - In the implementation block
@property (assign,nonatomic) double pressEventEndTimestamp;                //@synthesize pressEventEndTimestamp=_pressEventEndTimestamp - In the implementation block
-(void)reset;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)voiceCommandButtonTapDuration;
-(double)pressEventBeginTimestamp;
-(void)setPressEventBeginTimestamp:(double)arg1 ;
-(double)pressEventEndTimestamp;
-(void)setPressEventEndTimestamp:(double)arg1 ;
@end

