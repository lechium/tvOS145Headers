/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLPhotoElement : TVLElement {

	NSString* _caption;
	NSArray* _badges;
	NSArray* _assets;

}

@property (nonatomic,retain) NSString * caption;              //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) NSArray * badges;                //@synthesize badges=_badges - In the implementation block
@property (nonatomic,retain) NSArray * assets;                //@synthesize assets=_assets - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)badges;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setBadges:(NSArray *)arg1 ;
@end

