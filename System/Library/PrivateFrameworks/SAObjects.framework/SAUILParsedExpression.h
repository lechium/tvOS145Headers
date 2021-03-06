/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SAUILParseableExpression, NSString;

@interface SAUILParsedExpression : SADomainObject

@property (nonatomic,retain) SAUILParseableExpression * parseableExpression; 
@property (nonatomic,copy) NSString * parsedOutput; 
+(id)parsedExpression;
+(id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUILParseableExpression *)parseableExpression;
-(void)setParseableExpression:(SAUILParseableExpression *)arg1 ;
-(NSString *)parsedOutput;
-(void)setParsedOutput:(NSString *)arg1 ;
@end

