/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * minimumHeight; 
@property (nonatomic,copy) NSNumber * rowCount; 
@property (nonatomic,copy) NSNumber * rowStartIndex; 
@property (nonatomic,copy) NSNumber * showTopBorder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabularDataRowStyleRule;
+(id)tabularDataRowStyleRuleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)rowCount;
-(id)encodedClassName;
-(NSNumber *)minimumHeight;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)setRowCount:(NSNumber *)arg1 ;
-(NSNumber *)rowStartIndex;
-(void)setRowStartIndex:(NSNumber *)arg1 ;
-(NSNumber *)showTopBorder;
-(void)setShowTopBorder:(NSNumber *)arg1 ;
@end

