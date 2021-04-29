/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSDictionary, UIColor;

@interface TVLTableColumnDefinitionElement : TVLElement {

	int _width;
	NSString* _title;
	NSString* _alignment;
	NSDictionary* _styleKeyValues;

}

@property (nonatomic,retain) NSDictionary * styleKeyValues;              //@synthesize styleKeyValues=_styleKeyValues - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) int width;                                  //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) UIColor * titleColor; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(int)width;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setWidth:(int)arg1 ;
-(UIColor *)titleColor;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSDictionary *)styleKeyValues;
-(void)setStyleKeyValues:(NSDictionary *)arg1 ;
@end

