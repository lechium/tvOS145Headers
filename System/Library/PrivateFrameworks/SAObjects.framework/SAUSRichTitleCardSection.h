/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUSTitleCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSString * contentRatingText; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SAUIImageResource * titleImage; 
+(id)richTitleCardSection;
+(id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)centered;
-(id)encodedClassName;
-(void)setCentered:(BOOL)arg1 ;
-(NSString *)contentRatingText;
-(void)setContentRatingText:(NSString *)arg1 ;
-(SAUIImageResource *)titleImage;
-(void)setTitleImage:(SAUIImageResource *)arg1 ;
@end

