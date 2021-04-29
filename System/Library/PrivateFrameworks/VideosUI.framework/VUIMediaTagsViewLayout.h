/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, NSArray, TVImageLayout;

@interface VUIMediaTagsViewLayout : TVViewLayout {

	unsigned long long _type;
	VUITextLayout* _textLayout;
	VUITextLayout* _rentalExpirationTextLayout;
	NSArray* _groupedKeys;
	TVImageLayout* _badgeImageLayout;
	UIEdgeInsets _groupMargin;
	UIEdgeInsets _commonSenseMargin;
	UIEdgeInsets _tomatoMeterMargin;

}

@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) VUITextLayout * textLayout;                              //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * rentalExpirationTextLayout;              //@synthesize rentalExpirationTextLayout=_rentalExpirationTextLayout - In the implementation block
@property (nonatomic,readonly) NSArray * groupedKeys;                                   //@synthesize groupedKeys=_groupedKeys - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets groupMargin;                                //@synthesize groupMargin=_groupMargin - In the implementation block
@property (nonatomic,readonly) TVImageLayout * badgeImageLayout;                        //@synthesize badgeImageLayout=_badgeImageLayout - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets commonSenseMargin;                          //@synthesize commonSenseMargin=_commonSenseMargin - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets tomatoMeterMargin;                          //@synthesize tomatoMeterMargin=_tomatoMeterMargin - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(VUITextLayout *)textLayout;
-(VUITextLayout *)rentalExpirationTextLayout;
-(NSArray *)groupedKeys;
-(UIEdgeInsets)groupMargin;
-(TVImageLayout *)badgeImageLayout;
-(UIEdgeInsets)commonSenseMargin;
-(UIEdgeInsets)tomatoMeterMargin;
@end

