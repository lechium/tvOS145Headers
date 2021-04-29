/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {

	BOOL _shouldUseMapTiles;
	UIImageView* _mapImageView;

}

@property (nonatomic,retain) UIImageView * mapImageView;              //@synthesize mapImageView=_mapImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMapTiles;                  //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
+(id)defaultMapImage;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setProperty:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)variableConstraints;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
-(BOOL)shouldUseMapTiles;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(void)setMapImage:(id)arg1 ;
-(void)mapSnapshotWithPlacemark:(id)arg1 ;
-(UIImageView *)mapImageView;
-(void)tapGesture:(id)arg1 ;
@end

