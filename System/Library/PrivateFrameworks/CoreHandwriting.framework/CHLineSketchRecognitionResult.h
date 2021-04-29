/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@class NSArray;

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult {

	BOOL _cornerLine;
	int _startEndpointType;
	int _endEndpointType;
	NSArray* _pathPoints;
	CGPoint _startLocation;
	CGPoint _endLocation;
	CGPoint _midpointLocation;
	CGPoint _controlPoint;

}

@property (readonly) int startEndpointType;                 //@synthesize startEndpointType=_startEndpointType - In the implementation block
@property (readonly) int endEndpointType;                   //@synthesize endEndpointType=_endEndpointType - In the implementation block
@property (readonly) CGPoint startLocation;                 //@synthesize startLocation=_startLocation - In the implementation block
@property (readonly) CGPoint endLocation;                   //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) CGPoint midpointLocation;              //@synthesize midpointLocation=_midpointLocation - In the implementation block
@property (readonly) CGPoint controlPoint;                  //@synthesize controlPoint=_controlPoint - In the implementation block
@property (readonly) NSArray * pathPoints;                  //@synthesize pathPoints=_pathPoints - In the implementation block
@property (readonly) BOOL cornerLine;                       //@synthesize cornerLine=_cornerLine - In the implementation block
-(void)dealloc;
-(CGPoint)startLocation;
-(CGPoint)endLocation;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(CGPoint)arg8 controlPointLocation:(CGPoint)arg9 ;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(CGPoint)arg8 controlPointLocation:(CGPoint)arg9 pathPoints:(id)arg10 ;
-(int)startEndpointType;
-(int)endEndpointType;
-(CGPoint)midpointLocation;
-(CGPoint)controlPoint;
-(NSArray *)pathPoints;
-(BOOL)cornerLine;
@end

