/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIDictationInterpretation;

@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding> {

	BOOL _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,readonly) NSArray * interpretations;                                   //@synthesize interpretations=_interpretations - In the implementation block
@property (nonatomic,readonly) double bestConfidenceScore; 
@property (nonatomic,readonly) UIDictationInterpretation * bestInterpretation; 
@property (nonatomic,readonly) BOOL isLowConfidence;                                        //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLowConfidence;
-(NSArray *)interpretations;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(UIDictationInterpretation *)bestInterpretation;
-(id)initWithInterpretations:(id)arg1 ;
-(double)bestConfidenceScore;
@end
