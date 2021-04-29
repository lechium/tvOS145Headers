/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAWebWebResult.h>

@class NSDate, NSString;

@interface SAWebNewsResult : SAWebWebResult

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsResult;
+(id)newsResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(id)encodedClassName;
@end

