/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSArray, SAHAFilter;

@interface SAHAActionRequest : SADomainObject

@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) long long executionOrder; 
@property (nonatomic,retain) SAHAFilter * filter; 
+(id)actionRequest;
+(id)actionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAHAFilter *)filter;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(id)encodedClassName;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
@end

