/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSString;

@interface AXMText : NSObject {

	NSString* _text;
	double _confidence;
	CGRect _boundingBox;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) double confidence;               //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
@end

