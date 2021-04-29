/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASRecognition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * phrases; 
@property (assign,nonatomic) long long sentenceConfidence; 
@property (nonatomic,copy) NSArray * utterances; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognition;
+(id)recognitionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
-(id)encodedClassName;
-(long long)sentenceConfidence;
-(void)setSentenceConfidence:(long long)arg1 ;
-(NSArray *)utterances;
-(void)setUtterances:(NSArray *)arg1 ;
@end

