/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APGraphLayer : CALayer {

	float* _Values;
	float* _Mins;
	float* _Maxes;
	int* _StartIndex;
	int* _NumValues;
	int _NumGraphs;
	CGPoint* _Lines;
	int _MaxLength;
	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;

}
+(CGColorRef)copyGraphColorWithIndex:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setUpGraphs:(int)arg1 ;
-(void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4 ;
-(void)updateValue:(int)arg1 value:(float)arg2 ;
@end

