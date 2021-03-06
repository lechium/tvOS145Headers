/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SADecoratedString;

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * bodyText; 
@property (nonatomic,retain) SADecoratedString * decoratedBodyText; 
@property (nonatomic,copy) NSString * position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bodyTextItem;
+(id)bodyTextItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)position;
-(id)groupIdentifier;
-(void)setPosition:(NSString *)arg1 ;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)bodyText;
-(void)setBodyText:(NSString *)arg1 ;
-(SADecoratedString *)decoratedBodyText;
-(void)setDecoratedBodyText:(SADecoratedString *)arg1 ;
@end

