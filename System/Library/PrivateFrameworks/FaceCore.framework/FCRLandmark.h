/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FaceCore/FaceCore-Structs.h>
@class NSString;

@interface FCRLandmark : NSObject {

	NSString* type;
	unsigned long long pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned long long pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
-(void)dealloc;
-(NSString *)type;
-(id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(CGPoint*)arg3 ;
-(unsigned long long)pointCount;
-(CGPoint*)points;
@end

