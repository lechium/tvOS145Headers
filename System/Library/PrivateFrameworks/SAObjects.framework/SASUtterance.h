/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASUtterance : AceObject <SAAceSerializable>

@property (assign,nonatomic) double confidenceScore; 
@property (nonatomic,copy) NSArray * interpretationIndices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)utterance;
+(id)utteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setConfidenceScore:(double)arg1 ;
-(double)confidenceScore;
-(id)encodedClassName;
-(NSArray *)interpretationIndices;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
@end

