/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCAcceptCandidateInput : MCKeyboardInput {

	NSString* _candidateText;
	NSString* _convertedInput;
	NSArray* _remainingMecabraInputs;
	NSString* _remainingInputString;

}

@property (nonatomic,copy,readonly) NSString * candidateText;               //@synthesize candidateText=_candidateText - In the implementation block
@property (nonatomic,copy,readonly) NSString * convertedInput;              //@synthesize convertedInput=_convertedInput - In the implementation block
@property (copy) NSArray * remainingMecabraInputs;                          //@synthesize remainingMecabraInputs=_remainingMecabraInputs - In the implementation block
@property (copy) NSString * remainingInputString;                           //@synthesize remainingInputString=_remainingInputString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithCandidateText:(id)arg1 convertedInput:(id)arg2 ;
-(NSString *)candidateText;
-(NSString *)convertedInput;
-(NSArray *)remainingMecabraInputs;
-(void)setRemainingMecabraInputs:(NSArray *)arg1 ;
-(NSString *)remainingInputString;
-(void)setRemainingInputString:(NSString *)arg1 ;
@end

