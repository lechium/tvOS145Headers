/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPImageView.h>

@interface _TVPMusicArtworkImageView : TVPImageView {

	long long _placeholderAssetType;
	/*^block*/id _placeholderImageBlock;

}

@property (assign,nonatomic) long long placeholderAssetType;              //@synthesize placeholderAssetType=_placeholderAssetType - In the implementation block
@property (nonatomic,copy) id placeholderImageBlock;                      //@synthesize placeholderImageBlock=_placeholderImageBlock - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(BOOL)canBecomeFocused;
-(void)_updatePlaceholderImageIfNeeded;
-(long long)placeholderAssetType;
-(void)setPlaceholderAssetType:(long long)arg1 ;
-(void)setPlaceholderImageBlock:(id)arg1 ;
-(id)placeholderImageBlock;
@end

