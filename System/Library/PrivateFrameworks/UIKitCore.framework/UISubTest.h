/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSMutableArray, NSString, NSMutableDictionary;

@interface UISubTest : NSObject {

	NSNumber* _startTime;
	NSNumber* _startFrame;
	NSMutableArray* _time;
	NSMutableArray* _fps;
	NSString* _testName;
	BOOL _showTime;
	BOOL _showFps;
	NSMutableDictionary* _data;

}

@property (readonly) NSNumber * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)startTime;
-(id)outputData;
-(id)initWithName:(id)arg1 metrics:(id)arg2 ;
-(void)startWithFrameCount:(id)arg1 ;
-(void)stopWithFrameCount:(id)arg1 ;
-(id)getObjectForKey:(id)arg1 ;
@end

