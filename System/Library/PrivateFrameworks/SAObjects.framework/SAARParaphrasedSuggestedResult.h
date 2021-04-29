/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (assign,nonatomic) long long rank; 
+(id)paraphrasedSuggestedResult;
+(id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)encodedClassName;
@end

