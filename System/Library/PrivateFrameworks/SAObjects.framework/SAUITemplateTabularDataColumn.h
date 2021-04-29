/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSNumber, NSArray;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (nonatomic,copy) NSNumber * minimumWidth; 
@property (nonatomic,copy) NSNumber * rightMargin; 
@property (nonatomic,copy) NSArray * values; 
+(id)tabularDataColumn;
+(id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(void)setValues:(NSArray *)arg1 ;
-(void)setRightMargin:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)minimumWidth;
-(void)setMinimumWidth:(NSNumber *)arg1 ;
-(NSNumber *)rightMargin;
@end
